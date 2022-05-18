/*
 ============================================================================
 Name        : archivo_clase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	FILE* pArchivo ;
	char saludo [20];
	//aprender a usar fgets()
	//fopen() resive dos parametros , el puntero al archivo y el modo

//	pArchivo = fopen("numero.txt", "w");
//	fprintf(pArchivo , "Gianni");//resive dos parametros
//	fclose(pArchivo);
//
//	fgets(saludo , 20 , pArchivo);
//	fclose(pArchivo);
//
//	puts(saludo);

	pArchivo = fopen("buenas.dat", "wb");
	fprintf(pArchivo , "holaaa");
	fclose(pArchivo);


	return EXIT_SUCCESS;
}
