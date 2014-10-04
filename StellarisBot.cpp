#include "Energia.h"
#include <SonicRanger.h>
#include <Servo.h>
#include <Scheduler.h>

//Echo PIN PB_3
//Trgr PIN PC_4

/*Variables de estado
 *Variables boleanas para determinas el flujo del programa
 */
/*Estados de la Pinza*/
bool pinzaAbierta = false;
bool objetoAtrapado = false;
bool pinzaAbajo = false;
bool pinzaArriba = false;

/*Estados del detector de obstaculos*/
bool objetoEncontrado = false;
bool espacioLibre = false;

/*Estados del sensor de colores*/
bool objetoRojo = false;
bool objetoVerde = false;
bool objetoAzul = false;
bool objetoOtros = false; //Cualquier otro color

/*Estados sensor Desplazamiento*/
bool negro = false;
bool blanco = false;

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
  
}

/*Buscar Objetos*/
/*Evitar linea Negra*/
void marcoNegro()
{
	if(negro)
	{
		if(objetoAtrapado)
		{

		}

	}
}
