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

int alta(eProductoApple productos [], int len)
{
	int estado = -1;
	int i ;
	int opcionNacionalidad ;
	if(productos != NULL && len > 0)
	{
		for ( i = 0; i < len; ++i) {

			if(productos[i].estado == VACIO )
			{
				productos[i].estado = OCUPADO;
				productos[i].idProducto = nuevoId();
				printf("\nIngrese descripcion : ");
				__fpurge(stdin);
				scanf("%s", productos[i].descripcion);
				//nacionalidad EEUU - CHINA - OTRO
				printf("\n1)EEUU - 2)CHINA - 3)OTRO");
				printf("\nIngrese nacionalidad :");
				scanf("%d", productos[i].nacionalidad);
				//tipo PHONE -MAC - IPAD - ACCESORIOS
				//precio

				break;
			}
		}
	}
	return estado ;
}

