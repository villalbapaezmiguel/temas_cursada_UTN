/*
 ============================================================================
 Name        : Tema10_10-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Alumno.h"
#include "UTN.h"

int main(void) {
/*Ejercicio 10-1:
Dada la estructura eAlumno (legajo, nombre, nota1, nota2, promedio),
de qué manera la podría relacionar con la estructura eCurso (idCurso, descripcion, duracion),
teniendo en cuenta que un alumno puede cursar solo un curso
 * */

	eAlumno alumnos [10];
	eCurso cursos [15];

	menu(alumnos,10 , cursos, 15);



	return EXIT_SUCCESS;
}
