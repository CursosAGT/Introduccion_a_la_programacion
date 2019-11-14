// Copyright 2019 Ariel H Garcia Traba <cursos.agt@gmail.com>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	printf("############################################################################\n");
	printf("##                                                                        ##\n");
	printf("##      Unidad 1 -¿Que es C?                                              ##\n");
	printf("##            * Instalacion y configuracion                               ##\n");
	printf("##            * Errores sintacticos y logicos                             ##\n");
	printf("##            * Programacion secuencial                                   ##\n");
	printf("##            * Estructuras condicionales simples, compuestas y anidadas  ##\n");
	printf("##            * Estructuras repetitivas                                   ##\n");
	printf("##                                                                        ##\n");
	printf("##      Salida por pantalla                                               ##\n");
	printf("##            * Printf                                                    ##\n");
	printf("##      Entras por teclado                                                ##\n");
	printf("##            * Scanf                                                     ##\n");
	printf("##      Variables y Constantes                                            ##\n");
	printf("##            * Tipos de variables                                        ##\n");
	printf("##            * Usos                                                      ##\n");
	printf("##                                                                        ##\n");
	printf("##      Condicionales                                                     ##\n");
	printf("##                                                                        ##\n");
	printf("##      Bucles                                                            ##\n");
	printf("##                                                                        ##\n");
	printf("##      Funciones                                                         ##\n");
	printf("##            * Parametros                                                ##\n");
	printf("##            * Retorno de datos                                          ##\n");
	printf("##            * Return de listas                                          ##\n");
	printf("##            * Parametros con valor por defecto                          ##\n");
	printf("##                                                                        ##\n");
	printf("##      Arrays                                                            ##\n");
	printf("##                                                                        ##\n");
	printf("##                                                                        ##\n");
	printf("##      GIT Colaborativo -Pair Programming                                ##\n");
	printf("##            * Introduccion a CVS y comparativa con SVN                  ##\n");
	printf("##            * Creando un repositorio con GIT, clonar, crear branches    ##\n");
	printf("##            * Borrar, guardar (stash), recuperar (pop)                  ##\n");
	printf("##            * Configuracion de remote                                   ##\n");
	printf("##            * Configuracion de Git avanzada                             ##\n");
	printf("##                                                                        ##\n");
	printf("############################################################################\n");
	printf("##                                                                        ##\n");
	printf("##                                                                        ##\n");
	printf("##                               Bucles                                   ##\n");
	printf("##                              ~~~~~~~~                                  ##\n");
	printf("##                                                                        ##\n");
	printf("##                                  for                                   ##\n");
	printf("##                           while  //  do while                          ##\n");
	printf("##                                                                        ##\n");
	printf("##    ==              Igual                                               ##\n");
	printf("##    !=              distinto                                            ##\n");
	printf("##    >               Mayor                                               ##\n");
	printf("##    <               Menor                                               ##\n");
	printf("##    ==              Menor igual                                         ##\n");
	printf("##    ==              Mayor igual                                         ##\n");
	printf("##                                                                        ##\n");
	printf("##    &&              y -- and                                            ##\n");
	printf("##    ||              o -- or                                             ##\n");
	printf("##                                                                        ##\n");
	printf("############################################################################\n");
    printf( "\n\tContinuamos..\n");
    getchar();
    system("pause");
    system("clear");
	printf("\n");


// Ej 005_1
	int    temporaria = 0;
	int    dato_1_int, dato_2_int =0;
	int contador = 0;
	printf("\n\t\t\tUso de FOR");
	printf("\n\t\t\t~~~~~~~~~~~");
	printf("\nIntroduce el numero base : ");
	scanf("%i", &dato_1_int);
	printf("\nIntroduce el numero max mayor : ");
	scanf("%i", &dato_2_int);
	for (contador = dato_1_int; contador < dato_2_int; contador++)
/*
	for (contador = dato_1_int; contador < dato_2_int && temporaria == 0; contador++)
	{
        if (contador >= 10 )
            {
            temporaria++;
            printf ("si %i",contador);
            }
        else
            {
            printf ("no %i",contador);
            }
        printf ("%i",contador);
*/



	{
		if ((contador % 2) == 0 )
		{
		printf ("\nValor par	: %i " ,contador);
		}
		else
		{
		printf ("\n\t\t\tValor impar	: %i " ,contador);
		}
	}
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf( "\n\tContinuamos..\n");
	printf("\n\t\t\tUso de WHILE");
	printf("\n\t\t\t~~~~~~~~~~~~");

    getchar();    getchar();    getchar();
 //   system("pause");
 //   system("clear");
	printf("\n");
	temporaria = dato_1_int;
	while (temporaria < dato_2_int)
	{
		if ((temporaria % 2) == 0 )
		{
		printf ("\nValor par	: %i " ,temporaria);
		}
		else
		{
		printf ("\n\t\t\tValor impar	: %i " ,temporaria);
		}
	 temporaria++;
	}
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf( "\n\tContinuamos..\n");
	printf("\n\t\t\tUso de DO....WHILE");
	printf("\n\t\t\t~~~~~~~~~~~~~~~~~~");
    getchar();    getchar();    getchar();
    //system("clear");
	printf("\n");
	temporaria = dato_1_int;
	do
	{
		if ((temporaria % 2) == 0 )
		{
		printf ("\nValor par	: %i " ,temporaria);
		}
		else
		{
		printf ("\n\t\t\tValor impar	: %i " ,temporaria);
		}
	 temporaria++;
	} while (temporaria < dato_2_int);

	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 005_1 \n\t\t¿Continuar?\n");
// Ej 005_2
 //   getchar();
 //   system("pause");
 //   system("clear");
	return (0);
}

