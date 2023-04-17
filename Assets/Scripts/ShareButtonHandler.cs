using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System;
using UnityEngine.UI;
using UnityEngine.Android;
using System.Globalization;

public class ShareButtonHandler : MonoBehaviour
{
    public Text latitudeVal;
    public Text longitudeVal;
    public Text altitudeVal;
    public Text input;

    public Button submitButton;
    public Entry entry;

    // Start is called before the first frame update
    void Start()
    {
        Button btn = submitButton.GetComponent<Button>();
        btn.onClick.AddListener(ShareLocation);
    }

    // Update is called once per frame
    void Update()
    {

    }
    string LocationUpdate()
    {
            string shareMessage = (ParseLatitude(latitudeVal.text) + " " + ParseLongitude(longitudeVal.text) + " " + altitudeVal.text);
            return shareMessage;
    }
    string ParseLatitude(string Val)
    {
        double Value = Convert.ToDouble(Val);

        var direction = Value < 0 ? "S" : "N";

        Value = Math.Abs(Value);

        var degrees = Math.Truncate(Value);

        Value = (Value - degrees) * 60;

        var minutes = Math.Truncate(Value);
        var seconds = (Value - minutes) * 60;

        string degreesStr = degrees.ToString()+"°";
        string minutesStr = minutes.ToString()+"'";
        string secondsStr = seconds.ToString()+"''";
        string directionStr = direction;

        return degreesStr + minutesStr + secondsStr + directionStr;
    }

    string ParseLongitude(string Val)
    {
        double Value = Convert.ToDouble(Val);
        var direction = Value < 0 ? "W" : "E";

        Value = Math.Abs(Value);

        var degrees = Math.Truncate(Value);

        Value = (Value - degrees) * 60;

        var minutes = Math.Truncate(Value);
        var seconds = (Value - minutes) * 60;

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
      string url = "https://api.echo3D.com";
      string key = "<API-KEY>";
      string data = "location";
      string value = shareMessage;

      StartCoroutine(UploadMetadata(url,key,data,value));
      StartCoroutine(UploadMetadata(url,key,"message",input.text));
    }

    IEnumerator UploadMetadata(string url, string key, string data, string value) {
        WWWForm form = new WWWForm();
        form.AddField("key", key);
        form.AddField("entry", "<ENTRY-ID>");
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
