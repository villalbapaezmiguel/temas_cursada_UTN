/*
 ============================================================================
 Name        : laboratorio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//Miguel Villalba Paez
//Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe. En caso de que no exista también informarlo.


#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int numero ;
	int numeroDos ;
	int numeroTres ;

	printf("ingrese un numero :");
	scanf("%d",&numero);

	printf("ingrese un segundo numero :");
	scanf("%d",&numeroDos);

	printf("ingrese un tercer numero :");
	scanf("%d",&numeroTres);

//	if((numero > numeroDos ) && (numero > numeroTres))
//	{
//		printf("el mayor es el UNO");
//	}else if((numeroDos > numero) && (numeroDos > numeroTres))
//	{
//		printf("el mayor es el dos");
//	}else if((numeroTres > numero) && (numeroTres > numeroDos))
//	{
//		printf("el mayor es el tres");
//	}else{
//		printf("NO hay numero mayor");
//	}

	//que todos lo numeros sean diferentes para que hay un medio
	if(numero != numeroDos && numero != numeroTres  && numeroDos != numeroTres)
	{
		if((numero < numeroDos && numero > numeroTres) || (numero > numeroDos && numero < numeroTres))
		{
			printf("el del medio de el 1");
		}else if((numeroDos < numero && numeroDos > numeroTres) || (numeroDos > numero && numeroDos < numeroTres))
		{
			printf("el del medio de el 2");
		}else{

			printf("el del medio de el 3");
		}
	}else{
		printf("no hay un numero medio");
	}

	return 0;
}
