#define BLYNK_TEMPLATE_ID "TMPL34Si2-2Fy"
#define BLYNK_TEMPLATE_NAME "3 LED Control"
#define BLYNK_AUTH_TOKEN "Bek5iR2FFiFIEbfc_P4g2pV7-DFGDDmC"


#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "My_Station";
char pass[] = "myhome@123";

BLYNK_WRITE(V0)
{
  int value = param.asInt();

 if(value == 1){
  digitalWrite(D1,HIGH);
 }
 else{
  digitalWrite(D1,LOW);
 }
  }

  BLYNK_WRITE(V1)
{
  int value = param.asInt();

 if(value == 1){
  digitalWrite(D4,HIGH);
 }
 else{
  digitalWrite(D4,LOW);
 }
  }

  BLYNK_WRITE(V2)
{
  int value = param.asInt();

 if(value == 1){
  digitalWrite(D8,HIGH);
 }
 else{
  digitalWrite(D8,LOW);
 }
  }
  
void setup()
{
  pinMode(D1, OUTPUT);
  pinMode(D4, OUTPUT);
  pinMode(D8, OUTPUT);

  Serial.begin(115200);

  Blynk.begin(auth, ssid, pass);
  
}

void loop()
{
  Blynk.run();

}