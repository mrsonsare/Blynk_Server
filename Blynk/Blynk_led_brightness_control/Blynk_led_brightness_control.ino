#define BLYNK_TEMPLATE_ID "TMPL3LUusluVR"
#define BLYNK_TEMPLATE_NAME "test01"
#define BLYNK_AUTH_TOKEN "WO3KeGGl_EoIsSviV4Ndrn5GWKOawR_O"


#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "My_Station";
char pass[] = "myhome@123";

BLYNK_WRITE(V0)
{
  int value = param.asInt();

    analogWrite(D1,value);
  
  }
  
void setup()
{
  pinMode(D1, OUTPUT);
 
  Serial.begin(115200);

  Blynk.begin(auth, ssid, pass);
  
}

void loop()
{
  Blynk.run();

}