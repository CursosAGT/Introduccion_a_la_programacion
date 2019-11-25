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
int valor = 0;
int contador = 2;// (porque todo numero es divisible por uno(1) (sin resto)
int valor_resto =0;

int dato_1;

printf("INGRESE EL NUMERO A INTERRUMPIR >1 < 10  :");
scanf("%i",&dato_1);
//Clase_break/continue/range_Ej_01
printf("Antes\n");
for (contador =1 ; contador <= 10 ; contador++)
	{
	if (contador ==dato_1)
		{break;//    <---------------------Break
		}
	printf("\tnumero %i \n",contador);//<---------------------print
	};
printf("despues\n");
for (contador =1 ; contador <= 10 ; contador++)
	{
	printf("\tnumero %i \n",contador);//<---------------------print
	if (contador ==dato_1)
		{break;//    <---------------------Break
		}
	};
//#################################################################

printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 004_8 \n\t\t¿Continuar?\n");
	getchar();	fflush (stdin);
getchar();
for (contador =1 ; contador <= 10 ; contador++)
	{
	if (contador ==dato_1)
		{
			printf("Salta el bucle, no imprime el valor\n") ;
			continue;		//    <---------------------continue
		}
	printf("\tnumero %i \n",contador);//<---------------------print
	};


printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 004_8 \n\t\t¿Continuar?\n");
	getchar();	fflush (stdin);

	printf ("mi primita(o) esta muy buena(o). Pero no te metas porque los primos son complicados ");
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\t-Elije un numero\n\t\tIngresa cualquier valor:");
	scanf("%i",&valor);
	printf("%i sera primo?\n\t Estos solo se pueden dividir por si mismos y uno (sin tener resto)\n",valor);
	printf ("\n~~~~~~CON WHILE\n");
	while (contador < valor)
	{
		valor_resto =valor % contador ;
		if ( valor_resto == 0)
			{
				printf ("\n\n\n%i no es primo" ,valor) ;
				printf ("\n\t\t %i /  %i = %i con Resto %i" ,valor, contador, valor/contador, valor_resto ) ;
				break;// salgo, no me interesa continuar xq ya encontre un divisor por el cual el resto es 0
			}
		else// ( valor_resto != 0)
		{
			printf("\n%i por ahora si es primo" ,valor) ;
			printf ("\n\t\t %i /  %i = %i con Resto %i" ,valor, contador, valor/contador, valor_resto ) ;
			contador++ ;
			if  (contador == valor)
			{
				printf("\nLLegamos al final");
				printf("\n\t\t  -*-*-*-*-*-  '%i' SI ES PRIMO  -*-*-*-*-*-  " ,valor) ;
			}
		}
	}
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 004_8 \n\t\t¿Continuar?\n");
	getchar();	fflush (stdin);
	printf ("\n~~~~~~CON FOR\n");
	for (contador =2 ; contador < valor ; contador++)
	{
		valor_resto =valor % contador ;
		if ( valor_resto == 0)
			{
				printf ("\n\n\n%i no es primo" ,valor) ;
				printf ("\n\t\t %i /  %i = %i con Resto %i" ,valor, contador, valor/contador, valor_resto ) ;
				break;// salgo, no me interesa continuar xq ya encontre un divisor por el cual el resto es 0
			}
		printf("\n%i por ahora si es primo" ,valor) ;
		printf ("\n\t\t %i /  %i = %i con Resto %i" ,valor, contador, valor/contador, valor_resto ) ;
		if ( contador < (valor-1)){continue;}//seria el ultimo
		printf("\nLLegamos al final");
		printf("\n\t\t  -*-*-*-*-*-  '%i' SI ES PRIMO  -*-*-*-*-*-  " ,valor) ;
	}
	printf( "\n\n\tFin del ejercicio 004_8 \n\t\t¿Continuar?\n");
	getchar();	fflush (stdin);
	return (0);
}

