/*
 * Menu.c
 *
 *  Created on: 4 abr. 2022
 *      Author: miguel
 */


void menu()
{

	int opcion ;

	do {

		printf("\n1 . suma ");
		printf("\n2 . resta ");
		printf("\n3 . multiplicacion ");
		printf("\n4 . division ");
		printf("\n5 . salir ");
		printf("\nIngrese opcion : ");
		scanf("%d", &opcion);

		switch(opcion)
		{
			case 1:
				printf("\n1 . suma ");
				break ;
			case 2:
				printf("\n2 . resta ");
				break ;
			case 3:
				printf("\n3 . multiplicacion ");
				break ;
			case 4:printf("\n4 . division ");
				break ;
		}

	} while (opcion != 5);//buscar alguna funcion para borrar lo que hemos escritos en la terminal para que qeude mas bonito



}
