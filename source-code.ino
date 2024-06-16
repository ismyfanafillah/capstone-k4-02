#include <DHT.h>
#include <Wire.h>
#include <BH1750.h>
#include <WiFi.h>
#include <HTTPClient.h>

DHT dht(4, DHT22);
BH1750 lightMeter;

void setup()
{
    dht.begin();
    Wire.begin();
    lightMeter.begin();
    WiFi.begin("WIFI_NAME", "WIFI_PASSWORD");
    while (!WiFi.isConnected())
        delay(500);
}

void loop()
{
    int nh3 = analogRead(35);
    float Tc = dht.readTemperature();
    float RH = dht.readHumidity();
    float lux = lightMeter.readLightLevel();

    WiFiClient wifi;
    HTTPClient http;

    http.begin(wifi, "http://api.thingspeak.com/update");
    http.addHeader("Content-Type", "application/x-www-form-urlencoded");
    http.POST("api_key=THINGSPEAK_API&field1=" + String(Tc) + "&field2=" + RH + "&field3=" + lux + "&field4=" + nh3);
    http.end();

    delay(30000);
}
