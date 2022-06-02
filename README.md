# RoboFut Balam 2022

## Instalación de la Tarjeta de control RoboFut

Para la instalación en Arduino IDE debemos seguir los siguientes pasos:

1. Abrir ARDUINO IDE
2. Debemos ir a la pestaña ***Archivo***->***Preferencias***.
	- En la pestaña ***Ajustes*** buscamos la opción: ***Gestor de URLs Adicionales de Tarjetas: ***
	- Pegamos la siguiente URL: `https://dl.espressif.com/dl/package_esp32_index.json`
	- Luego presionamos la opción ***OK*** y automáticamente se cerrará la ventana.
3. Debemos ir a la pestaña ***Herramientas***->***Placa***->***Gestor de tarjetas***.
	- Colocamos en la barra de búsqueda ***ESP32***.
	- Seleccionamos la opción que nos muestre ***NodeMCU-32S***.
	- Instalamos y luego presionamos la opción de ***Cerrar***.

Con esto tendremos completa la instalación de nuestra tarjeta ESP32 y lista para ser programada.	 

## Instalación USB Driver ***(Si no reconoce el puerto COM)***

En algunos casos nuestra PC no es capaz de reconocer el dispositivo USB que nosotros conectamos, es por ello que dejaremos un archivo para la instalación del driver con ello nuestra PC deberá ser capaz de reconocer el dispositivo conectado, en caso de que el problema persista asegúrese de que su dispositivo no se este sobre calentando.

[Descarga este driver para Windows][DRIVER_USB]

[DRIVER_USB]: https://www.arduined.eu/files/windows10/CH341SER.zip

1. Descomprimir el archivo ZIP descargado 
2. Seleccionar el archivo para instalación de Windows
	- SETUP.exe
3. Seleccionar CH341SER.INF
4. Click en la opción ***Install***
5. Cuando este instalado cerrar la ventana y listo.!

Con esto estaría lista la instalación del Driver USB para nuestra tarjeta en el Sistema Operativo Windows.

Puede seguir está guía para la instalación como una segunda opción 

[Sigue la guía para instalar el driver CH340][DRIVER_CH340]

[DRIVER_CH340]: https://www.arduined.eu/ch340-windows-10-driver-download/

## Pinout

### Motores Movimiento
Nombre | GPIO 
--- | --- 
AIN1 | 32
AIN2 | 33
BIN1 | 25
BIN2 | 26

### Motores Lanzamiento
Nombre | GPIO 
--- | --- 
AIN1 | 18
AIN2 | 5

### Sensores de IR (Infrarrojo)
Nombre | GPIO 
--- | --- 
DATA | 19
VDD | 3V3 - 5V
VSS | GND

### I2C Connector STEMMA

Nombre | GPIO 
--- | --- 
SCL | 22
SDI | 21
VDD | 3V3
VSS | GND

### Otros Pines Disponibles
Nombre | GPIO 
--- | --- 
DATA I/O| 13
DATA I/O | 4
VDD | 6V
VDD | 3V3
VSS | GND

### Prueba Motores

Código de prueba para motores amarillos en kit de RobotFUT. La V1 prueba los motores en formato digital (usando la función digitalWrite).
***Recuerde que el voltage de alimentación para los motores puede estar de 5V a 9V***

[Visita el código base en el siguiente link v1.0][prueba_motore1]

[prueba_motore1]: https://github.com/teslalab/robofut/tree/main/ejemplos%20robofut%20balam%202022/balam2022-prueba-motores-v1

Código de prueba para motores amarillos en kit de RobotFUT. La V2 prueba los motores en formato digital/análogo (usando la función digitalWrite y analogWrite).

[Visita el código base en el siguiente link v2.0][prueba_motore2]

[prueba_motore2]: https://github.com/teslalab/robofut/tree/main/ejemplos%20robofut%20balam%202022/balam2022-prueba-motores-v2

### Prueba sensor IR

Este código tiene una interacción con el sensor IR.
***Recuerde que el voltage de alimentación para los motores puede estar de 3.3V a 5V***
[Visita el código base en el siguiente link][prueba_motore]

[prueba_motore]: https://www.arduined.eu/files/windows10/CH341SER.zip](https://github.com/teslalab/robofut/tree/main/ejemplos%20robofut%20balam%202022/balam2022-prueba-sensorIR-v1

### Control Remote desde Dabble

Este código permite la interacción a través de Bluetooth desde la aplicación DABBLE (descargada en móvil o tablet). El código permite ya mover remotamente el rover.

Este código permite interacción entre el móvil o tablet en la modalidad gamepad. **No se mueven los motores.**

[Visita el código base en el siguiente link v1.0][prueba_motore1]

[prueba_motore1]: https://github.com/teslalab/robofut/tree/main/ejemplos%20robofut%20balam%202022/balam2022-gamepad-dabble-test-v1

Este código permite interacción entre el móvil o tablet en la modalidad gamepad. **Con este código se mueven los motores.**

[Visita el código base en el siguiente link v2.1][prueba_motore2]

[prueba_motore2]: https://github.com/teslalab/robofut/tree/main/ejemplos%20robofut%20balam%202022/balam2022-gamepad-dabble-test-v2_1
