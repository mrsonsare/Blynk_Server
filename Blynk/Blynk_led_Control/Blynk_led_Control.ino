#define BLYNK_TEMPLATE_ID "TMPL3qTrnI2ig"
#define BLYNK_TEMPLATE_NAME "Random data"
#define BLYNK_AUTH_TOKEN "7eyHw474ihZzlrN-gYcMIlp40qTYgCkk"


#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "My_Station";
char pass[] = "myhome@123";

BLYNK_WRITE(V1)
{
  int value = param.asInt();

  if(value == 1)
  {
digitalWrite(D1,HIGH);
  }
  else{
digitalWrite(D1,LOW);
  }
  }
  
void setup()
{
  pinMode(D1, OUTPUT);
 
  Serial.begin(115200);

  Blynk.begin(auth, ssid, pass);
  
}

void loop()
{
  int ran = random(0,100);
  Blynk.run();
  Blynk.virtualWrite(V0,ran);
  
}