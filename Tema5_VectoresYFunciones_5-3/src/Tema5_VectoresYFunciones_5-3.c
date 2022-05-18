/*
 ============================================================================
 Name        : Tema5_VectoresYFunciones_5-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int funciones(int vector[], int len);
int main(void) {

	/*Ejercicio 5-3:
Realizar un programa que permita el ingreso de 10 números enteros distintos de cero.
La carga deberá ser aleatoria (todos los elementos se inicializan en cero por default).
Determinar el promedio de los positivos,
y del menor de los negativos la suma de los antecesores (Según la recta numérica de los reales,
hasta llegar a cero).
	 * */

	int numero [10];
	int i;
	for (i = 0; i < 10; ++i) {

		numero [i] = 0;
	}
	printf("\nInicializados en cero :");
	for (i = 0; i < 10; ++i) {
		printf("\n posicion : %d numero : %d", i , numero[i]);
	}
	for (i = 0; i < 10; ++i) {

		numero[i] = rand() %10;
	}
	printf("\nYa cargados :");
	for (i = 0; i < 10; ++i) {
		printf("\n posicion : %d numero : %d", i , numero[i]);
	}


	funciones(numero, 10);

	return EXIT_SUCCESS;
}

int funciones(int vector[] , int len)
{
	float promedioPositivo ;
	int suma = 0;
	int numeroMenor ;
	int bandera = 0;
	int contadorPositivo = 0;
	int i ;


	for (i = 0; i < len; ++i) {

		if(bandera == 0)
		{
			numeroMenor = vector[i];
			bandera = 1;
		}else{

			if(numeroMenor > vector[i])
			{
				numeroMenor = vector[i];
			}
		}

		if(vector[i] %2 == 0)
		{
			contadorPositivo++;
			suma += vector[i];
		}
	}

	promedioPositivo = suma / contadorPositivo ;

	printf("\nPromedio positivo : %f", promedioPositivo);
	printf("\nEl numero menor : %d", numeroMenor);

	return 0;
}
