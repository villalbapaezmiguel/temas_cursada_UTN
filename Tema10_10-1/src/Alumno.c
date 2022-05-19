/*
 * Alumno.c
 *
 *  Created on: 19 may. 2022
 *      Author: miguel
 */


#include "UTN.h"
#include  "Alumno.h"
static int nuevoId (void);
void menu (eAlumno* alumnos , int lenAlumno, eCurso* cursos , int lenCursos)
{
	int opcion ;
	int posicionLibre ;
	int posicionencontrada ;

	inicializar(alumnos, lenAlumno);
	do
	{
		printf("\n1)alta \n2)modificacion \n3)baja  \n4)mostrar\n5)salir");
		utn_pedirInt(&opcion, "\nIngrese una opcion :", "\nERROR", 1, 4, 2);
		switch(opcion)
		{
			case 1:
				printf("\n alta");

				if(primeraPosicionLibre(alumnos, lenAlumno, &posicionLibre) == 0)
				{
					if(alta(alumnos, lenAlumno, cursos, lenCursos, posicionLibre) == 0)
					{
						printf("\n alta lista ");
					}

				}
				break;
			case 2:
				printf("\nModificacion");

				utn_pedirInt(&posicionencontrada, "\nIngrese le id del alumno a modificar : ", "\nERROR ", 0, lenAlumno, 2);
				if(buscarPorId(alumnos, lenAlumno, cursos, lenCursos, &posicionencontrada) == 0)
				{
					if(modificar(alumnos, lenAlumno, cursos, lenCursos, posicionencontrada) == 0)
					{
						printf("\nModificacion lista ");
					}
				}
				break;
			case 3:
				printf("\nBaja");
				break;
			case 4:
				printf("\nmostrar ");

				mostrar(alumnos, lenAlumno, cursos, lenCursos);
				break;
			case 5:
				printf("\nSalio del programa ");
				break;
			}

	} while (opcion != 5);




}

int alta (eAlumno* alumnos , int lenAlumno, eCurso* cursos , int lenCursos , int posicionLibre)
{

	eAlumno auxAlumno ;
	eCurso auxCurso ;

	utn_getNombre(auxAlumno.nombre, NOMBRE_LEN, "\nIngrese nombre del alumno :", "\nERROR ", 2);
	utn_getNumero(&auxAlumno.legajo, "\nIngrese numero de legajo (entre 1, 9999) :", "\nERROR ", 1, 9999, 2);
	utn_pedirInt(&auxAlumno.nota1, "\nIngrese la primera Nota : ", "\nError ", 1, 10, 2);
	utn_pedirInt(&auxAlumno.nota2, "\nIngrese la segunda Nota : ", "\nError ", 1, 10, 2);
	auxAlumno.isEmpty = OCUPADO;
	auxAlumno.promedio = (auxAlumno.nota1 + auxAlumno.nota2)/2;

	pedirTexto(auxCurso.descripcion, DESCRIPCION, "\nIngrese descripcion del curso :", "\nERROR", 2);
	utn_getNumero(&auxCurso.duracion, "\nIngrese la duracion de dias del curso (entre 1 y 90 dias):", "\nERROR ", 1, 90, 2);
	auxCurso.idCurso = nuevoId();
	auxAlumno.idAlumno = auxCurso.idCurso ;

	alumnos[posicionLibre] = auxAlumno;
	cursos[posicionLibre] = auxCurso ;
	return 0;

}


static int nuevoId (void)
{
	static int contador = 0;

	return (contador++);
}


void mostrar(eAlumno* alumnos , int lenAlumno, eCurso* cursos , int lenCursos)
{
	int i ;

	for (i = 0; i < lenAlumno; ++i) {

		if(alumnos[i].isEmpty == OCUPADO)
		{
			printf("\n id : %d || legajo : %d ||  nombre : %s || nota 1 : %d nota 2 : %d || promedio : %.2f ",alumnos[i].idAlumno , alumnos[i].legajo , alumnos[i].nombre, alumnos[i].nota1 ,alumnos[i].nota2 ,alumnos[i].promedio);
			printf("\n id : %d || Descripcion del Curso : %s  ", cursos[i].idCurso , cursos[i].descripcion);
		}

	}

}

int primeraPosicionLibre (eAlumno* alumno , int lenAlumno , int* posicionLibre)
{
	int i;
	int estado = -1;
	for (i = 0; i < lenAlumno; ++i) {

		if(alumno[i].isEmpty == VACIO)
		{
			*posicionLibre = i ;
			estado = 0;
			break;
		}
	}

	return estado;
}

void inicializar (eAlumno* alumnos , int lenAlumno)
{
	int i ;
	for (i = 0; i < lenAlumno; ++i) {

		alumnos->isEmpty = VACIO;

	}
}


int modificar (eAlumno* alumnos , int lenAlumno, eCurso* cursos , int lenCursos , int posicionLibre)
{

	eAlumno auxAlumno ;
	eCurso auxCurso ;

	utn_getNombre(auxAlumno.nombre, NOMBRE_LEN, "\nIngrese nombre del alumno :", "\nERROR ", 2);
//	utn_getNumero(&auxAlumno.legajo, "\nIngrese numero de legajo (entre 1, 9999) :", "\nERROR ", 1, 9999, 2);
//	utn_pedirInt(&auxAlumno.nota1, "\nIngrese la primera Nota : ", "\nError ", 1, 10, 2);
//	utn_pedirInt(&auxAlumno.nota2, "\nIngrese la segunda Nota : ", "\nError ", 1, 10, 2);
//	auxAlumno.isEmpty = OCUPADO;
//	auxAlumno.promedio = (auxAlumno.nota1 + auxAlumno.nota2)/2;

	pedirTexto(auxCurso.descripcion, DESCRIPCION, "\nIngrese descripcion del curso :", "\nERROR", 2);
	utn_getNumero(&auxCurso.duracion, "\nIngrese la duracion de dias del curso (entre 1 y 90 dias):", "\nERROR ", 1, 90, 2);
	auxCurso.idCurso = nuevoId();
	auxAlumno.idAlumno = auxCurso.idCurso ;

	alumnos[posicionLibre] = auxAlumno;
	cursos[posicionLibre] = auxCurso ;
	return 0;

}

int buscarPorId(eAlumno* alumnos , int lenAlumno, eCurso* cursos , int lenCursos , int* posicion)
{
	int i;
	int estado = -1;
	for (i = 0; i < lenAlumno; ++i) {

		if(alumnos[i].isEmpty == OCUPADO)
		{
			*posicion = i ;
			estado = 0;
			break;

		}
	}

	return estado ;
}

