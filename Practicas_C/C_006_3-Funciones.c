// Copyright 2020 Ariel H Garcia Traba <cursos.agt@gmail.com>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
//Ej 006_2
void sumar_valor(int numero3, int numero4); /* prototipo de la funcion */
int sumar_valor_return(int numero3,int numero4);
int numero_in, numero_out, numero1, numero2,retorno;

int main(void)
{
	printf("\ningrese el 1er numero  ");
	scanf("%i",&numero1);
	printf("\ningrese el 2do numero  ");
	scanf("%i",&numero2);
	numero_in=numero1+ numero2+10000;
	printf("\nValor de numero dentro de main() es: %d\n", numero_in);
	sumar_valor(numero1, numero2);
	retorno=sumar_valor_return(numero1, numero2);
	printf("\nValor de numero dentro de main() desde retorno es: %d\n", retorno);

	return 0;
}

void sumar_valor(int numero3,int numero4)
{
	numero_out=numero1+ numero2;

	printf("\nValor de numero dentro sumar_valor() es: %d\n", numero_out);

	return;
}
int sumar_valor_return(int numero3,int numero4)
{
	numero_out=numero1+ numero2;
	return (numero_out);
}
