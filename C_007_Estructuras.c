// Copyright 2019 Ariel H Garcia Traba <cursos.agt@gmail.com>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
/*
				printf("############################################################################\n");
				printf("##                                                                        ##\n");
				printf("##      ¿Que es C?                                                        ##\n");
				printf("##            * Instalacion y configuracion                               ##\n");
				printf("##            * Errores sintacticos y logicos                             ##\n");
				printf("##            * Programacion secuencial                                   ##\n");
				printf("##            * Estructuras condicionales simples, compuestas y anidadas  ##\n");
				printf("##            * Estructuras repetitivas                                   ##\n");
				printf("##                                                                        ##\n");
				printf("##      Salida por pantalla                                               ##\n");
				printf("##            * Printf                                                    ##\n");
				printf("##                                                                        ##\n");
				printf("##      Entras por teclado                                                ##\n");
				printf("##            * scanf                                                     ##\n");
				printf("##            * gets                                                      ##\n");
				printf("##                                                                        ##\n");
				printf("##      Variables y Constantes                                            ##\n");
				printf("##            * Tipos de variables                                        ##\n");
				printf("##            * Usos                                                      ##\n");
				printf("##                                                                        ##\n");
				printf("##      Condicionales                                                     ##\n");
				printf("##            * if                                                        ##\n");
				printf("##            * else                                                      ##\n");
				printf("##            * else if                                                   ##\n");
				printf("##                                                                        ##\n");
				printf("##      Bucles                                                            ##\n");
				printf("##            * for                                                       ##\n");
				printf("##            * while                                                     ##\n");
				printf("##            * do while                                                  ##\n");
				printf("##            * break                                                     ##\n");
				printf("##            * continue                                                  ##\n");
				printf("##                                                                        ##\n");
				printf("##      Funciones                                                         ##\n");
				printf("##            * void                                                      ##\n");
				printf("##            * Parametros                                                ##\n");
				printf("##            * Retorno de datos                                          ##\n");
				printf("##                                                                        ##\n");
				printf("##      Memoria y punteros                                                ##\n");
				printf("##                                                                        ##\n");
				printf("##      Arrays                                                            ##\n");
				printf("##                                                                        ##\n");
				printf("##                                                                        ##\n");
				printf("##      GIT Colaborativo -Pair Programming                                ##\n");
				printf("##            * Creando un repositorio con GIT, clonar, crear branches    ##\n");
				printf("##            * push                                                      ##\n");
				printf("##            * pull                                                      ##\n");
				printf("##                                                                        ##\n");
				printf("############################################################################\n");
				printf("############################################################################\n");
				printf("##                                                                        ##\n");
				printf("##      Estructuras de Variables                                          ##\n");
				printf("##                                                                        ##\n");
				printf("############################################################################\n");
*/

//Ej 008_01
typedef struct{

				int ruedas;
				int asientos;
				int ejes;
				int puertas;
				char tipo[11];
				char marca[11];
				char modelo[11];
				}Estructura;

int main()
{
/*
	Estructura AUTOS;//VER QUE ESTA EN MAYUSCULAS

	AUTOS.ruedas = 4;
	AUTOS.asientos = 4;
	AUTOS.ejes=2;
	AUTOS.puertas=5;
	strcpy(AUTOS.tipo,"auto");
	strcpy(AUTOS.marca,"VW");
	strcpy(AUTOS.modelo,"Suran");

	printf("\nMi %s es un %s %s ",AUTOS.tipo,AUTOS.marca,AUTOS.modelo);
	printf("\nTiene %i ruedas en sus %i ejes",AUTOS.ruedas,AUTOS.ejes);
	printf("\nSe ingresa por una de sus %i puertas a uno de sus %i asientos.",AUTOS.puertas,AUTOS.asientos);

	Estructura CAMIONETA;//VER QUE ESTA EN MAYUSCULAS

	CAMIONETA.ruedas = 4;
	CAMIONETA.asientos = 2;
	CAMIONETA.ejes=2;
	CAMIONETA.puertas=2;
	strcpy(CAMIONETA.tipo,"camioneta");
	strcpy(CAMIONETA.marca,"FIAT");
	strcpy(CAMIONETA.modelo,"fiorino");

	printf("\nMi %s es un %s %s ",CAMIONETA.tipo,CAMIONETA.marca,CAMIONETA.modelo);
	printf("\nTiene %i ruedas en sus %i ejes",CAMIONETA.ruedas,CAMIONETA.ejes);
	printf("\nSe ingresa por una de sus %i puertas a uno de sus %i asientos.",CAMIONETA.puertas,CAMIONETA.asientos);
	printf("\n---------------------------------------------------------------------------\n");
	printf( "\n\tContinuamos..\n");
	getchar();
*/
	Estructura moviles[5];

	for (int contador=0; contador < 2 ; contador++)
	{
	printf("\nVehiculo nº: %i", contador +1);
	printf("\nIngresa un tipo de vehiculo :");
		fflush (stdin);
		fgets(moviles[contador].tipo,11,stdin);
	printf("\nIngresa una marca de vehiculo :");
		fflush (stdin);
		fgets(moviles[contador].marca,11,stdin);
	printf("\nIngresa un modelo de vehiculo :");
		fflush (stdin);
		fgets(moviles[contador].modelo,11,stdin);
	printf("\nIngresa que cantidad de ruedas tiene :");
		fflush (stdin);
		scanf("%i",&moviles[contador].ruedas);
	printf("\nIngresa que cantidad de ejes tiene :");
		scanf("%i",&moviles[contador].ejes);
	printf("\nIngresa que cantidad de puertas tiene :");
		scanf("%i",&moviles[contador].puertas);
	printf("\nIngresa que cantidad de asientos tiene :");
		scanf("%i",&moviles[contador].asientos );
	}

	for (int contador = 0; contador < 2; contador++)
	{
		int largo_cadena =(strlen(moviles[contador].tipo));
		for (int contador2 = 0; contador2 < largo_cadena; contador2++)//(strlen(moviles[contador].tipo)));
		{
			if (moviles[contador].tipo[contador2] == '\n')
			{
				moviles[contador].tipo[contador2] = '\0';
			}
		}
	}


	for (int contador=0; contador < 2 ; contador++)
	{
		printf("\nEl vehiculo nro %i %s es un %s %s ",contador, moviles[contador].tipo,moviles[contador].marca,moviles[contador].modelo);
		printf("\nTiene %i ruedas en sus %i ejes",moviles[contador].ruedas,moviles[contador].ejes);
		printf("\nSe ingresa por una de sus %i puertas a uno de sus %i asientos.",moviles[contador].puertas,moviles[contador].asientos);
	}






	printf( "\n\tContinuamos..\n");
	getchar();
//	system("clear");
	return (0);
	// ver https://www.youtube.com/watch?v=f6aK9QL-fdA&list=PLw8RQJQ8K1ySN6bVHYEpDoh-CKVkL_uOF&index=34
}

