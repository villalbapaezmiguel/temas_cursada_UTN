/*
 * Menu.c
 *
 *  Created on: 17 may. 2022
 *      Author: miguel
 */
#include "Menu.h"

void menu (int vector[],int len)
{
	int opcion ;
	char caracter ;

	do {
		printf("\n1-Inicializar \n2-Cargar \n3-Mostrar \n4-Calcular Promedio \n5-Ordenar");
		printf("\nIngrese una opcion : ");
		scanf("%d", &opcion);

		switch(opcion)
		{
			case 1:
				printf("\n------------Inicializar--------------");
				if(inicializar(vector, len) == 1)
				{
					printf("\n------------Inicializar finalizada--------------");
				}
				break;
			case 2:
				printf("\nCargar");

				if(cargar(vector, len ) == 1)
				{
					printf("\n-------------Cargar finalizada-------------");
				}
				break;
			case 3:
				printf("\n---------------Mostrar------------------");
				mostrar(vector, len);
				printf("\n-----------------------Mostrar finalizada-------------");
				break;
			case 4:
				printf("\nCalcular Promedio");
				break;
			case 5:
				printf("\nOrdenar");
				break;
			default : printf("\nOpcion no valida ");
		}
		printf("\ndesea continuar (s / n) ? : ");
		__fpurge(stdin);
		scanf("%c", &caracter);

	} while (caracter == 's');

}


int inicializar(int vector [], int tam)
{
	int estado = -1;
	int i;
	int contador = 0;

	for (i = 0; i < tam; ++i) {

		vector[i] = 0;
	}

	for (i = 0; i < tam; ++i) {

		if(vector[i] == 0)
		{
			contador++;
			if(contador == tam)
			{
				estado = 1;
				break;
			}
		}
	}

	return estado ;
}


int cargar(int vector [], int tam )
{
	int estado = -1;
	int i ;



	for (i = 0; i < tam; ++i) {

//		printf("\nIngrese un edad : ");
//		scanf("%d", &vector[i]);
		vector[i] = rand() %10;

	}
	estado = 1;

	return estado ;
}


void mostrar(int vector[] , int tam)
{
	int i;

	for (i = 0; i < tam; ++i) {

		printf("\n edades : %d" ,vector[i]);
	}
}








