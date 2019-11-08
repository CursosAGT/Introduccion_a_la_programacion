// Copyright 2019 Ariel H Garcia Traba <cursos.agt@gmail.com>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main(void)
{
	printf("############################################################################\n");
	printf("##                                                                        ##\n");
	printf("##      ¿Qué es C?                                                        ##\n");
	printf("##            * Instalación y configuración                               ##\n");
	printf("##            * Errores sintácticos y lógicos                             ##\n");
	printf("##            * Programación secuencial                                   ##\n");
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
	printf("##            * Parámetros                                                ##\n");
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
    printf( "\n\tContinuar: \n");
	getchar();
	system("clear");












	int nota;
	printf(" Inserte una nota: ");
	scanf("%d",&nota);
	switch(nota)
	{
		case 0: printf("\nSuspenso");break;
		case 1: printf("\nSuspenso");break;
		case 2: printf("\nSuspenso");break;
		case 3: printf("\nSuspenso");break;
		case 4: printf("\nSuspenso");break;
		case 5: printf("\nAprobado");break;
		case 6: printf("\nBien");break;
		case 7: printf("\nNotable");break;
		case 8: printf("\nNotable");break;
		case 9: printf("\nSobresaliente");break;
		case 10: printf("\nSobresaliente");break;
		default: printf("esa nota es incorrecta");
	}
    printf( "\n\tContinuar: \n");
	getchar();	getchar();


	float entrada,salida, cambio;
	int opcion;
	cambio = 65.50;
	printf("la cantidad: ");
	scanf("%f",&entrada);
	printf("1-pesos a Dolares \n2-Dolares a pesos");
	scanf("%d",&opcion);
	switch(opcion)
	{
		case 1:salida=entrada/cambio;
		printf("%f Pesos son %f Dolares",entrada,salida);
		break;
		case 2:salida=entrada*cambio;
		printf("%f Dolares son %f Pesos",entrada,salida);
		break;
		default: printf("opción incorrecta");
	}

    printf( "\n\tContinuar: \n");
	getchar();	getchar();

}

