/*
 * Alumno.h
 *
 *  Created on: 19 may. 2022
 *      Author: miguel
 */

#ifndef ALUMNO_H_
#define ALUMNO_H_
#include "UTN.h"
#define NOMBRE_LEN 51
#define DESCRIPCION 51
#define VACIO 0
#define OCUPADO 1
//ada la estructura eAlumno (legajo, nombre, nota1, nota2, promedio)

typedef struct{

	int legajo ;
	char nombre [NOMBRE_LEN];
	int nota1 ;
	int nota2 ;
	float promedio ;
	int idAlumno ;
	int isEmpty ;

}eAlumno;

// eCurso (idCurso, descripcion, duracion),

typedef struct{

	int idCurso ;
	char descripcion [DESCRIPCION];
	int duracion ;

}eCurso;

void menu (eAlumno* alumnos , int lenAlumno, eCurso* cursos , int lenCursos);
int alta (eAlumno* alumnos , int lenAlumno, eCurso* cursos , int lenCursos , int posicionLibre);
int primeraPosicionLibre (eAlumno* alumno , int lenAlumno , int* posicionLibre);
void inicializar(eAlumno* alumnos, int lenAlumno);
int buscarPorId(eAlumno* alumnos , int lenAlumno, eCurso* cursos , int lenCursos , int* posicion);
int modificar (eAlumno* alumnos , int lenAlumno, eCurso* cursos , int lenCursos , int posicionLibre);
void mostrar(eAlumno* alumnos , int lenAlumno, eCurso* cursos , int lenCursos);
#endif /* ALUMNO_H_ */
