// Copyright 2020 Ariel H Garcia Traba <cursos.agt@gmail.com>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
//Ej 006_2
float calculo (float lat_1, float long_1, float lat_2, float long_2);
int main()
{
	float lat_1 =0;
	float long_1 =0 ;
	float lat_2 =0;
	float long_2 =0 ;
	float hipotenusa;
	char   dato_char;
	do
	{
		printf("\n+------------------------+");
		printf("\n|  DENTRO DE LA FUNCION  |");
		printf("\n|           main         |");
		printf("\n+------------------------+");
		printf("\n+Distancias entre tomas 1 km+");
		printf("\nIntroduce el latitud inicial(en minutos ): ");
		scanf("%f%*c", &lat_1);
		printf("\nIntroduce el latitud final(en minutos ): ");
		scanf("%f%*c", &lat_2);
		printf("\nIntroduce el longitud inicial(en minutos ): ");
		scanf("%f%*c", &long_1);
		printf("\nIntroduce el longitud final(en minutos ): ");
		scanf("%f%*c", &long_2);

		hipotenusa = calculo ( lat_1,  long_1,  lat_2,  long_2);
		printf("\n la distancia en un plano entre los dos puntos es de = %f  \n",hipotenusa);//c
		printf("\nIngrese 's' para salir cualquier otra tecla para continuar ");
		scanf("%c", &dato_char);//	scanf("%c%*c", &dato_char);
	} while(dato_char != 's' && dato_char != 'S');

	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 006_2 \n\t\t-Continuar?\n");

	getchar();
	system("cls");
	return (0);
}

float calculo (float lat_1, float long_1, float lat_2, float long_2)
{
	float hipotenusa = 0;
	float distacia_lat = 0;
	float distacia_long = 0;
	printf("\n+------------------------+");
	printf("\n|  DENTRO DE LA FUNCION  |");
	printf("\n|         SUMEMOS        |");
	printf("\n+------------------------+");
	printf("\n distancia latitud = (lat final %f - lat inicial %f ) = %f \t",lat_2, lat_1,lat_2 - lat_1);//c
	printf("\n distancia Longitud = (long final %f - long inicial %f ) = %f \t",long_2, long_1,long_2 - long_1);//c

	distacia_lat = lat_2 - lat_1;
	distacia_long = long_2 - long_1;
	hipotenusa = sqrt(pow(distacia_lat, 2)+pow(distacia_long, 2));

	printf("\n hipotenusa = %f  \n",hipotenusa);//c
	return (hipotenusa);
}
