/*
 * Productos_Apple.h
 *
 *  Created on: 19 abr. 2022
 *      Author: miguel
 */

#ifndef PRODUCTOS_APPLE_H_
#define PRODUCTOS_APPLE_H_
#include <stdio_ext.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "utn.h"

#define DESCRIPCION 50
#define EEUU 1
#define CHINA 2
#define OTRO 3
#define IPHONE 1
#define MAC 2
#define IPAD 3
#define ACCESORIOS 3
#define OCUPADO 1
#define VACIO 0
#define CANTINDAD 5
typedef struct{

	int idProducto ;
	char descripcion[DESCRIPCION];
	int nacionalidad ;
	int tipo ;
	float precio ;
	int estado ;

}eProductoApple;

int inicializar (eProductoApple productos [], int len );
int buscarLugarLibre ( eProductoApple producto [], int tam);
int alta(eProductoApple productos [], int len , int lugarLibre);
int buscarPorId(eProductoApple producto [], int tam , int id , int *idPosicion);
#endif /* PRODUCTOS_APPLE_H_ */
