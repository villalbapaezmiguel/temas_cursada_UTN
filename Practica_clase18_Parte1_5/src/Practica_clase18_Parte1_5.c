/*
 ============================================================================
 Name        : Practica_clase18_Parte1_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>
#include "Alumno.h"
#include "UTN.h"
#define QTY_ALUMNOS 100

int main(void) {

//tiene un error con los flotantes
	eAlumno* arrayPunterosAlumno [QTY_ALUMNOS];
/*para que esto deje de ser un array de alumnos , y comienze a ser un array de punteros a alumnos pornemos * */
/*van a ser 100 punteros a alumnos*/
//	int indiceLibre;
//	int indiceBorrar;
//	int posicionAgregada ;

	int opcion ;
	int proximoId = 0;
	float bufferAltura ;
	char bufferNombre[NOMBRE_LEN];
	int bufferIdBorrar;
	int bufferIdModificar;
	int bufferIndice ;
	float auxPromedioAlturas ;
//	float auxAlturaMayor; mi variable
	int bufferIndiceProfe;

	if(alumno_initArray(arrayPunterosAlumno, QTY_ALUMNOS)==0)
	{
		//SOLO PARA TEST
		alumno_agregarAlumnoArray(arrayPunterosAlumno, QTY_ALUMNOS, "CCC", 1, 0);
		alumno_agregarAlumnoArray(arrayPunterosAlumno, QTY_ALUMNOS, "BBB", 2, 1);
		alumno_agregarAlumnoArray(arrayPunterosAlumno, QTY_ALUMNOS, "AAAA", 3, 2);
		proximoId = 3;
		printf("\nInit ok");
		do {
			printf("\n1)ALTA\n2)BAJA\n3)MODICICACION\n4)ORDENAR\n5)IMPRIMIR\n6)PROMEDIO DE ALTURAS\n7)ALUMNO MAS ALTO\n10)SALIR");
			utn_getNumero(&opcion, "\nINGRESE OPCION:", "\nerror", 1,10, 2);

			switch(opcion)
			{
				case 1://alta

					if(utn_getNombre(bufferNombre, NOMBRE_LEN, "\nIngrese nombre :", "\nERROR", 2) == 0 &&
							utn_pedirFloat(&bufferAltura,"\nIngrese altura :", "\nERROR", 0.10 ,4 , 2) == 0 &&
							alumno_agregarAlumnoArray(arrayPunterosAlumno, QTY_ALUMNOS,bufferNombre, bufferAltura,proximoId)>=0)
					{
						printf("\nalta ok");
						proximoId++;//estamos obligados a generar un id mas alto
					}

					break;
				case 2://baja
					alumno_imprimirArray(arrayPunterosAlumno, QTY_ALUMNOS);
					if(utn_getNumero(&bufferIdBorrar, "\nIngrese id :", "\nerror ", 0, 100000, 2) == 0 &&
							alumno_borrarPorIdArray(arrayPunterosAlumno, QTY_ALUMNOS, bufferIdBorrar) == 0	)
					{
						printf("\nbaja ok");
						alumno_imprimirArray(arrayPunterosAlumno, QTY_ALUMNOS);
					}
					break;
				case 3://modificiar
					alumno_imprimirArray(arrayPunterosAlumno, QTY_ALUMNOS);
					if(utn_getNumero(&bufferIdModificar, "\nIngrese id :", "\nerror ", 0, 100000, 2) == 0 )
					{

 						alumno_imprimirArray(arrayPunterosAlumno, QTY_ALUMNOS);
						bufferIndice = alumno_buscarPorIdArray(arrayPunterosAlumno, QTY_ALUMNOS, bufferIdModificar);
						if(bufferIndice >= 0)
						{
							if(utn_getNombre(bufferNombre, NOMBRE_LEN, "\nIngrese nombre :", "\nERROR", 2) == 0 &&
								utn_pedirFloat(&bufferAltura,"\nIngrese altura :", "\nERROR", 0.10,4 , 2) == 0)
							{

								alumno_setNombre(arrayPunterosAlumno[bufferIndice],bufferNombre);
								alumno_setAltura(arrayPunterosAlumno[bufferIndice],bufferAltura);
								printf("\nmodificacion ok");

							}
						}else{
							printf("\nel id no fue encontrado ");
						}
					}
					break;
				case 4://ordenar por nombre
					alumno_ordenarArray(arrayPunterosAlumno, QTY_ALUMNOS);
					alumno_imprimirArray(arrayPunterosAlumno, QTY_ALUMNOS);

					break;
				case 5:
					alumno_imprimirArray(arrayPunterosAlumno, QTY_ALUMNOS);


					break;
				case 6://PROMEDIO alturas
					alumno_calcularAlturaPromedioArray(arrayPunterosAlumno, QTY_ALUMNOS, &auxPromedioAlturas);
					printf("\nla altura promedio es : %.2f", auxPromedioAlturas);
					break;
				case 7://alumno mas alto
					printf("\nok");

//					if(alumno_calcularAlumnoMasAltoArrayMigue(arrayPunterosAlumno, QTY_ALUMNOS, &auxAlturaMayor) == 0)
//					{
//
//						printf("\nla altura mayor es : %.2f", auxAlturaMayor);
//					}


					alumno_calcularAlturaMaximaArray(arrayPunterosAlumno, QTY_ALUMNOS, &bufferIndiceProfe);
					alumno_getNombre(arrayPunterosAlumno[bufferIndiceProfe], bufferNombre);
					alumno_getAltura(arrayPunterosAlumno[bufferIndiceProfe], &bufferAltura);

					printf("\nEl alumno mas alto es %s y mide %.2f", bufferNombre , bufferAltura);

					break;
			}

		} while (opcion != 10);

	}




//	if(alumno_initArray(arrayPunterosAlumno, QTY_ALUMNOS)==0)
//	{
//		printf("\nInit ok");
//		indiceLibre = alumno_buscarLugarLibretArray(arrayPunterosAlumno, QTY_ALUMNOS);
//		printf("\nIndex libre : %d" , indiceLibre);
//		if(indiceLibre >= 0)
//		{
//
//			arrayPunterosAlumno[indiceLibre] = alumno_newParametros("Miguel", 1.70, 111);
//		}
//
//		indiceLibre = alumno_buscarLugarLibretArray(arrayPunterosAlumno, QTY_ALUMNOS);
//		printf("\nIndex libre : %d" , indiceLibre);
//		if(indiceLibre >= 0)
//		{
//			arrayPunterosAlumno[indiceLibre] = alumno_newParametros("Ana", 1.50, 222);
//		}
//
//		alumno_imprimirArray(arrayPunterosAlumno, QTY_ALUMNOS);
//
//
//		indiceBorrar = alumno_buscarPorIdArray(arrayPunterosAlumno, QTY_ALUMNOS, 111);
//		if(indiceBorrar != -1)
//		{
//			if(alumno_deleteIndexArray(arrayPunterosAlumno, QTY_ALUMNOS, indiceBorrar) != -1)
//			{
//				printf("\n borrado con ok");
//				alumno_imprimirArray(arrayPunterosAlumno, QTY_ALUMNOS);
//			}
//		}
////funcion de agregar array alumnos
//		posicionAgregada = alumno_agregarAlumnoArray(arrayPunterosAlumno, QTY_ALUMNOS, "Luis", 8.90,88);
//		printf("\nSe agrego en la posicion : %d", posicionAgregada);
//		alumno_imprimirArray(arrayPunterosAlumno, QTY_ALUMNOS);
//
////Funcion borrar por id
//
//		if(alumno_borrarPorIdArray(arrayPunterosAlumno, QTY_ALUMNOS, 88) == 0)
//		{
//			printf("\nBOrrar por id fucion ok ");
//			alumno_imprimirArray(arrayPunterosAlumno, QTY_ALUMNOS);
//
//		}
//
//	}




	return EXIT_SUCCESS;
}
