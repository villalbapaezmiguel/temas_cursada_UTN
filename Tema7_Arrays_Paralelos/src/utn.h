/*
 * utn.h
 *
 *  Created on: 25 abr. 2022
 *      Author: miguel
 */

#ifndef UTN_H_
#define UTN_H_
#include <stdio_ext.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int utn_getCaracter(char* pResultado , char* mensaje , char* mensajeError , char minimo , char maximo , int reintentos);
int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
int utn_getNumeroFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);
#endif /* UTN_H_ */
