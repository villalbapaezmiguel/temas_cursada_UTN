/*
 ============================================================================
 Name        : practica_clase18_funcionesArchivos.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "UTN.h"
#include "Alumno.h"


int main(void) {

	//LECTURA EN MODO TEXTO DE DATOS SEPARADOS POR COMA
	//(PARSER) Y PARSEAR ESOS DATOS EN VARIABLES EN MEMORIA

	FILE* fp ;

	fp = fopen("archivo.txt", "rb");
	if(fp != NULL)
	{


	}


















/*
 *
	//lo primero que tenems que hacer con el archivo es abrirlo:	fopen();
	//no devuelve un puntero a una estructura de tipo archivo en donde adentro hay datos que me representan el archivo(donde esta , cuanto pesa , estoy parado al principio o al final)

	nos devuelve un puntero a una estructura de tipo FILE fopen();resive dos argumentos = ( la ruta del archivo , como quiero  abrir)

	//"/home/migue/archivo.txt" = ruta absoluta
	//"archivo.txt" = ruta relativa , si el archivo no exite nos crea un archivo en donde tenemos un proyecto
	//para escribirlo w , si no exite nos lo crea
	//pra escribirlo en modo binario wb

	FILE* fp;

//	int var1 = 1234567;

 	fp = fopen("archivo.txt", "w" );//lo escribimos en modo texto
 	if(fp != NULL)
 	{
 		//lo usamos
 		//modo texto
 		//tenemos 1 funcion para leer y 1 funcion para escribir:
//escribir en modo texto :
//		fprintf(fp , "hola %d", var1);//primer argumento resive el puntero al archivo | y despues se usa igual que el sprintf/estamos transformando todo lo que le pasamos aca : %d  (ya sea texto o valores ) lo estamos convirtiendo a valores numericos que tienen simbolos que estan en la tabla ascii  para que yo lo pueda ver


 //		fwrite(&var1, sizeof(int), 1,fp);//.Esta función sirve para escribir archivos de texto o binarios./ estamos copiando tal cual como esta la variable en memoria al archivo
 //el origen , el tamaño , la cantiad yEs el puntero a FILE asociado al archivo

 		eAlumno a ;
 //		int i ;

 		a.id = 99999;//datos de la variable
 		a.altura = 0.0;//datos de la variable
 		sprintf(a.nombre , "jojojo");//datos de la variable
   // 		a.id = 9;//datos de la variable
   // 		a.altura = 3.14;//datos de la variable
   // 		sprintf(a.nombre , "Ernesto");//datos de la variable
   // 		fwrite(&a, sizeof(eAlumno), 1,fp);
 		fread(&a, sizeof(eAlumno), 1 , fp);
 		//lo abrimos para escribir con los datos de eAlumno// siempre con esta funcon escribimos en el archivo para escribirlo
   // 		fwrite(&a, sizeof(eAlumno), 1,fp); //lo que hicimos fue pasar el los datos de la variable al archivo y volcaros en el archivo, luego corrimos el programa y depues lo comentamos , pero los datos de las variables ya se almacenaron en el archivo

  //como lo vuelvo a volcar en la variable ? que funcion usabamos para leer en forma binaria(leer en forma binaria significa agarrar cada bit y copiarlo devuelta a memoria)?
  //usamos fread(), que hace fread ()? lee bit por bit y me lo va a volcar  a memoria , y le pasamos lo mismo
  // 		fread(&a, sizeof(eAlumno), 1 , fp);//parametros (&a donde va a dejar lo que escribe / el tamaño , y cuantos  / donde?  del archivo)
  //fread te retorna cuanto leiste


 		printf("\nId : %d nombre %s altura %.2f ", a.id , a.nombre , a.altura);

 		//LECTURA BINARIA DINAMICA
 		eAlumno a ;

 		a.id = 99999;//datos de la variable
 		a.altura = 0.0;//datos de la variable
 		sprintf(a.nombre , "jojojo");//datos de la variable

 		int fin  = 1;

 		do {

 			fin = fread(&a , sizeof(eAlumno), 1, fp);
 			if(fin == 1)
 			{
 	 			listaAlumnos[i] = alumno_newParametros(a.nombre,a.altura, a.id);

 	 			i++;
 			}

		}
// 		while (fin != 0);
 		while (feof(fp) == 0);



 		//ESCRITURA BINARIA CON ARRAY DE PUNTEROS

 		for (i = 0; i < CANTIDAD_ELEMENTOS; ++i) {

 			fwrite(listaAlumnos[i], sizeof(eAlumno), 1 , fp;)
		}


 		//ESCRITURA MODO TEXTO
 		char nombreAux [50];
 		float alturaAux;
 		char  idAux [32];
 		for (i = 0; i < CANTIDAD_ELEMENTOS; ++i) {

 			alumno_getIdTxt(listaAlumnos[i], idAux);
 			alumno_getNombre(listaAlumnos[i], nombreAux);
 			alumno_getAltura(listaAlumnos[i], alturaAux);

 			printf("%s , %d , %f",nombreAux , idAux , alturaAux );
 			fprintf(fp , "%s , %d , %f",nombreAux , idAux , alturaAux );

		}


 		fclose(fp);//cerramos el archivo , siempre que terminamos de usar el archivo lo tenemos que cerrar
 	}else{
 		printf("\nERRO abriendo archivo ");

 	}
 */
	return EXIT_SUCCESS;
}
