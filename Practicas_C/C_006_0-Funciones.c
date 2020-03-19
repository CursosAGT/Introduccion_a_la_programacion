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
printf("tipo_de_retorno nombre_de_la_funcion (lista_de_parámetros)");
printf("	{");
printf("	cuerpo_de_la_funcion");
printf("	return expresion");
printf("	}");
printf("tipo_de_retorno:es el tipo del valor devuelto por la funcion, o, en caso de que la funcion no devuelva valor alguno, la palabra reservada void.");
printf("nombre_de_la_funcion:es el nombre o identificador asignado a la funcion.");
printf("lista_de_parámetros:es la lista de declaracion de los parámetros que son pasadosa la funcion. Éstos se separan por comas. Debemos tener en cuenta que pueden existir funciones que no utilicen parámetros.");
printf("cuerpo_de_la_funcion:está compuesto por un conjunto de sentencias que llevana cabo la tarea específica para la cual ha sido creada la funcion.");
printf("return expresion:mediante la palabra reservada return, se devuelve el valor de lafuncion, en este caso representado por expresion");

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
	numero_out=numero3+ numero4;

	printf("\nValor de numero dentro sumar_valor() es: %d\n", numero_out);

	return;
}
int sumar_valor_return(int numero3,int numero4)
{
	numero_out=numero3+ numero4;
	return (numero_out);
}