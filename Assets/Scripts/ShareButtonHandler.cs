using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System;

public class ShareButtonHandler : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
      StartCoroutine(LocationStart());
    }

    // Update is called once per frame
    void Update()
    {

    }

    IEnumerator LocationStart() {
      if (!Input.location.isEnabledByUser)
           yield break;

       // Start service before querying location
       Input.location.Start();

       // Wait until service initializes
       int maxWait = 20;
       while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
       {
           yield return new WaitForSeconds(1);
           maxWait--;
       }

       // Service didn't initialize in 20 seconds
       if (maxWait < 1)
       {
           print("Timed out");
           yield break;
       }
    }

    string LocationUpdate() {
      // Connection has failed
      if (Input.location.status == LocationServiceStatus.Failed)
      {
          Debug.Log("Unable to determine device location");
          return "";
      }
      else
      {
          string shareMessage = (ParseLatitude(Input.location.lastData.latitude) + " " + ParseLongitude(Input.location.lastData.longitude) + " " + Input.location.lastData.altitude);
          // string shareMessage = ( + " " + Input.location.lastData.longitude + " " + Input.location.lastData.altitude);
          return shareMessage;
      }
    }

    string ParseLatitude(double Value)
    {
        var direction = Value < 0 ? "S" : "N";

        Value = Math.Abs(Value);

        var degrees = Math.Truncate(Value);

        Value = (Value - degrees) * 60;       //not Value = (Value - degrees) / 60;

        var minutes = Math.Truncate(Value);
        var seconds = (Value - minutes) * 60; //not Value = (Value - degrees) / 60;

        string degreesStr = degrees.ToString()+"°";
        string minutesStr = minutes.ToString()+"'";
        string secondsStr = seconds.ToString()+"''";
        string directionStr = direction;

        return degreesStr + minutesStr + secondsStr + directionStr;
    }

    string ParseLongitude(double Value)
    {
        var direction = Value < 0 ? "W" : "E";

        Value = Math.Abs(Value);

        var degrees = Math.Truncate(Value);

        Value = (Value - degrees) * 60;       //not Value = (Value - degrees) / 60;

        var minutes = Math.Truncate(Value);
        var seconds = (Value - minutes) * 60; //not Value = (Value - degrees) / 60;

        string degreesStr = degrees.ToString()+"°";
        string minutesStr = minutes.ToString()+"'";
        string secondsStr = seconds.ToString()+"''";
        string directionStr = direction;

        return degreesStr + minutesStr + secondsStr + directionStr;
    }

    public void ShareLocation() {
      string shareMessage = LocationUpdate();
      Debug.Log(shareMessage);
      StartCoroutine(NativeShare(shareMessage));
      string url = "https://console.echoAR.xyz";
      string key = "<API-KEY>";
      string data = "location";
      string value = shareMessage;
      StartCoroutine(UploadMetadata(url,key,data,value));
      GameObject textGameObject = GameObject.Find("Fox");
      textGameObject.GetComponent<UnityEngine.UI.Text>().text = shareMessage;
    }

    IEnumerator UploadMetadata(string url, string key, string data, string value) {
      WWWForm form = new WWWForm();
      form.AddField("key", key);
      form.AddField("data", data);
      form.AddField("value", value);

      using (UnityWebRequest www = UnityWebRequest.Post(url+"/post?", form))
      {
          yield return www.SendWebRequest();

          if (www.isNetworkError || www.isHttpError)
          {
              Debug.Log(www.error);
          }
          else
          {
              Debug.Log("Form upload complete!");
          }
      }
    }

    private IEnumerator NativeShare(string shareMessage) {
      yield return new WaitForEndOfFrame();

      new NativeShare().SetSubject("Sharing Location: ").SetText(shareMessage).Share();
    }
}
