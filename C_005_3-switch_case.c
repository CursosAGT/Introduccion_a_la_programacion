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
    printf( "\n\tContinuar: \n");
	getchar();
	system("clear");












	int nota;
	printf(" Inserte una nota: ");
	scanf("%d",&nota);
	switch(nota)
	{
		case 0: printf("\nRecursa");break;
		case 1: printf("\nRecursa");break;
		case 2: printf("\nRecursa");break;
		case 3: printf("\nRecursa");break;
		case 4: printf("\nAplazado");break;
		case 5: printf("\nAplazado");break;
		case 6: printf("\nAprobado");break;
		case 7: printf("\nBien");break;
		case 8: printf("\nMuy Bien");break;
		case 9: printf("\Excelente");break;
		case 10: printf("\nSobresaliente");break;
		default: printf("esa nota es incorrecta");
	}
    printf( "\n\tContinuar: \n");
	getchar();	getchar();


	float entrada,salida, cambio;
	int opcion;
	cambio = 65.50;
	printf("cotizar de moneda extranjera\n");
	printf("opcion:\n\t1-pesos a Dolares \n\t2-Dolares a pesos\n");
	scanf("%d",&opcion);
	printf("monto a cambiar: ");
	scanf("%f",&entrada);
	switch(opcion)
	{
		case 1:salida=entrada/cambio;
		printf("%f Pesos son %f Dolares",entrada,salida);
		break;
		case 2:salida=entrada*cambio;
		printf("%f Dolares son %f Pesos",entrada,salida);
		break;
		default: printf("opcion incorrecta");
	}

    printf( "\n\tContinuar: \n");
	getchar();	getchar();

}

