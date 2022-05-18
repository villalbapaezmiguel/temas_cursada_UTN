/*
 ============================================================================
 Name        : Anexo_Tema_Vectores.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "Menu.h"
#define EDADES_LEN 5
int main(void) {
/*ANEXO 5-1:
Armar un Menú de Opciones con las siguientes opciones
1-Inicializar
2-Cargar
3-Mostrar
4-Calcular Promedio
5-Ordenar
Al ingresar a cada opción del menú deberá imprimir en pantalla el nombre del mismo.
Ej: Si se presiona la opción 1 mostrar por pantalla “Ud. ha seleccionado lo opción 1-Inicializar”
*/
/*ANEXO 5-2:
Realizar un programa que desde el main llame o invoque a la función que muestre el Menú del punto anterior.
 Utilizar funciones y bibliotecas.
 */

/*ANEXO 5-3:
Crear un Array de 5 elementos de tipo numérico donde se cargarán edades.
Agregar la funcionalidad para la opción 1 del Menú del ejercicio anterior utilizando funciones,
es decir una función que inicialice el Array.
Agregar la funcionalidad para la opción 2 del Menú utilizando funciones,
es decir una función que le pida los números o edades al usuario para cargar el Array de forma secuencial
 * */

/*ANEXO 5-4:
Modificar la funcionalidad de la opción 2 del Menú para que la carga del Array sea de forma aleatoria.
Agregar la funcionalidad de la opción 3 del Menú para mostrar por pantalla los elementos del Array, o sea las edades.
 * */

/*ANEXO 5-5:
Modificar la funcionalidad de la opción 3 del Menú de forma que existan 2 funciones
una que muestre solamente un elemento o edad y otra que muestre todos los elementos o edades.
La función que muestra todos los elementos o edades debe llamar a la que muestra solo uno.
 * */
	setbuf(stdout, NULL);


	int edades[EDADES_LEN];

	menu(edades , EDADES_LEN);
	return EXIT_SUCCESS;
}

