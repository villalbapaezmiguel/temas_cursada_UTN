/*
 * Alumno.h
 *
 *  Created on: 26 may. 2022
 *      Author: miguel
 */

#ifndef ALUMNO_H_
#define ALUMNO_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "UTN.h"
#define NOMBRE_LEN 51
typedef struct {

	char nombre [NOMBRE_LEN];
	float altura ;
	int id ;
}eAlumno;

eAlumno* alumno_new(void);
eAlumno* alumno_newParametros(char* nombre, float altura , int id);
//segundaParte
void alumno_delete(eAlumno* this);
/*****************************************************************************/
int alumno_initArray(eAlumno* arrayPunteros[], int limite);
int alumno_buscarLugarLibretArray(eAlumno* arrayPunteros[], int limite);
void alumno_imprimirArray(eAlumno* arrayPunteros[], int limite);
int alumno_deleteIndexArray(eAlumno* arrayPunteros[], int limite, int indice);
int alumno_buscarPorIdArray(eAlumno* arrayPunteros[], int limite, int id);
int alumno_agregarAlumnoArray(eAlumno* arrayPunteros[], int limite,char* nombre, float altura , int id);
int alumno_borrarPorIdArray(eAlumno* arrayPunteros[], int limite, int idBorrar);
#endif /* ALUMNO_H_ */
