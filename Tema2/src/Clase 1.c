/*
 ============================================================================
 Name        : Clase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio_ext.h>//para linux
#include <stdlib.h>
#include <string.h>

int main(void) {
	//Miguel Villalba Paez
	/*Ejercicio 2-1: Ingresar 5 números enteros calcular y mostrar el promedio de los números. Probar la aplicación con distintos valores.
	 * */

//	int numUno ;
//	int suma = 0;
//	float promedio ;
//	int limite ;
//
//	printf("\nCunatos numeros vas a ingresar : ?");
//	scanf("%d", &limite);
//	for (int i = 0; i < limite; ++i) {
//
//		printf("\nIngrese numero : ");
//		scanf("%d",&numUno);
//
//		suma += numUno;
//	}
//	promedio = suma / limite;
//
//	printf("\nEl promedio es : %f", promedio);

////MIguel Antonio Villalba Paez
///*Ejercicio 2-2:
//Ingresar 10 números enteros, distintos de cero. Mostrar:
// * */
//
//	int numeros ;
//	int estado = -1;
//	int cantidadPares = 0;
//	int cantidadImpares = 0;
//	int banderaMenor = -1;
//	int numeroMinimo ;
//	int mayorNumeroPar ;
//	int banderaMayorPar = -1;
//	int sumaPositivos = 0;
//	int ProducosNegativo = 1; // el producto de los numeros es el sinonimo de multiplicacion , no ?
//
//	for (int i = 0;  i < 10; ++ i) {
//
//		printf("\nIngrese un numero entero distinto de cero : ");
//		scanf("%d", &numeros);
//
//		if(numeros == 0)
//		{
//			while(estado == -1)
//			{
//				printf("\nERROR Ingrese un numero entero distinto de cero : ");
//				scanf("%d", &numeros);
//
//				if(numeros != 0)
//				{
//					estado = 1;
//				}
//			}
//		}else{
//
//			if(numeros %2 == 0)
//			{
//				//A cantidad de pares
//				cantidadPares ++;
//
//				//C de los pares el mayor numero ingreado
//				if(banderaMayorPar == -1)
//				{
//					mayorNumeroPar = numeros;
//					banderaMayorPar = 1;
//				}else{
//
//					if(numeros > mayorNumeroPar )
//					{
//						//C de los pares el mayor numero ingreado
//						mayorNumeroPar = numeros;
//					}
//				}
//
//			}else{
//				//A cantidad de impares
//				cantidadImpares++;
//			}
//
//			//B el menor numero ingresado
//			if(banderaMenor == -1)
//			{
//				numeroMinimo = numeros;
//				banderaMenor = 1;
//			}else{
//
//				if(numeros < numeroMinimo)
//				{
//					//B el menor numero ingresado
//					numeroMinimo = numeros;
//				}
//			}
//			//D suma de los positivos
//			if(numeros > 0)
//			{
//				sumaPositivos += numeros;
//			}else{
//				//E productos de los negativos
//				ProducosNegativo *= numeros;
//			}
//
//		}
//
//	}
//
//	printf("\nA cantiadad de pares : %d y de impares : %d ", cantidadPares , cantidadImpares);
//	printf("\nB El menor numero de ingresado es : %d", numeroMinimo);
//	printf("\nC De los pares el mayor numero ingresado es : %d", mayorNumeroPar);
//	printf("\nD Suma de los positivos : %d" , sumaPositivos);
//	printf("\nE El producto de los negativos es : %d", ProducosNegativo);

/*Ejercicio 2-3:
Debemos alquilar el servicio de transporte para llegar a Mar del Plata con un grupo de personas,
de cada persona debemos obtener los siguientes datos:
número de cliente,
estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
edad( solo mayores de edad, más de 17),
temperatura corporal (validar por favor)
y genero('f' para femenino, 'm' para masculino, 'o' para no binario).
NOTA: El precio por pasajero es de $600.
Se debe informar (solo si corresponde):
a) La cantidad de personas con estado "viudo" de más de 60 años.
b) el número de cliente y edad de la mujer soltera más joven.
c) cuánto sale el viaje total sin descuento.
d) si hay más del 50% de los pasajeros que tiene más de 60 años , el precio final tiene un descuento del 25%, que solo mostramos si corresponde.
 * */
/*strcmp
Si dos cadenas son iguales o idénticas, devuelve 0.
Si el valor ASCII del primer carácter no coincidente es mayor que el segundo, devuelve un valor entero positivo
Si el valor ASCII del primer carácter no coincidente es menor que el segundo, devuelve un valor entero negativo.*/
//
//
//int numeroCliente ;
//char estadoCivil ;
//int edad ;
//float temperaturaCorporal ;
//char genero ;
//int precioPorPasajero = 600;
//
//char pregunta ;
//int contadorEstadoCivilViudo = 0;
//int numeroClienteMujerMasJoven ;
//int edadMujerMasJoven ;
//int banderaMujerMasJoven = -1;
//int contadorPrecioPorPasajero = 0;
//int contadorPasajeros = 0;
//int pasajerosConDescuento ;
//int precioPorPasajeroConDescuento;
//
//do
//{
//	printf("\nIngrese su numero de cliente : ");
//	scanf("%d", &numeroCliente);
//
//	printf("\nIngrese su estado civil ('s' para soltero, 'c' para casado o 'v' viudo): ");
//	__fpurge(stdin);
//	scanf("%c", &estadoCivil);
//
//	printf("\nIngrese su edad : ");
//	scanf("%d", &edad);
//	while(edad < 17)
//	{
//		printf("\nsolo mayores de edad, más de 17");
//		printf("\nIngrese su edad : ");
//		scanf("%d", &edad);
//	}
//
//	printf("\nIngrese temperatura corporal : ");
//	scanf("%f", &temperaturaCorporal);
//	while(temperaturaCorporal > 38 || temperaturaCorporal < 35)
//	{
//		printf("\nIngrese temperatura corporal : ");
//		scanf("%f", &temperaturaCorporal);
//
//	}
//
//	printf("\nIngrese su genero ('f' para femenino, 'm' para masculino, 'o' para no binario) :");
//	__fpurge(stdin);
//	scanf("%c", &genero);
//
//	//A) La cantidad de personas con estado "viudo" de más de 60 años.
//	if(estadoCivil == 'v')
//	{
//		if(edad > 60)
//		{
//			contadorEstadoCivilViudo++;
//		}
//	}
//
//	//B) el número de cliente y edad de la mujer soltera más joven.
//	if(genero == 'f')
//	{
//		if(estadoCivil == 's')
//		{
//			if(banderaMujerMasJoven == -1)
//			{
//				edadMujerMasJoven = edad ;
//				banderaMujerMasJoven = 1;
//			}
//
//			if(edadMujerMasJoven < edad)
//			{
//				numeroClienteMujerMasJoven = numeroCliente;
//				edadMujerMasJoven = edad;
//			}
//		}
//	}
//
//	printf("\nDesea continuar (s = si ||  n= no) : ");
//	__fpurge(stdin);
//	scanf("%c", &pregunta);
//	contadorPrecioPorPasajero ++;
//	contadorPasajeros++;
//
//}while(pregunta == 's');
//
////C) cuánto sale el viaje total sin descuento
//precioPorPasajero = precioPorPasajero* contadorPrecioPorPasajero;
//
//
////d)d) si hay más del 50% de los pasajeros que tiene más de 60 años ,
////el precio final tiene un descuento del 25%, que solo mostramos si corresponde.
//
//pasajerosConDescuento = contadorPasajeros/2;
//
///*d) si hay más del 50% de los pasajeros que tiene más de 60 años ,
//el precio final tiene un descuento del 25%, que solo mostramos si corresponde.*/
//if(pasajerosConDescuento < contadorEstadoCivilViudo)
//{
//	precioPorPasajeroConDescuento = precioPorPasajero*25/100;
//	precioPorPasajeroConDescuento = precioPorPasajero - precioPorPasajeroConDescuento;
//	printf("\nD) Hay mas del 50 de pasajeros que tienen más de 60 años , el precio final tiene un descuento del 25 ");
//	printf("\n El precio final con descuento es : %d ", precioPorPasajeroConDescuento);
//}
//
///*
//a) La cantidad de personas con estado "viudo" de más de 60 años.
//b) el número de cliente y edad de la mujer soltera más joven.
//c) cuánto sale el viaje total sin descuento.
//d) si hay más del 50% de los pasajeros que tiene más de 60 años , el precio final tiene un descuento del 25%, que solo mostramos si corresponde.
//  */
//printf("\nA) La cantidad de personas con estado (viudo) de más de 60 años es : %d", contadorEstadoCivilViudo);
//printf("\nB) El número de cliente y edad de la mujer soltera más joven");
//printf("\nnúmero de cliente : %d || edad de la mujer soltera mas joven : %d" , numeroClienteMujerMasJoven , edadMujerMasJoven);
//printf("\nC) El viaje total sin descuento sale : %d ", precioPorPasajero);

//Villalba Paez Miguel Antonio
/*Ejercicio 2-4:
Ingresar 5 caracteres e informar cuantas letras p (minúsculas) se ingresaron.
*/
	char caracteres ;
	int contadorCaracteresP = 0;

	printf("\nIngresa un caracter : ");
	__fpurge(stdin);
	scanf("%c", &caracteres);

	for (int i = 0; i < 5; ++i) {

		printf("\nIngresa un caracter : ");
		__fpurge(stdin);
		scanf("%c", &caracteres);

		if(caracteres == 'p')
		{
			contadorCaracteresP++;
		}
	}

	printf("\n se ingresaroon %d de letras p", contadorCaracteresP);














	return EXIT_SUCCESS;
}
