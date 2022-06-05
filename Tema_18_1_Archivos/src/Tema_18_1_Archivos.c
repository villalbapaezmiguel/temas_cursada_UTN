/*
 ============================================================================
 Name        : Tema_18_1_Archivos.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "UTN.h"
int EscribirNombresTXT(char* nombres, char* path);
int LeerNombresTXT(char* nombres, char* path);
int main(void) {
/*Ejercicio 18-1:
Crear una función que reciba como parámetros un array con 5 nombres (que estarán previamente hardcodearlos).
La función deberá guardar la lista de nombres en un archivo de texto.
int EscribirNombresTXT(char* nombres, char* path);
Otra función se encargará de la lectura de dicha lista.
int LeerNombresTXT(char* nombres, char* path);
 * */

	char nombres [5][51] = {"Migue","Oscar","Abel","Gustavo","Alexis"};
	int i;
	char aux [5][51];
	FILE* pArchivo ;

	pArchivo = fopen("archivo.txt", "w");
	if(pArchivo != NULL)
	{
		for (i = 0; i < 5; ++i) {
			EscribirNombresTXT(nombres[i], "archivo.txt");
			LeerNombresTXT(aux[i], "archivo.txt");
		}

		for (i = 0; i < 5; ++i) {

			printf("\n aux : %s", aux[i]);
		}

	}

	return EXIT_SUCCESS;
}
int EscribirNombresTXT(char* nombres, char* path)
{
	FILE* pArchivo ;
	int estado = -1;

	pArchivo = fopen(path, "a");
	if(pArchivo != NULL)
	{
		fprintf(pArchivo, "%s ", nombres);

		estado = 1;
		fclose(pArchivo);

	}else{
		printf("\nERROR al abrir el archivo");
	}

	return estado;
}

int LeerNombresTXT(char* nombres, char* path)
{
	int estado = -1;
	FILE* pArchivo ;

	pArchivo = fopen(path, "r");
	if(pArchivo != NULL)
	{
		fread(nombres, sizeof(char ), 51, pArchivo);
		estado = 1;
		fclose(pArchivo);

	}else{
		printf("\nERROR al leer el archivo");
	}


	return estado;
}




























