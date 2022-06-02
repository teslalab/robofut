/*
 * Código de apoyo para comprender la interacción entre la tarjeta TL32i, la aplicación 
 * de Dabble (para implementación del gamepad) y el BALAM Kit de Robótica 2022.
 * 
 * Desarrollo por Oscar Rodas / Tesla Lab / Universidad Galileo
 * Mayo 2022
 */


#define CUSTOM_SETTINGS
#define INCLUDE_GAMEPAD_MODULE
#include <DabbleESP32.h>
#include <analogWrite.h>


//Definición de pines
#define AIN1 32
#define AIN2 33
#define BIN1 25
#define BIN2 26

int valorPWMLlantas = 100;
int tiempoPruebas = 100;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);      // make sure your Serial Monitor is also set at this baud rate.
  Dabble.begin("balam2022-ORH");       //set bluetooth name of your device

  pinMode(AIN1,OUTPUT);
  pinMode(AIN2,OUTPUT);
  pinMode(BIN1,OUTPUT);
  pinMode(BIN2,OUTPUT);
  
}

void loop() {
  Dabble.processInput();             //this function is used to refresh data obtained from smartphone.Hence calling this function is mandatory in order to get data properly from your mobile.
  Serial.print("KeyPressed: ");
  if (GamePad.isUpPressed())
  {
    Serial.print("Up");
    digitalWrite(AIN1,HIGH); 
    digitalWrite(AIN2,LOW);
    digitalWrite(BIN1,HIGH); 
    digitalWrite(BIN2,LOW);
    delay(tiempoPruebas);
  }

  if (GamePad.isDownPressed())
  {
    Serial.print("Down");
    digitalWrite(AIN1,LOW); 
    digitalWrite(AIN2,HIGH);
    digitalWrite(BIN1,LOW); 
    digitalWrite(BIN2,HIGH);
    delay(tiempoPruebas);
  }

  if (GamePad.isLeftPressed())
  {
    Serial.print("Left");
    digitalWrite(AIN1,LOW); 
    digitalWrite(AIN2,HIGH);
    digitalWrite(BIN1,HIGH); 
    digitalWrite(BIN2,LOW);
    delay(tiempoPruebas);
  }

  if (GamePad.isRightPressed())
  {
    Serial.print("Right");
    digitalWrite(AIN1,HIGH); 
    digitalWrite(AIN2,LOW);
    digitalWrite(BIN1,LOW); 
    digitalWrite(BIN2,HIGH);
    delay(tiempoPruebas);
  }

  if (GamePad.isSquarePressed())
  {
    Serial.print("Square");
    digitalWrite(AIN1,HIGH); 
    digitalWrite(AIN2,HIGH);
    digitalWrite(BIN1,HIGH); 
    digitalWrite(BIN2,HIGH);
    delay(tiempoPruebas);
  }

  if (GamePad.isCirclePressed())
  {
    Serial.print("Circle");
  }

  if (GamePad.isCrossPressed())
  {
    Serial.print("Cross");
  }

  if (GamePad.isTrianglePressed())
  {
    Serial.print("Triangle");
  }

  if (GamePad.isStartPressed())
  {
    Serial.print("Start");
  }

  if (GamePad.isSelectPressed())
  {
    Serial.print("Select");
  }
  Serial.print('\t');
  //imprimirAngulos();
  Serial.println();
  
  delay(100);
}

void imprimirAngulos (){
  
  int a = GamePad.getAngle();
  Serial.print("Angle: ");
  Serial.print(a);
  Serial.print('\t');
  int b = GamePad.getRadius();
  Serial.print("Radius: ");
  Serial.print(b);
  Serial.print('\t');
  float c = GamePad.getXaxisData();
  Serial.print("x_axis: ");
  Serial.print(c);
  Serial.print('\t');
  float d = GamePad.getYaxisData();
  Serial.print("y_axis: ");
  Serial.println(d);
}
