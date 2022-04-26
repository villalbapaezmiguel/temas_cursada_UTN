/*
 * utn.c
 *
 *  Created on: 25 abr. 2022
 *      Author: miguel
 */
#include "utn.h"

int utn_getCaracter(char* pResultado , char* mensaje , char* mensajeError , char minimo , char maximo , int reintentos)
{
	int retorno = -1;
	char buffer ;

	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do {
			printf("%s",mensaje);
			__fpurge(stdin);
			scanf("%c", &buffer);
			if(buffer >= minimo && buffer <= maximo)
			{
				*pResultado = buffer;
				retorno = 0;
				break;
			}
			printf("%s",mensajeError);
			reintentos--;

		} while (reintentos >= 0);
	}
	return retorno;
}
