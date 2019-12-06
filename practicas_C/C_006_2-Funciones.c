// Copyright 2019 Ariel H Garcia Traba <cursos.agt@gmail.com>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
//Ej 006_2
int sumemos (int valor_a, int valor_b);
int main()
{
	int valor_1 =0;
	int valor_2 =0 ;
	int resultado =0;
	char   dato_char;
	do
	{
		printf("\n+------------------------+");
		printf("\n|  DENTRO DE LA FUNCION  |");
		printf("\n|           main         |");
		printf("\n+------------------------+");
		printf("\nIntroduce el 1er numero : ");
		scanf("%i%*c", &valor_1);
		printf("\nIntroduce el 2do numero : ");
		scanf("%i%*c", &valor_2);
		resultado=	sumemos (valor_1,valor_2);
		printf("\n RESULTADO = %i  \n",resultado);//c
		printf("\nIngrese 's' para salir cualquier otra tecla para continuar ");
		scanf("%c", &dato_char);//	scanf("%c%*c", &dato_char);
	} while(dato_char != 's' && dato_char != 'S');

	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 006_2 \n\t\t¿Continuar?\n");

	getchar();
	system("clear");
	return (0);
}

int sumemos (int valor_a, int valor_b)
{
	int resulta2 = 0;
	printf("\n+------------------------+");
	printf("\n|  DENTRO DE LA FUNCION  |");
	printf("\n|         SUMEMOS        |");
	printf("\n+------------------------+");
	printf("\n sumemos %i + %i\n",valor_a, valor_b);//c
	resulta2 =  valor_a + valor_b;
	return (resulta2);
}
