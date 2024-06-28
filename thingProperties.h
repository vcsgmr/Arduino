// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>
#include "SECRET.h"

void onTextChange();
void onHudifiChange();
void onHudifiTimeChange();
void onHumidityChange();
void onLedChange();
void onLedBrightnessChange();
void onPumpChange();
void onPumpTimeChange();
void onTemperatureChange();
void onTimerSimChange();
void onStepperChange();
void onTimerSimOnChange();
void onToggleHumidityChange();
void onToggleTemperatureChange();

String humidityStatus;
String lightStatus;
String temperatureStatus;
String text;
float water;
int hudifi;
int hudifiTime;
int humidity;
int led;
int ledBrightness;
int light;
int pump;
int pumpTime;
int temperature;
int timerSim;
bool stepper;
bool timerSimOn;
bool toggleHumidity;
bool toggleTemperature;
CloudTime localTime;

void initProperties(){

  ArduinoCloud.addProperty(humidityStatus, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(lightStatus, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(temperatureStatus, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(text, READWRITE, ON_CHANGE, onTextChange);
  ArduinoCloud.addProperty(water, READ, ON_CHANGE, NULL);
  ArduinoCloud.addProperty(hudifi, READWRITE, ON_CHANGE, onHudifiChange);
  ArduinoCloud.addProperty(hudifiTime, READWRITE, ON_CHANGE, onHudifiTimeChange);
  ArduinoCloud.addProperty(humidity, READWRITE, 10 * SECONDS, onHumidityChange);
  ArduinoCloud.addProperty(led, READWRITE, ON_CHANGE, onLedChange);
  ArduinoCloud.addProperty(ledBrightness, READWRITE, ON_CHANGE, onLedBrightnessChange);
  ArduinoCloud.addProperty(light, READ, 10 * SECONDS, NULL);
  ArduinoCloud.addProperty(pump, READWRITE, ON_CHANGE, onPumpChange);
  ArduinoCloud.addProperty(pumpTime, READWRITE, ON_CHANGE, onPumpTimeChange);
  ArduinoCloud.addProperty(temperature, READWRITE, 10 * SECONDS, onTemperatureChange);
  ArduinoCloud.addProperty(timerSim, READWRITE, ON_CHANGE, onTimerSimChange);
  ArduinoCloud.addProperty(stepper, READWRITE, ON_CHANGE, onStepperChange);
  ArduinoCloud.addProperty(timerSimOn, READWRITE, ON_CHANGE, onTimerSimOnChange);
  ArduinoCloud.addProperty(toggleHumidity, READWRITE, ON_CHANGE, onToggleHumidityChange);
  ArduinoCloud.addProperty(toggleTemperature, READWRITE, ON_CHANGE, onToggleTemperatureChange);
  ArduinoCloud.addProperty(localTime, READ, ON_CHANGE, NULL);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
