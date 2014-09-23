#include <SonicRanger.h>
#include <Servo.h>
#include <Scheduler.h>

/*Variables de estado*/
bool objetoAtrapado = false;

/*Variables Sensores Desplazamiento*/
#define sensorDerecha A0
#define sensorIzquiera A1

/*Servomotores*/
/*Traccion*/
Servo OrugaIzquierda;
Servo OrugaDerecha;
/*Pinza*/
Servo moverVertical;
Servo moverPinza;

void setup()
{
  /*Asignacion de pines a los servomotores*/
  OrugaIzquierda.attach(PB_6);
  OrugaDerecha.attach(PB_7);
  moverVertical.attach(PB_2);
  moverPinza.attach(PF_0);
  
}

void loop()
{
  // put your main code here, to run repeatedly:
  
}
