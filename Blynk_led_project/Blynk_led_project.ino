#define led D1

int x ; 
int value;

#define BLYNK_TEMPLATE_ID "TMPL3l0sVn5mv"
#define BLYNK_TEMPLATE_NAME "led"
#define BLYNK_AUTH_TOKEN "F2sqAZjrVqjvK4YpUnB5Lzdzx9J4A2mP"

#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "My_Station";
char pass[] = "myhome@123";



void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
 Serial.begin(115200);

  Blynk.begin(auth, ssid, pass);
}


  BLYNK_WRITE(V0) {
   value = param.asInt(); // Get value as integer

 
}


void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();
 x = random(0,256);
 
 if(value == 1){
analogWrite(led,x);

 }
 else{
  analogWrite(led,0);
 }
 Blynk.virtualWrite(V1, x);
}