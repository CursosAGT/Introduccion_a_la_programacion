// Copyright 2020 Ariel H Garcia Traba <cursos.agt@gmail.com>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
	printf("############################################################################\n");
	printf("##                                                                        ##\n");
	printf("##      Unidad 1 --Que es C?                                              ##\n");
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
	printf("##    >=              Mayor igual                                         ##\n");
	printf("##                                                                        ##\n");
	printf("##    &&              y -- and                                            ##\n");
	printf("##    ||              o -- or                                             ##\n");
	printf("##                                                                        ##\n");
	printf("############################################################################\n");
    printf( "\n\tContinuamos..\n");
	getchar();	fflush (stdin);
	printf("\n");
	int total=0;
	int anterior=0;
	int numero=0;
	int dato_int, dato_final =0;
	int contador = 0;
//--------------------------------------------- inicio seccion a repetir - iterar
		printf("\n ingrese 0 paran ingresar otro dato para salir  :");
		scanf("%d",&numero);
		if(numero == 0)
			{printf("\n\t\tSalio");}
		else
			{
				anterior=total;
				total=total+numero;
				printf("\n\t\tSumamos al valor anterior %d el valor nuevo %d dando un total de %d",anterior,numero,total);
			}
//--------------------------------------------- fin de iteraccion
    printf( "\n\n\tContinuamos..\n");
	getchar();
// Ej 005_1

	printf("\n\t\t\tUso de FOR");
	printf("\n\t\t\t~~~~~~~~~~~");
	printf("\nIntroduce el numero base : ");
	scanf("%i", &dato_int);
	printf("\nIntroduce el numero final (mayor) : ");
	scanf("%i", &dato_final);
	for (contador = dato_int; contador < dato_final; contador=contador+1)
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
	printf( "\n\n\tFin del ejercicio 005_1 \n\t\t-Continuar?\n");
// Ej 005_2
	printf("\n\t\t\tUso de WHILE");
	printf("\n\t\t\t~~~~~~~~~~~~(enter para continuar)");

	getchar();	fflush (stdin);
	printf("\n");

	contador = dato_int;//para poder modificar los valores sin que el original cambie
	while (contador < dato_final )
	{
		printf("tenes ganas de aprender? 0 para salir");
		if ((contador % 2) == 0 )
		{
		printf ("\nValor par	: %i \n" ,contador);
		}
		else
		{
		printf ("\n\t\t\tValor impar	: %i \n" ,contador);
		}
		contador=(contador + 1);
	}
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 005_2 \n\t\t-Continuar?\n");
// Ej 005_3
	printf("\n\t\t\tUso de DO....WHILE");
	printf("\n\t\t\t~~~~~~~~~~~~~~~~~~");
	getchar();	fflush (stdin);
    //system("cls");
	printf("\n");
	contador = dato_int;//para poder modificar los valores sin que el original cambie
	do
	{
		if ((contador % 2) == 0 )
		{
		printf ("\nValor par	: %i " ,contador);
		}
		else
		{
		printf ("\n\t\t\tValor impar	: %i " ,contador);
		}
		contador=contador+1;
	} while (contador < dato_final);

	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 004_8 \n\t\t-Continuar?\n");
	getchar();	fflush (stdin);
// Ej 005_2

	printf("\n\t\t\tUso de doble condicion");
	printf("\n\t\t\t~~~~~~~~~~~");
	printf("\nIntroduce el numero base : ");
	scanf("%i", &dato_int);
	printf("\nIntroduce el numero final (mayor) : ");
	scanf("%i", &dato_final);
	int filtro=0;
	int max =5;
	for (contador = dato_int; contador < dato_final && filtro <= max; contador++)
	{
        if (contador >= 10 )
            {
            printf ("\nsi entro en el condicional %i ",contador);
            printf ("\tusados del filtos %i quedan %i",filtro,max-filtro);
            filtro++;// sumo uno cada ves que entra en la condicion
            }
        else
            {
            printf ("\n\t\tno entro en el condicional %i ",contador);
            }
 	}
}

