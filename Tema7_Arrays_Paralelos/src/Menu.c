/*
 * Menu.c
 *
 *  Created on: 19 abr. 2022
 *      Author: miguel
 */

#include "Menu.h"

void Menu(eProductoApple* productos[] , int len)
{
	int opciones ;
	int auxPosicionLibre ;
	int auxIdBaja ;
	int auxidPosicionBaja ;

	printf("\n");
	do {
		printf("\n1) Alta \n2) Baja \n3) Modificacion \n4) Salir");
		printf("\nIngrese opcion :");
		scanf("%d", &opciones);

		switch(opciones)
		{
			case 1:
				printf("\nAlta");
				auxPosicionLibre = buscarLugarLibre(*productos, len);
				if(auxPosicionLibre != -1)
				{
					if(alta(*productos , len, auxPosicionLibre) == 1)
					{
						printf("ya se hizo la alta");
					}

				}
				break;
			case 2:
				printf("\nBaja");
				printf("\nIngrese Id a dar de baja :");


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
