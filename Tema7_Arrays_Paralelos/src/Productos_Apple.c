/*
 * Productos_Apple.c
 *
 *  Created on: 19 abr. 2022
 *      Author: miguel
 */

#include "Productos_Apple.h"
static int nuevoId(void);

static int nuevoId(void)
{
	int contador = 0;

	return  contador++;
}

int inicializar (eProductoApple productos [], int len )
{
	int estado = -1;
	int i ;

	if(productos != NULL && len > 0)
	{
		for (i = 0; i < len; ++i) {

			productos[i].estado = VACIO;
		}
		estado = 1;
	}

	return estado ;
}

int alta(eProductoApple productos [], int len , int lugarLibre)
{
	int estado = -1;
	char pResultado ;
	int auxNacionalidad ;
	int auxTipo;
	if(productos != NULL && len > 0 )
	{
		if(productos[lugarLibre].estado == VACIO )
		{
			estado = 1;
			productos[lugarLibre].estado = OCUPADO;
			productos[lugarLibre].idProducto = nuevoId();

			if(utn_getCaracter(&pResultado, "\nIngrese descripcion :", "\nERROR ", 1, 10, 2) == 0)
			{
				strncpy(productos[lugarLibre].descripcion , &pResultado , sizeof(productos[lugarLibre].descripcion));
			}
			printf("\n1)EEUU - 2)CHINA - 3)OTRO");
			printf("\nIngrese nacionalidad :");
			scanf("%d", &auxNacionalidad);
			switch(auxNacionalidad)
			{
				case 1:
					printf("\nEEUU");
					productos[lugarLibre].nacionalidad = 1;
					break;
				case 2:
					printf("\nCHINA");
					productos[lugarLibre].nacionalidad = 2;
					break;
				case 3:
					printf("\nOTRO");
					productos[lugarLibre].nacionalidad = 3;
					break;
				default : printf("\nNo existe ");
			}
			//tipo PHONE -MAC - IPAD - ACCESORIOS
			printf("\n1)PHONE - 2)MAC 3)IPAD - 4)ACCESORIOS ");
			printf("\nIngrese tipo :");
			scanf("%d", &auxTipo);
			switch(auxTipo)
			{
				case 1:
					printf("\nPHONE");
					productos[lugarLibre].tipo = 1;
					break;
				case 2:
					printf("\nMAC");
					productos[lugarLibre].tipo = 2;
					break;
				case 3:
					printf("\nIPAD");
					productos[lugarLibre].tipo = 3;
					break;
				case 4:
					printf("\nACCESORIOS");
					productos[lugarLibre].tipo = 4;
					break;
				default : printf("\nNo existe ");
			}
			//precio
		}
	}
	return estado ;
}

/*busca el primer lugar libre que encuentra
 * retorna -1 sino no hay lugar , de lo contrario devuelve otro numero*/
int buscarLugarLibre ( eProductoApple producto [], int tam)
{
	int retorno = -1;
	int i;
	if(producto != NULL && tam > 0)
	{
		for (i = 0; i < tam; ++i) {

			if(producto[i].estado ==  VACIO)
			{
				retorno = i;
				break;
			}
		}
	}

	return retorno;
}

int buscarPorId(eProductoApple producto [], int tam , int id , int *idPosicion)
{
	int i ;
	int retorno = -1;

	if(producto != NULL && tam > 0)
	{
		for (i = 0; i < tam; ++i) {

			if(producto[i].idProducto == id)
			{
				*idPosicion = i ;
				retorno = 1;
				break;
			}
		}
	}
	return retorno;
}
