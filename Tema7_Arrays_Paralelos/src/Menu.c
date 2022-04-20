/*
 * Menu.c
 *
 *  Created on: 19 abr. 2022
 *      Author: miguel
 */

#include "Menu.h"

void Menu(eProductoApple productos[] , int len)
{
	int opciones ;

	printf("\n");
	do {
		printf("\n1) Alta \n2) Baja \n3) Modificacion \n4) Salir");
		printf("\nIngrese opcion :");
		scanf("%d", &opciones);

		switch(opciones)
		{
			case 1:
				printf("\nAlta");

				break;
			case 2:
				printf("\nBaja");
				break;
			case 3:
				printf("\nModificacion");
				break;
			case 4:
				printf("\nSalio del programa");
				break;
		}

	} while (opciones != 4);




}
