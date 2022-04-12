/*
 ============================================================================
 Name        : Tema3_Funciones_3-5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio_ext.h>
#include <stdlib.h>
#include "Menu.h"

int Sumar1(int, int);
int Sumar2(void);
void  Sumar3(int, int);
void Sumar4(void);

int main(void) {
//Villalba Paez Miguel Antonio
/*Ejercicio 3-5:
Realizar un programa en donde se puedan utilizar los prototipos de la función Sumar en sus 4 combinaciones.
 (Apunta a que entiendan el concepto de independencia del código)
int Sumar1(int, int);
int Sumar2(void);
void  Sumar3(int, int);
void Sumar4(void);
 * */
//	int numeroUno , numeroDos ;
//	int resultado ;
//	printf("\nIngrese primer numero : ");
//	scanf("%d", &numeroUno);
//
//	printf("\nIngrese segundo numero : ");
//	scanf("%d", &numeroDos);
//	//suma 1
//	resultado = Sumar1(numeroUno , numeroDos);
//	printf("\n resultado suma1 : %d", resultado);
////---------------------------------------------------------
//	//suma 2
//	resultado = Sumar2();
//	printf("\n resultado suma2 : %d", resultado);
////---------------------------------------------------------
//	int num1 , num2 ;
//	printf("\nIngrese primer numero : ");
//	scanf("%d", &num1);
//
//	printf("\nIngrese segundo numero : ");
//	scanf("%d", &num2);
//
//	Sumar3(num1, num2);
////------------------------------------------------------------
//
//	Sumar4();

setbuf(stdout,NULL);
menu();

	return EXIT_SUCCESS;
}

int Sumar1(int num, int numDos)
{
	int suma ;

	suma = num + numDos ;
	return suma;
}

int Sumar2(void)
{
	int num1 , num2, resultado ;

	printf("\n1 Ingrese numero :");
	scanf("%d", &num1);

	printf("\n2 Ingrese numero :");
	scanf("%d", &num2);

	resultado = num1 + num2;

	return resultado;
}

void  Sumar3(int num1, int num2)//esta funcion tiene que mostrar dentro el resultadio
{
	int resultado ;

	resultado = num1 + num2;
	printf("\n resultado Suma 3: %d", resultado);

}

void Sumar4(void)
{
	int num1 , num2 , resultado ;
	printf("\n1 Ingrese numero :");
	scanf("%d", &num1);

	printf("\n2 Ingrese numero :");
	scanf("%d", &num2);

	resultado = num1 + num2 ;

	printf("\n resultado Suma 4 : %d", resultado);

}
