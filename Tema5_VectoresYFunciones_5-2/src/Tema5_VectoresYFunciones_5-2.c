/*
 ============================================================================
 Name        : Tema5_VectoresYFunciones_5-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include "Funciones.h"

#define VECTOR_LEN 10
int main(void) {

/*Ejercicio 5-2:
	Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
a	Cantidad de positivos y negativos.
b	Sumatoria de los pares.
c	El mayor de los impares.
d	Listado de los números ingresados.
e	Listado de los números pares.
f	Listado de los números de las posiciones impares.*/
	setbuf(stdout, NULL);

	int vector[VECTOR_LEN];
	int	cantidadPositovs = 0;
	int cantidadNegativos = 0;
	int sumatoriaPares = 0;
	int vectorNumeroIngresado [VECTOR_LEN];
	int vectorNumerosPares[VECTOR_LEN];
	int vectorNumerosDeLasPosicionesImpares[VECTOR_LEN];
	int mayorImpar = 0;
	int banderaMayorImpar = -1;

	for (int i = 0; i < 10; ++i) {

		printf("\nIngrese un numero (entre -1000 y 1000)");
		scanf("%d", &vector[i]);
		while(vector[i] > 1000 || vector[i] < -1000)
		{
			printf("\nERROR ");
			printf("\nIngrese un numero (entre -1000 y 1000)");
			scanf("%d", &vector[i]);
		}
		//d	Listado de los números ingresados.
		vectorNumeroIngresado[i] = vector[i];

		if(esPar_o_Impar(vector[i]) == 1)
		{
			//par
			//A	Cantidad de positivos y negativos.
			cantidadPositovs ++;
			//B	Sumatoria de los pares.
			sumatoriaPares += vector[i];
			//E	Listado de los números pares.
			vectorNumerosPares[i] = vector[i];
		}else if(esPar_o_Impar(vector[i]) == 2)
		{
			//impar
			//B	Cantidad de positivos y negativos.
			cantidadNegativos ++;
			//F	Listado de los números de las posiciones impares.
			vectorNumerosDeLasPosicionesImpares[i] = i;
//C	El mayor de los impares
			if(banderaMayorImpar == -1 )
			{
				mayorImpar = vector[i];
				banderaMayorImpar = 1;
			}else {
				if(mayorImpar < vector[i])
				{
					mayorImpar = vector[i];
				}
			}

		}else{
			//el numero no es par y impar
		}

	}
/*a	Cantidad de positivos y negativos.
b	Sumatoria de los pares.
c	El mayor de los impares.
d	Listado de los números ingresados.
e	Listado de los números pares.
f	Listado de los números de las posiciones impares.*/
	printf("\nA) Cantidad de positivos : %d", cantidadPositovs);
	printf("\nA) Cantidad de negativos : %d", cantidadNegativos);
	printf("\nB) Sumatoria de los pares : %d", sumatoriaPares);
	printf("\nC) El mayor de los impares :%d ", mayorImpar);
	listadoNumerosIngresados(vector, sizeof(vector));
	listadoNumerosPares(vectorNumerosPares, sizeof(vectorNumerosPares));
	printf("\n");



	//limpiar pantalla : system("clear");


	return EXIT_SUCCESS;
}
