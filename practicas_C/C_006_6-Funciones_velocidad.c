// Copyright 2019 Ariel H Garcia Traba <cursos.agt@gmail.com>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
//Ej 006_2
float calculo (int valor_a, int valor_b);
int main()
{
	int valor_1 =0;
	int valor_2 =0 ;
	float velocidad =0;
	char   dato_char;
	do
	{
		printf("\n+------------------------+");
		printf("\n|  DENTRO DE LA FUNCION  |");
		printf("\n|           main         |");
		printf("\n+------------------------+");
		printf("\n+Distancias entre tomas 1 km+");
		printf("\nIntroduce el tiempo inicial(en minutos ): ");
		scanf("%i%*c", &valor_1);
		printf("\nIntroduce el tiempo final(en minutos ): ");
		scanf("%i%*c", &valor_2);
		velocidad=	calculo (valor_1,valor_2);
		printf("\n velocidad = %f  \n",velocidad);//c
		printf("\nIngrese 's' para salir cualquier otra tecla para continual ");
		scanf("%c", &dato_char);//	scanf("%c%*c", &dato_char);
	} while(dato_char != 's' && dato_char != 'S');

	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 006_2 \n\t\t¿Continuar?\n");

	getchar();
	system("clear");
	return (0);
}

float calculo (int valor_a, int valor_b)
{
	float tiempo = 0;
	float velocidad = 0;
	printf("\n+------------------------+");
	printf("\n|  DENTRO DE LA FUNCION  |");
	printf("\n|         SUMEMOS        |");
	printf("\n+------------------------+");
	tiempo = (valor_b - valor_a);
	printf("\n tiempo = %f  \n",tiempo);//c
	velocidad = (60/tiempo);//con 1km de distancia
	printf("\n velocidad = %f km/hora \n",velocidad);//c
	return (velocidad);
}
