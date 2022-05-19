/*
 ============================================================================
 Name        : PunteroFuncion_Video.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 *///video Laboratorio / Programación - Clase 16

#include <stdio.h>
#include <stdlib.h>

void saludar()
{
	printf("\nBuenass");
}
void hola()
{
	printf("\nholaa");
}
//------------------

void sumar (int parametroA , int parametroB , int* pResultado )
{
	*pResultado = parametroA + parametroB;
}

void resta (int parametroA , int parametroB , int* pResultado )
{
	*pResultado = parametroA - parametroB;
}

int calcular (int parametroA , int parametroB , void(*pFuncion )(int , int , int*))
{
	int aux ;

	pFuncion(parametroA , parametroB , &aux);

	return aux;
}
//---------------------------------

int saludoChar(char* mensaje , int numero)
{
	printf("\n%s %d", mensaje, numero);

	return 0;
}
//------------------------------
int saludarEsp(char* mensaje , int numero)
{
	printf("\nholaaaa %s %d", mensaje, numero);

	return 0;
}

int saludarIng(char* mensaje , int numero)
{
	printf("\nhelloo %s %d", mensaje, numero);

	return 0;
}

void saludoLenguaje(char* mensaje , int numero, int (*pSaludarChar)(char*, int ))
{

	pSaludarChar(mensaje , numero);

}


int main(void) {
/*Puntero a funcio :
 *Un puntero a funcion es una variable que almacena la direccion de memoria de una funcion ,
 *permitiendo invocar a
 *dicha funcion a traves del puntero*/

	void (*pSaludo)(void);
	pSaludo = saludar; //pSaludo es un puntero que no recibe nada y que no retorna nada  , por lo cual es perfecto para funcion saludar , que tampoco rebice nada y retorna nada
	/*lo que estamo diciendo con esto que me de la direccion de memoria de saludar , no me la llames */

	pSaludo = hola;
	pSaludo();
/*lo que estamo haciendo es que void"es el tipo de dato a retornar" (*pFuncion "es el nombre del puntero")(void "los parametros que va a tener ")*/
//----------------------------------------

	int auxiliar ;

	auxiliar = calcular(10, 7, resta);
	printf("\nEl resultado de Resta es : %d" , auxiliar);

	auxiliar = calcular(10, 7, sumar);
	printf("\nEl resultado de Suma es : %d" , auxiliar);

//-----------------------------------------------------------------

	int (*pSaludarChar)(char*, int );

	pSaludarChar = saludoChar;

	if(pSaludarChar("\n hola migue", 22) == 0)
	{
		printf("\nSalip ok");
	}
//------------------------------------------------- 

	saludoLenguaje("\nholaa latinos", 10, saludarEsp);
	saludoLenguaje("\nwelcome", 30, saludarIng);

	return EXIT_SUCCESS;
}
