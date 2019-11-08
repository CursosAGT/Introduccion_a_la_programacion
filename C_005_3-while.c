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

// Ej 001_4

	/*Otras
Funciones útiles para operar cadenas de caracteres.

No sólo string.h contiene funciones útiles para el tratamiento de cadenas. En ctype.h se encuentran unas funciones que permiten hacer cómodamente preguntas acerca de los caracteres, como si son mayúsculas, minúsculas, dígitos, etc:

isalnum(caracter): devuelve cierto (un entero cualquiera distinto de cero) si caracter es una letra o dígito, y falso (el valor entero 0) en caso contrario.

isalpha(caracter): devuelve cierto si caracter es una letra, y falso en caso contrario.

isblank(caracter): devuelve cierto si caracter es un espacio en blanco o un tabulador.

isdigit(caracter) devuelve cierto si caracter es un digito, y falso en caso contrario.

isspace(caracter): devuelve cierto si caracter es un espacio en blanco, un salto de línea, un retorno de carro, un tabulador, etc., y falso en caso contrario.

islower(caracter): devuelve cierto si caracter es una letra minúscula, y falso en caso contrario.

isupper(caracter): devuelve cierto si caracter es una letra mayúscula, y falso en caso contrario.

toupper(caracter): devuelve la mayúscula asociada a caracter, si la tiene; si no, devuelve el mismo caracter.
tolower(caracter): devuelve la minúscula asociada a caracter, si la tiene; si no, devuelve el mismo caracter.
*/

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

}

