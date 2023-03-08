using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using System;
using UnityEngine.UI;
using UnityEngine.Android;



public class GPSLocation: MonoBehaviour
{
    public Text GPSStatus;
    public Text latitudeVal;
    public Text longitudeVal;
    public Text altitudeVal;
    public Text horizontalAccuracyVal;
    public Text timestampVal;

    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(GPSLoc());
    }

    IEnumerator GPSLoc()
    {
        if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
        {
            Permission.RequestUserPermission(Permission.FineLocation);
            Permission.RequestUserPermission(Permission.CoarseLocation);
        }
        // check if user has location services enabled
        if (!Input.location.isEnabledByUser)
            yield break;

        Input.location.Start();
        int i = 0;
        while (Input.location.status == LocationServiceStatus.Initializing && i < 20)
        {
            yield return new WaitForSeconds(1);
            i++;
        }
        if (i > 20)
        {
            //failed to initalize
            GPSStatus.text = "Time out";
            yield break;
        }

        if(Input.location.status == LocationServiceStatus.Failed)
        {
            //failed to connect
            GPSStatus.text = "Unable to determine device location";
            yield break;
        }
        else
        {
            // access granted
            GPSStatus.text = "Running";
            InvokeRepeating("UpdateGPSData", 0.5f, 1f);
        }
    }

    private void UpdateGPSData()
    {
        if(Input.location.status == LocationServiceStatus.Running)
        {
            // gps running
            GPSStatus.text = "Running";
            latitudeVal.text = Input.location.lastData.latitude.ToString();
            longitudeVal.text = Input.location.lastData.longitude.ToString();
            altitudeVal.text = Input.location.lastData.altitude.ToString();
            horizontalAccuracyVal.text = Input.location.lastData.horizontalAccuracy.ToString();
            timestampVal.text = Input.location.lastData.timestamp.ToString();
        }
        else
        {
            GPSStatus.text = "Stopped";
            // service stopped
        }
    }
    
}
