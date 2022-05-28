/*
 ============================================================================
 Name        : claseSabadoArchivos.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct {

	int id ;
	int numero ;
	float sueldo ;
}Empleado ;

int main(void) {

	FILE * pArchivo = NULL ;
//	pArchivo = fopen("archivo.txt", "w");//escribimos
//
//	if(pArchivo != NULL)
//	{
//		//fprintf  lo que cambia es el que va a tener primero el archivo en donde lo va a leer
//		fprintf(pArchivo, "%d ||  %d || %.2f \n", 1000, 1 , 15000.25);
//		fprintf(pArchivo, "%d, , %d , %.2f \n", 1001, 2 , 15500.25);
//		fprintf(pArchivo, "%d, , %d , %.2f \n", 1002, 3 , 16000.25);
//
//		puts("\ncerrando archivo....");
//		fclose(pArchivo);
//	}

	//leer un txt
//	pArchivo = fopen("archivo.txt", "r");//lo abrimos en modo lectura
//
//	if(pArchivo != NULL)
//	{
//		Empleado aux ;
//
//		do {
//			fscanf(pArchivo, "%d-%d- %f\n",&aux.id , &aux.numero , &aux.sueldo );
//			printf("\nID : %d || NUMERO : %d || SUELDO : %.2f",aux.id , aux.numero , aux.sueldo );
//
//		} while (feof(pArchivo) == 0);
//
//		fclose(pArchivo);
//	}

	//escribir un binario

	pArchivo = fopen("archivo.txt", "wb");//lo abrimos en modo lectura

	if(pArchivo != NULL)
	{
		Empleado aux = {111, 111, 9999.99};

		fwrite(&aux , sizeof(Empleado) , 1, pArchivo);//guardamos en binario / guardamos uno solo

		fclose(pArchivo);
	}
	return EXIT_SUCCESS;
}
