// Copyright 2020 Ariel H Garcia Traba <cursos.agt@gmail.com>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main(void)
{
	printf("############################################################################\n");
	printf("##                                                                        ##\n");
	printf("##      -Que es C?                                                        ##\n");
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
	printf("\n");
	printf("\n	switch ( variablo )");
	printf("\n         {");
	printf("\n             case 0:  bloque de sentencias;break");
	printf("\n          }");

    printf( "\n\tContinuar: \n");
	getchar();	fflush (stdin);
	int dato_1_int=0;
	int nota;
	char nota_alfa ;
//Ej 004_2_1
printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
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
printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 004_2_1 \n\t\t-Continuar?\n");
	getchar();	fflush (stdin);


//Ej 004_2_2
	getchar();	fflush (stdin);
	printf(" Inserte una nota en sistema alfanumerico \n\tSobresaliente\n\tExelente\n\tMuybien\n\tBien\n\tRegular\n\tAplazado: ");
	nota_alfa = getchar();
	switch(nota_alfa)
	{
		case 'A': printf("\nAplazado");break;
		case 'R': printf("\nRegulara");break;
		case 'B': printf("\nBien");break;
		case 'M': printf("\nMuy Bien");break;
		case 'E': printf("\Excelente");break;
		case 'S': printf("\nSobresaliente");break;
		default: printf("esa nota es incorrecta");
	}

printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 004_2_2 \n\t\t-Continuar?\n");




//Ej 004_2_3
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
		printf("%.2f Pesos son %.2f Dolares",entrada,salida);
		break;
		case 2:salida=entrada*cambio;
		printf("%.2f Dolares son %.2f Pesos",entrada,salida);
		break;
		default: printf("opcion incorrecta");
	}

printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 004_2_3 \n\t\t-Continuar?\n");
	getchar();	fflush (stdin);
// Ej 004_2_4
	printf("\nIntroduce un mes en numero : ");
	scanf("%i", &dato_1_int);
	switch (dato_1_int )
	{
		case  1  : printf ("\n %i corresponde al mes de Enero", dato_1_int ); break;
		case  2  : printf ("\n %i corresponde al mes de Febrero", dato_1_int ); break;
		case  3  : printf ("\n %i corresponde al mes de Marzo", dato_1_int ); break;
		case  4  : printf ("\n %i corresponde al mes de Abril- No esta, se lo robaron a Joaquin", dato_1_int ); break;
		case  5  : printf ("\n %i corresponde al mes de Mayo", dato_1_int ); break;
		case  6  : printf ("\n %i corresponde al mes de Junio", dato_1_int ); break;
		case  7  : printf ("\n %i corresponde al mes de Julio", dato_1_int ); break;
		case  8  : printf ("\n %i corresponde al mes de Agosto", dato_1_int ); break;
		case  9  : printf ("\n %i corresponde al mes de Septiembre", dato_1_int ); break;
    	case  10 : printf ("\n %i corresponde al mes de Octubre", dato_1_int ); break;
		case  11 : printf ("\n %i corresponde al mes de Noviembre", dato_1_int ); break;
		case  12 : printf ("\n %i corresponde al mes de Diciembre", dato_1_int ); break;
		default: printf ("\n Error %i no corresponde a los 12 meses", dato_1_int ); break;
	}

printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 004_2_4 \n\t\t-Continuar?\n");
	printf( "\n\n\tFin del ejercicio 004_2_3 \n\t\t-Continuar?\n");
	getchar();	fflush (stdin); system("cls");
	printf("rehacer los programas de condicionales IF (en caso de que se pueda con switch - case)");

return 0;

	}

