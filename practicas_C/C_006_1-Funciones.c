// Copyright 2019 Ariel H Garcia Traba <cursos.agt@gmail.com>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
//Ej 006_1
void sumemos ();
int main(void)
{
	char   dato_char;
	do
	{
	printf("\n+------------------------+");
	printf("\n|  DENTRO DE LA FUNCION  |");
	printf("\n|           main         |");
	printf("\n+------------------------+");
		sumemos ();

		printf("\nIngrese 's' para salir cualquier otra tecla para continual ");
		scanf("%c", &dato_char);//	scanf("%c%*c", &dato_char);
	} while(dato_char != 's' && dato_char != 'S');

	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 006_1 \n\t\t¿Continuar?\n");


	getchar();
	system("clear");
	return (0);
}
void sumemos ()
{
	int  valor_1, valor_2, resultado;
	printf("\n+------------------------+");
	printf("\n|  DENTRO DE LA FUNCION  |");
	printf("\n|         SUMEMOS        |");
	printf("\n+------------------------+");
	printf("\nIntroduce el 1er numero : ");
	scanf("%i%*c", &valor_1);
	printf("\nIntroduce el 2do numero : ");
	scanf("%i%*c", &valor_2);
	printf("\n sumemos %i + %i\n",valor_1, valor_2);//c
	resultado =  valor_1 + valor_2;
	printf("\n RESULTADO = %i  \n",resultado);//c

}
