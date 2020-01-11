#include <math.h>

//Valores constantes del circuito
float rAux = 10000.0;
float vcc = 5.0;
int mapeo[12] = {12,13,2,3,4,5,6,7,8,9,10,11};

//Valores constantes de la NTC
float beta = 3977.0;
float temp0 = 298.0;
float r0 = 10000.0;

//Variables usadas en el cálculo
float vm = 0.0;
float rntc = 0.0;
float temperaturaK = 0.0;
int led = 0;


void setup() {
  Serial.begin(115200);
  //LEDs como salidas y apagadoss
  for(int i = 13; i >1; i--){
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
}

void loop() {

  //Bloque de cálculo
  vm=(vcc / 1024)*( analogRead(0) );                      //Calcular tensión en la entrada
  rntc = rAux / ((vcc/(vcc-vm))-1);                       //Calcular la resistencia de la NTC
  temperaturaK = beta/(log(rntc/r0)+(beta/temp0));        //Calcular la temperatura en Kelvin
  //Restar 273 para pasar a grados celsus
  Serial.print(temperaturaK - 273);
  //Calcular LED a encender
  led = (temperaturaK-273)/5;  
  Serial.print(" - ");  
  Serial.println(led);
  
  //Apagar todos los LEDs
  for(int i = 0; i < 13; i++)
    digitalWrite(mapeo[i], LOW);
  digitalWrite(mapeo[led], HIGH);
  
  delay(1000); 
}
