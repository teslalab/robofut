/*
  Código para Balam 2022
  Código para prueba del sensor IR que detectará el balón.
  
  Código trabajo por: Oscar Rodas / Tesla Lab / Universidad Galileo
*/

#define dataSensorIR 19


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(dataSensorIR,INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Data Sensor IR: ");
  Serial.println(digitalRead(dataSensorIR));  //Se captura la data enviada por el sensor IR.
  delay(1000);

}
