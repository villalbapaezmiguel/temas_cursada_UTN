/*
 * Passenger.c
 *
 *  Created on: 19 may. 2022
 *      Author:
 */

#include "Passenger.h"

/* el objetivo en esta funcion es crear un pasajero en memoria :
 * prioridad : crear un pasajero en memoria
 * esto crea solo UN pasajero*/

Passenger* Passenger_newParametros(char* idStr,char* nombreStr,char* tipoPasajeroStr)
{
	Passenger* unPasajero ;

	//hay que verificar
	//ver atoi
	unPasajero = (Passenger*) malloc(sizeof(Passenger));//lo agregamos a memoria

	unPasajero->id = atoi(idStr);
	strcpy(unPasajero->nombre , nombreStr);
	strcpy(unPasajero->tipoPasajero , tipoPasajeroStrr);




	return unPasajero;
}
