/*
 ============================================================================
 Name        : arrays_Paralelos.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio_ext.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
//ya podemos tener la funcion que nos pueda pedir la cadena y tambien un numero
//%[^\n] para poder poner espacios
#define FILAS 3
#define COLUMNA 10
#define HORAS_LEN 50

typedef struct{//esto solo es estructura , no tiene comportamiento

	//campos o atributos
	int codigo;
	char nombre[20];
	char apellido[20];
	int horarioSalida;
}eTicket;



void MostrarUnTicket(eTicket unTicket , int codigo , char nombre[], char apellido[], int horario);
void MostrarUnTicket(eTicket unTicket , int codigo , char nombre[], char apellido[], int horario){

	printf("\n %d %s %s %d", unTicket.codigo , unTicket.nombre, unTicket.apellido , unTicket.horarioSalida);

}

int main(void) {
	setbuf(stdout, NULL);

	eTicket unVuelo  ;//= {1000 , "Juan" , "Gomez", 17};//harcode el codigo

	printf("\nIngrese codigo vuelo : ");
	scanf("%d", &unVuelo.codigo);

	printf("\nIngrese nombre vuelo : ");
	__fpurge(stdin);
	scanf("%s",unVuelo.nombre);

	printf("\nIngrese apellido vuelo : ");
	__fpurge(stdin);
	scanf("%s",unVuelo.apellido);

	printf("\nIngrese horario vuelo : ");
	scanf("%d", &unVuelo.horarioSalida);


	MostrarUnTicket(unVuelo, unVuelo.codigo, unVuelo.nombre, unVuelo.apellido, unVuelo.horarioSalida);


//	char nombreCliente[FILAS][COLUMNA];
//	char apellidoClinete[FILAS][COLUMNA];
//	int horasReserva[HORAS_LEN];
//
//	for (int i = 0; i < FILAS; ++i) {
//
//		printf("\n Ingrese nombre :");
//		__fpurge(stdin);
//		scanf("%c", nombreCliente[i]);
//
//		printf("\n Ingrese apellido :");
//		__fpurge(stdin);
//		scanf("%c", apellidoClinete[i]);
//
//		printf("\n Ingrese horas :");
//		scanf("%d", &horasReserva[i]);
//
//	}
//
//	for (int j = 0; j < FILAS; ++j) {
//
//		printf("[%d] Nombre : %s", j , nombreCliente[j]);
//		printf("[%d] Apellido : %s", j , apellidoClinete[j]);
//		printf("[%d] Horas : %d \n", j, horasReserva[j] );
//	}



	return EXIT_SUCCESS;
}
