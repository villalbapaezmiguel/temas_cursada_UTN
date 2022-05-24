/*
 ============================================================================
 Name        : prueba.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void func(int* a, int b);


int main(void) {

	int* pEntero = NULL;
	int a = 50 ;
	int b = 50 ;

	pEntero = &a;
	*pEntero = += b;

	printf("%d", pEntero);


	return EXIT_SUCCESS;
}
void func(int* a, int b)
{
	*a += 23 ;
	b+= 60;
	return;
}
