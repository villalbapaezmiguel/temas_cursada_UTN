/*
 ============================================================================
 Name        : VideoTutorial_archivos.c
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

	pArchivo = fopen("archivo.txt", "r");

	if(!pArchivo)
	{
		printf("\nno eh podido abrir el archivo");
	}

//FUNCION FGETC
//	do {
/*La función fgetc devuelve el siguiente carácter del flujo de entrada al cual señala stream.(cursor)
 * Si el flujo está al fin de archivo, se activa el indicador de fin de archivo para el flujo y fgetc devuelve EOF.
 * Si ocurre un error de lectura , se activa el indicador de error para el flujo y fgetc devuelve EOF(es una constante)*/
//		int leido = fgetc(pArchivo);
//		if(leido != EOF)
//		{
//			printf("%c ", (char )leido);//lo casteamos algo de tipo char
//
//		}else{
//			printf("\n === FIN ====");
//		}
//	} while (!feof(pArchivo));

//FUNCION FTELL
/*
La función ftell obtiene la posición actual del indicador de posición de archivo del flujo al cual señala stream (cursor)
En caso de un archivo binario, el valor es el número de caracteres a partir del principio de archivo.
nos devulve un long */

	long posicion ;
	int caracter ;


//	printf("\nEl cursor esta en la posicion : %ld", posicion);
//	do {
//
//		caracter = fgetc(pArchivo);
//		posicion = ftell(pArchivo);
//
//		if(caracter != EOF)
//		{
//			printf("%ld %c\n", posicion , caracter);
//		}else{
//			printf("\n%ld EOF", posicion);
//		}
//
//
//	} while (!feof(pArchivo));

//FUNCION FSEEK
/*Desplaza la posición actual de lectura/escritura del fichero a otro punto.
 * El desplazamiento puede ser positivo (avanzar), cero o negativo (retroceder).
 * La posición de origen se puede indicar con la ayuda de tres constantes:
 * SEEK_SET (0, comienzo), SEEK_CUR (1, actual posicion), SEEK_END (2, final)*/

//	fseek(pArchivo , 5 , SEEK_SET);
//
//	do {
//
//		caracter = fgetc(pArchivo);
//		posicion = ftell(pArchivo);
//
//		if(caracter != EOF)
//		{
//			printf("%ld %c\n", posicion , caracter);
//		}else{
//			printf("\n%ld EOF", posicion);
//		}
//
//
//	} while (!feof(pArchivo));


//FUNCION FGETS
/* Función que se encarga de leer o almacenar una cadena de caracteres introducida mediante el teclado.
 * La variable es guardada hasta que haya un salto de línea (“\n”), el salto de línea SI se guarda.*/
	char cadena [80];

//	fgets(cadena, 100 , pArchivo);
//
//	printf("%s", cadena);

	do {

		if(fgets(cadena, 100 , pArchivo) )
		{
			printf("%s", cadena);

		}

	} while (!feof(pArchivo));



	fclose(pArchivo);
	return EXIT_SUCCESS;
}
