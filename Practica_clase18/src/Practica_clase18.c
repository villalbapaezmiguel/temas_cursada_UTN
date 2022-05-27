/*
 ============================================================================
 Name        : Practica_clase18.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>
#include "Alumno.h"
#include "UTN.h"
#define QTY_ALUMNOS 100

int main(void) {


	eAlumno* arrayPunterosAlumno [QTY_ALUMNOS];
/*para que esto deje de ser un array de alumnos , y comienze a ser un array de punteros a alumnos pornemos * */
/*van a ser 100 punteros a alumnos*/
	int indiceLibre;
	int indiceBorrar;
	int posicionAgregada ;
	if(alumno_initArray(arrayPunterosAlumno, QTY_ALUMNOS)==0)
	{
		printf("\nInit ok");
		indiceLibre = alumno_buscarLugarLibretArray(arrayPunterosAlumno, QTY_ALUMNOS);
		printf("\nIndex libre : %d" , indiceLibre);
		if(indiceLibre >= 0)
		{

			arrayPunterosAlumno[indiceLibre] = alumno_newParametros("Miguel", 1.70, 111);
		}

		indiceLibre = alumno_buscarLugarLibretArray(arrayPunterosAlumno, QTY_ALUMNOS);
		printf("\nIndex libre : %d" , indiceLibre);
		if(indiceLibre >= 0)
		{
			arrayPunterosAlumno[indiceLibre] = alumno_newParametros("Ana", 1.50, 222);
		}

		alumno_imprimirArray(arrayPunterosAlumno, QTY_ALUMNOS);


		indiceBorrar = alumno_buscarPorIdArray(arrayPunterosAlumno, QTY_ALUMNOS, 111);
		if(indiceBorrar != -1)
		{
			if(alumno_deleteIndexArray(arrayPunterosAlumno, QTY_ALUMNOS, indiceBorrar) != -1)
			{
				printf("\n borrado con ok");
				alumno_imprimirArray(arrayPunterosAlumno, QTY_ALUMNOS);
			}
		}
//funcion de agregar array alumnos
		posicionAgregada = alumno_agregarAlumnoArray(arrayPunterosAlumno, QTY_ALUMNOS, "Luis", 8.90,88);
		printf("\nSe agrego en la posicion : %d", posicionAgregada);
		alumno_imprimirArray(arrayPunterosAlumno, QTY_ALUMNOS);

//Funcion borrar por id

		if(alumno_borrarPorIdArray(arrayPunterosAlumno, QTY_ALUMNOS, 88) == 0)
		{
			printf("\nBOrrar por id fucion ok ");
			alumno_imprimirArray(arrayPunterosAlumno, QTY_ALUMNOS);

		}

	}




	return EXIT_SUCCESS;
}
