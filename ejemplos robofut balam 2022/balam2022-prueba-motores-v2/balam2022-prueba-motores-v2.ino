/*
  Código adaptado para Balam 2022
  En este código se tomó de referencia código en el Internet generado por Electropeak y 
  se modificó para los pines en nuestra propio kit.
  Se agregó la librería de AnalogWrite para poder aplicar PWM.
  Código trabajo por: Oscar Rodas / Tesla Lab / Universidad Galileo
  
  DRV8833-Dual-Motor-Driver-Module
  made on 23 Nov 2020
  by Amir Mohammad Shojaee @ Electropeak
  Home

*/

#include <analogWrite.h>

#define AIN1 32
#define AIN2 33
#define BIN1 25
#define BIN2 26

void setup() {
  Serial.begin(9600);
  
  pinMode(AIN1,OUTPUT);
  pinMode(AIN2,OUTPUT);
  pinMode(BIN1,OUTPUT);
  pinMode(BIN2,OUTPUT);
  
}
 
void loop() {

  //Prueba de PWM con 255
  Serial.println("Velocidad de PWM con 255");
  digitalWrite(AIN1,HIGH); 
  analogWrite(AIN2,0);
  digitalWrite(BIN1,HIGH); 
  analogWrite(BIN2,0);

  delay(1000);
  
  digitalWrite(AIN1,LOW); 
  digitalWrite(AIN2,LOW);
  digitalWrite(BIN1,LOW); 
  digitalWrite(BIN2,LOW);
  
  Serial.println("En espera.........");
  delay(2000);
  
  //Prueba de PWM con 64
  Serial.println("Velocidad de PWM con 64");
  digitalWrite(AIN1,HIGH); 
  analogWrite(AIN2,64);
  digitalWrite(BIN1,HIGH); 
  analogWrite(BIN2,64);

  delay(1000);
  
  digitalWrite(AIN1,LOW); 
  digitalWrite(AIN2,LOW);
  digitalWrite(BIN1,LOW); 
  digitalWrite(BIN2,LOW);

  Serial.println("En espera.........");
  delay(2000);

  Serial.println("Cambio de programación.........");
  delay(2000);
  
  //Prueba de PWM con 255
  Serial.println("Velocidad de PWM con 255");
  digitalWrite(AIN1,HIGH); 
  analogWrite(AIN2,0);
  digitalWrite(BIN1,HIGH); 
  analogWrite(BIN2,0);

  delay(1000);
  
  digitalWrite(AIN1,HIGH); 
  analogWrite(AIN2,255);
  digitalWrite(BIN1,HIGH); 
  analogWrite(BIN2,255);
  
  Serial.println("En espera.........");
  delay(2000);
  
  //Prueba de PWM con 64
  Serial.println("Velocidad de PWM con 64");
  digitalWrite(AIN1,HIGH); 
  analogWrite(AIN2,64);
  digitalWrite(BIN1,HIGH); 
  analogWrite(BIN2,64);

  delay(1000);
  
  digitalWrite(AIN1,HIGH); 
  analogWrite(AIN2,255);
  digitalWrite(BIN1,HIGH); 
  analogWrite(BIN2,255);

  Serial.println("En espera.........");
  delay(2000); 
}
