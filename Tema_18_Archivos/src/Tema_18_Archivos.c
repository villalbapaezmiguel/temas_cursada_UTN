/*
 ============================================================================
 Name        : Tema_18_Archivos.c
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

typedef struct {

	char nombre [51];
	char apellido [51];
	int edad ;
	float altura ;
	int id ;

}Persona;

int main(void) {
/*Ejercicio 18-0:
Guardar en una variable nombre y apellido. Guardar el dato en un archivo de texto, leerlo y luego mostrarlo.
 * */
	setbuf(stdout, NULL);
	FILE* pArchivo ;
	FILE* pAux ;

//	char nombre_apellido [51];
//	char aux [51];
//
//	strcpy(nombre_apellido, "miguel Villalba");
//
//	pArchivo = fopen("archivo.txt", "w");
//	if(pArchivo != NULL)
//	{
//
//		fprintf(pArchivo,"%s", nombre_apellido);
//		fclose(pArchivo);
//	}
//
//	pArchivo= fopen("archivo.txt", "r");
//	if(pArchivo != NULL)
//	{
//
//		fread(aux, sizeof(char), 51 , pArchivo);
//		printf("\n nombre y apellido : %s", aux);
//		fclose(pArchivo);
//	}

	Persona Epersona ;

//	strcpy(Epersona.nombre , "Migue");
//	strcpy(Epersona.apellido , "Villalba");
//	Epersona.edad = 20;
//	Epersona.id = 001;
//	Epersona.altura = 1.70;


	pAux = fopen("PracticaArchivo.txt", "r");
	if(pAux != NULL)
	{

//		fprintf(pArchivo , "%d %s %s %d %.2f", Epersona.id , Epersona.nombre , Epersona.apellido , Epersona.edad , Epersona.altura);

		fread(&Epersona , sizeof(Epersona),2, pAux);

		printf("%d %s %s %d %.2f", Epersona.id , Epersona.nombre , Epersona.apellido , Epersona.edad , Epersona.altura);
		fclose(pAux);
	}



	return EXIT_SUCCESS;
}
