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
	setbuf(stdout, NULL);
	int opcion ;
	char caracter ;

	do {
		printf("\n1-Inicializar \n2-Cargar \n3-Mostrar \n4-Calcular Promedio \n5-Ordenar");
		printf("\nIngrese una opcion : ");
		scanf("%d", &opcion);

		switch(opcion)
		{
			case 1:
				printf("\nInicializar");
				break;
			case 2:
				printf("\nCargar");
				break;
			case 3:
				printf("\nMostrar");
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

	return EXIT_SUCCESS;
}
