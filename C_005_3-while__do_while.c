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
	printf("\n");
	printf("\n	while ( condición/expresión_lógica )");
	printf("\n         {");
	printf("\n               bloque de sentencias;");
	printf("\n          }");
	printf("\n############################################################################\n");
	printf("\n	do");
	printf("\n         {");
	printf("\n               bloque de sentencias;");
	printf("\n          }");
	printf("\n	while ( condición/expresión_lógica );");
	printf("\n");
	int nota;
	char nota_alfa ;
	int edad = 0;
// Ej 001_4

	/*Otras
Funciones utiles para operar cadenas de caracteres.

No solo string.h contiene funciones utiles para el tratamiento de cadenas. En ctype.h se encuentran unas funciones que permiten hacer comodamente preguntas acerca de los caracteres, como si son mayusculas, minusculas, digitos, etc:

isalnum(caracter): devuelve cierto (un entero cualquiera distinto de cero) si caracter es una letra o digito, y falso (el valor entero 0) en caso contrario.

isalpha(caracter): devuelve cierto si caracter es una letra, y falso en caso contrario.

isblank(caracter): devuelve cierto si caracter es un espacio en blanco o un tabulador.

isdigit(caracter) devuelve cierto si caracter es un digito, y falso en caso contrario.

isspace(caracter): devuelve cierto si caracter es un espacio en blanco, un salto de linea, un retorno de carro, un tabulador, etc., y falso en caso contrario.

islower(caracter): devuelve cierto si caracter es una letra minuscula, y falso en caso contrario.

isupper(caracter): devuelve cierto si caracter es una letra mayuscula, y falso en caso contrario.

toupper(caracter): devuelve la mayuscula asociada a caracter, si la tiene; si no, devuelve el mismo caracter.
tolower(caracter): devuelve la minuscula asociada a caracter, si la tiene; si no, devuelve el mismo caracter.
*/
//#############################################################################################################

	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\t¿Continuar?\n");
	getchar();	fflush (stdin);
//Ej 005_3_1
	int contador = 0;
	//   char c;
	char cadena_org[20] = "Curso2019 LeNgUaJe C";
	char cadena_Upper[20] ;
	char cadena_Lower[20] ;
//	strcpy(cadena_4, cadena_3); // Copia el contenido de origen en destino
	printf ("\nLa Cadena original es : %s", cadena_org);
	contador = 0;
	printf ("\n");

	while( cadena_org[contador] )
	{

	  cadena_Lower[contador] = tolower(cadena_org[contador]);
	  cadena_Upper[contador] = toupper(cadena_org[contador]);
	  contador++;
	}
	printf ("\nLa Cadena modificada a toupper es :%s", cadena_Upper);
	printf ("\nLa Cadena modificada a lower   es :%s", cadena_Lower);

//#############################################################################################################
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 005_3_1 \n\t\t¿Continuar?\n");
//Ej 005_3_2
	getchar();	fflush (stdin);

	printf ("\nventa de alcohol en boliches");
	printf("\ningrese su edad :");
	scanf("%i",&edad);
	while (edad<18)
	{
	printf ("\nCometió un error al ingresar la edad o es menor y debe retirarse");
	printf("\ningrese su edad :");
	scanf("%i",&edad);
	}
	printf ("\n Bienvenido, que desea tomar");

//#############################################################################################################
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 005_3_2 \n\t\t¿Continuar?\n");
//Ej 005_3_3
	getchar();	fflush (stdin);
	printf ("\nventa de alcohol en boliches");
	printf("\ningrese su edad :");
	scanf("%i",&edad);
	while (edad<18)
	{
	printf ("\nCometió un error al ingresar la edad o es menor y debe retirarse");
	printf("\ningrese su edad :");
	scanf("%i",&edad);
	}
	printf ("\n Bienvenido, que desea tomar");
//#############################################################################################################
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 005_3_3 \n\t\t¿Continuar?\n");
	getchar();	fflush (stdin);
//Ej 005_3_4
	do
	{
	printf ("\nIngresar la edad > a 18 o es menor y debe retirarse");
	printf("\ningrese su edad :");
	scanf("%i",&edad);
	} while (edad<18);
	printf ("\n Bienvenido, que desea tomar");
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");////////////probar poner una letra
	printf( "\n\n\tFin del ejercicio 005_3_4 \n\t\t¿Continuar?\n");

	getchar();	fflush (stdin);
	 do {
			printf("\n Inserte una nota en sistema numerico \n\t0-10: ");
			scanf("%i",&nota);
		} while((nota < 0 )||( nota > 10));
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
			default: printf("\nesa nota es incorrecta\n");
		}
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 005_3_4 \n\t\t¿Continuar?\n");
	getchar();	fflush (stdin);
	 do {
			printf("\n Inserte una nota en sistema alfanumerico \n\tSobresaliente\n\tExelente\n\tMuybien\n\tBien\n\tRegular\n\tAplazado: ");
			nota_alfa = toupper(getchar());
		} while(nota_alfa!='A' && nota_alfa!='R' && nota_alfa!='B' && nota_alfa!='M'&& nota_alfa!='E' && nota_alfa!='S');
	switch(nota_alfa)
		{
			case 'A': printf("\nAplazado");break;
			case 'R': printf("\nRegulara");break;
			case 'B': printf("\nBien");break;
			case 'M': printf("\nMuy Bien");break;
			case 'E': printf("\Excelente");break;
			case 'S': printf("\nSobresaliente");break;
			default: printf("\nesa nota es incorrecta\n");
		}
return 0;
}

