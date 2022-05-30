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

int main(void) {
//lo primero que tenems que hacer con el archivo es abrirlo:	fopen();
	//no devuelve un puntero a una estructura de tipo archivo en donde adentro hay datos que me representan el archivo(donde esta , cuanto pesa , estoy parado al principio o al final)

/* nos devuelve un puntero a una estructura de tipo FILE fopen();resive dos argumentos = ( la ruta del archivo , como quiero  abrir)*/

//"/home/migue/archivo.txt" = ruta absoluta
//"archivo.txt" = ruta relativa , si el archivo no exite nos crea un archivo en donde tenemos un proyecto
//para escribirlo w , si no exite nos lo crea
//pra escribirlo en modo binario wb

	FILE* fp;
	int var1 = 5;

	utn_getNumero(&var1, "\nIngrese un numero : ", "\nerro ", 0, 999, 2);

 	fp = fopen("archivo.txt", "w" );
 	if(fp != NULL)
 	{
 		//lo usamos
 		//modo texto
 		//tenemos 1 funcion para leer y 1 funcion para escribir:
//escribir en modo texto :
 		fprintf(fp , "hola %d", var1);//primer argumento resive el puntero al archivo | y despues se usa igual que el sprintf


 		fclose(fp);//cerramos el archivo , siempre que terminamos de usar el archivo lo tenemos que cerrar
 	}else{
 		printf("\nERRO abriendo archivo ");

 	}

	return EXIT_SUCCESS;
}
