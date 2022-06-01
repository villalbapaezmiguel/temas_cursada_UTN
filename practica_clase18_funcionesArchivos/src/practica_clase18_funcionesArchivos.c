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
//lo primero que tenems que hacer con el archivo es abrirlo:	fopen();
	//no devuelve un puntero a una estructura de tipo archivo en donde adentro hay datos que me representan el archivo(donde esta , cuanto pesa , estoy parado al principio o al final)

/* nos devuelve un puntero a una estructura de tipo FILE fopen();resive dos argumentos = ( la ruta del archivo , como quiero  abrir)*/

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

 		a.id = 99999;
 		a.altura = 0.0;
 		sprintf(a.nombre , "jojojo");
 		//lo abrimos para escribir con los datos de eAlumno
// 		fwrite(&a, sizeof(eAlumno), 1,fp);
 		//lo abrimmos para leer
 		fread(&a, sizeof(eAlumno), 1 , fp);//parametros (&a donde va a dejar lo que escribe / el tamaño , y cuantos  / donde?  del archivo)
//fread te retorna cuanto leiste
 		//1:03:00

 		printf("\nId : %d nombre %s altura %.2f ", a.id , a.nombre , a.altura);

 		fclose(fp);//cerramos el archivo , siempre que terminamos de usar el archivo lo tenemos que cerrar
 	}else{
 		printf("\nERRO abriendo archivo ");

 	}

	return EXIT_SUCCESS;
}
