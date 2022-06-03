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

int main(void) {
/*Ejercicio 18-0:
Guardar en una variable nombre y apellido. Guardar el dato en un archivo de texto, leerlo y luego mostrarlo.
 * */

	FILE* pArchivo ;

	char nombre_apellido [51];
	char aux [51];

	strcpy(nombre_apellido, "miguel Villalba ");

	pArchivo = fopen("archivo.txt", "w");
	if(pArchivo != NULL)
	{

		printf("\n nombre y apellido : %s", nombre_apellido);

	}

	pArchivo= fopen("archivo.txt", "r");
	if(pArchivo != NULL)
	{

		fread(aux, sizeof(char), 1 , pArchivo);
		printf("\n nombre y apellido : %s", aux);

		fclose(pArchivo);
	}





	return EXIT_SUCCESS;
}
