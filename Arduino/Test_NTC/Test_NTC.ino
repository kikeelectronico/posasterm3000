/*
 * Tutorial: Cómo usar un termistor NTC
 * Web: https://www.rinconingenieril.es/como-usar-un-termistor-ntc/
 * 
 * agosto 2017
 * 
 * Enrique, Rincón Ingenieril 
 */

#include <math.h>

//Valores fijos del circuito
float rAux = 10000.0;
float vcc = 5.0;
float beta = 3977.0;
float temp0 = 298.0;
float r0 = 10000.0;

//Variables usadas en el cálculo
float vm = 0.0;
float rntc = 0.0;
float temperaturaK = 0.0;


void setup() {
  Serial.begin(115200); 
}

void loop() {

  //Bloque de cálculo
  vm=(vcc / 1024)*( analogRead(0) );                //Calcular tensión en la entrada
  rntc = rAux / ((vcc/(5-vm))-1);                       //Calcular la resistencia de la NTC
  temperaturaK = beta/(log(rntc/r0)+(beta/temp0));  //Calcular la temperatura en Kelvin

  //Tensión de alimentación
  int voltaje = map(analogRead(1), 0, 1023, 0, 5000);


  //Restar 273 para pasar a grados celsus
  Serial.print(temperaturaK - 273);
  Serial.print(" - ");
  Serial.println(voltaje);
  
  delay(1000); 
}
