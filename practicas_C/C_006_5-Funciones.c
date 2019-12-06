// Copyright 2019 Ariel H Garcia Traba <cursos.agt@gmail.com>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
//Ej 006_2
void modificar (int valor_a);
int modificar_retorno (int valor_a);
void modificar_punteros(int *valor_a);
int main()
{
	int valor_1 =0;
	int retorno =0;
	printf("\n+------------------------+");
	printf("\n|  DENTRO DE LA FUNCION  |");
	printf("\n|           main         |");
	printf("\n+------------------------+");
	printf("\nIntroduce un numero : ");
	scanf("%i%*c", &valor_1);
	printf("\nValor original=%d en main antes de llamar a la función modificar", valor_1);
	modificar(valor_1);
	printf("\nvalor=%d en main despues de llamar a la función modificar", valor_1);
	retorno=modificar_retorno(valor_1);
	printf("\nvalor=%d en main despues de llamar a la función modificar_retorno", retorno);
	modificar_punteros(&valor_1);
	printf("\nvalor=%d en main despues de llamar a la función modificar_punteros", valor_1);

	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	getchar();

	return (0);
}

void modificar (int valor_a)
{
	printf("\n+------------------------+");
	printf("\n|  DENTRO DE LA FUNCION  |");
	printf("\n|        modificar       |");
	printf("\n+------------------------+");
	printf("\nvalor=%d en funcion modificar antes del scanf", valor_a);
	printf("\ncambiemos el valor en la funcion: ");
	scanf("%i%*c", &valor_a);
	printf("\nvalor=%d en funcion modificar despues del scanf", valor_a);
	return ;
}
int modificar_retorno (int valor_b)//variable o dato
{
	printf("\n+------------------------+");
	printf("\n|  DENTRO DE LA FUNCION  |");
	printf("\n|    modificar_retorno   |");
	printf("\n+------------------------+");
	printf("\nvalor=%d en funcion modificar_retorno antes del scanf", valor_b);
	printf("\ncambiemos el valor en la funcion: ");
	scanf("%i%*c", &valor_b);
	printf("\nvalor=%d en funcion modificar_retorno despues del scanf", valor_b);
	return (valor_b);
}
void modificar_punteros(int *valor_c)//puntero  o dirección de memoria
	{
	printf("\n+------------------------+");
	printf("\n|  DENTRO DE LA FUNCION  |");
	printf("\n|    modificar_punteros   |");
	printf("\n+------------------------+");
	printf("\nvalor=%d en funcion modificar_punteros antes del scanf", *valor_c);
	printf("\ncambiemos el valor en la funcion: ");
	scanf("%i%*c", valor_c);
	printf("\nvalor=%d en funcion modificar_punteros despues del scanf", *valor_c);
	}
