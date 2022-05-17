/*
 ============================================================================
 Name        : Tema.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define NOMBRE 51

typedef struct{

	int id;
	char nombre [NOMBRE];
	float precio ;

}eProducto;

eProducto* cargarProducto();
eProducto* cargarProductoParametros (int id , char* nombre, float precio);


eProducto* cargarProductoParametros (int id , char* nombre, float precio)
{
		eProducto* puntero ;
		puntero = (eProducto *) malloc(sizeof(eProducto));

		if(puntero != NULL)
		{
			puntero->id = id;
			strcpy(puntero->nombre, nombre);
			puntero-> precio = precio;
		}

	//	puntero = &producto;

		return puntero;

}


int main(void) {

	setbuf(stdout, NULL);
/*Ejercicio 17-1:
Realizar una función que retorne un puntero a eProducto.
Dentro de esta función deberá crear un producto hardcodeado,
un puntero y se apuntará ese puntero al producto.
Mostrar el producto cargado 5 veces desde el main.
Observar el comportamiento del programa
 * */

	eProducto* puntero ;
	puntero = cargarProducto();

	if(puntero != NULL)
	{
		printf("\n%d || %s || %f", puntero->id , puntero->nombre , puntero->precio);
		printf("\n%d || %s || %f", puntero->id , puntero->nombre , puntero->precio);
	}

	eProducto* otro ;
	otro = cargarProductoParametros(22, "Manaos", 110.50);

	if(otro != NULL)
	{
		printf("\n%d || %s || %f", otro->id , otro->nombre ,otro->precio);

	}

//	printf("\n%d || %s || %f", puntero->id , puntero->nombre , puntero->precio);
//	printf("\n%d || %s || %f", puntero->id , puntero->nombre , puntero->precio);
//	printf("\n%d || %s || %f", puntero->id , puntero->nombre , puntero->precio);

	int vector[5];
	int* pVertor;
	int i;
	pVertor = (int*)malloc(sizeof(int)*5);

	for (i = 0; i < 5; ++i) {
		printf("\nIngrese numero :");
		scanf("%d" , pVertor+i);
	}






	return EXIT_SUCCESS;
}
eProducto* cargarProducto()
{
//	eProducto producto = {5, "coca cola ", 190.80};
	eProducto* puntero ;
	puntero = (eProducto *) malloc(sizeof(eProducto));

	if(puntero != NULL)
	{
		puntero->id = 105;
		strcpy(puntero->nombre, "coca cola");
		puntero-> precio = 180.88;
	}

//	puntero = &producto;

	return puntero;
}




