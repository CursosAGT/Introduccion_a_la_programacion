// Copyright 2020 Ariel H Garcia Traba <cursos.agt@gmail.com>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
long factorial(int n);

int  numero1;

long factorial(int n)
{
	if (n == 0) /* caso base */
		return 1; /* como 0! = 1, se retorna 1*/
	else
		return n * factorial (n - 1); /* llamada a esta misma funcion */
}

int main(void)
{
	printf("\ningrese el numero  ");
	scanf("%i",&numero1);
	printf("\nfactorial %ld ", factorial(numero1));

	return 0;
}

