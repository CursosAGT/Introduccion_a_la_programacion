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
	printf("############################################################################\n");    
	printf("##                                                                        ##\n");    
	printf("##           CODIGO  SIGNIFICADO  ASCII(decimal) ASCII(hexadecimal)       ##\n");
	printf("##       '\\n' 	nueva línea          10                 0x0A              ##\n");
	printf("##       '\\r' 	retorno de carro     13                 0x0D              ##\n");
	printf("##       '\\f' 	nueva página          2                  x0C              ##\n");
	printf("##       '\\t' 	tabulador horizontal  9                 0x09              ##\n");
	printf("##       '\\b' 	retroceso (backspace) 8                 0x08              ##\n");
	printf("##       '\\'' 	comilla simple       39                 0x27              ##\n");
	printf("##       '\"' 	comillas              4                 0x22              ##\n");
	printf("##       '\\ '  barra                92                 0x5C               ##\n");
	printf("##       '\\? ' interrogación        63                 0x3F               ##\n");
	printf("##       '\\nnn' cualquier caracter (nnn es  ASCII expresado en octal)     ##\n");
	printf("##       '\\xnn' cualquier caracter (nn es  ASCII expresado en hexadecimal)##\n");
	printf("##                                                                        ##\n");
	printf("############################################################################\n");
// Ej 001_1
	printf ("Inicio ej001_1\n");
	printf ("linea 1\n");
	printf( "\n\t\t--------\n");
	printf ("linea 2\n");
	printf( "\n\t\t--------\n");
	printf ("linea 3\n");
	printf( "\n\t\t--------\n");
	printf ("linea 1\n");
	printf( "\n\t\t--------\n");
	printf ("\nlinea 2\n");
	printf( "\n\t\t--------\n");
	printf ("\nlinea 3\n");
	printf( "\n\t\t--------\n");
	printf ("\tlinea 1\n");
	printf( "\n\t\t--------\n");
	printf ("\n\tlinea 2\n");
	printf( "\n\t\t--------\n");
	printf ("\n\t\t\tlinea 3\n");
	printf( "\n\t\t--------\n");
	printf ("\n");
	printf( "\n\t\t--------\n");
	printf ("\n\tc:\nicolas\n");
	printf ("\n\tc:\\nicolas\n");
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio ej001_1 \n\t\t¿Continuar?\n");
	getchar();
	system("clear");
// Ej 001_2
	printf ("\nInicio ej001_2\n");
	char cadena [] = "es hora de trabajar grupo 2019";
	printf ("\nLa Cadena original es : %s", cadena);
	int largo_cadena =  sizeof cadena ;
	printf( "\nTamaño de la cadena: %i bytes\n\n\n", largo_cadena );	
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio ej001_2 \n\t\t¿Continuar?\n");	
	getchar();
	system("clear");
// Ej 001_3
	char cadena_2 [] = "Lenguaje C" ;          /* 10 caracteres */
	printf( "\n\t|%25s|" , cadena_2 );         /* imprime 25 caracteres: |     Lenguaje C|  */
	printf( "\n\t|%25.8s|" , cadena_2 );       /* imprime 25 caracteres: |       Lenguaje|  */
	printf( "\n\t|%-25s|" , cadena_2 );        /* imprime 25 caracteres: |Lenguaje C     |  */
	printf( "\n\t|%-25.8s|" , cadena_2 );      /* imprime 25 caracteres: |Lenguaje       |  */
	printf( "\n\t|%.6s|" , cadena_2 );         /* imprime 25 caracteres: |Lengua|           */
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio ej001_3 \n\t\t¿Continuar?\n");	
	getchar();
	system("clear");
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
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf ( "\n\n\tFin del ejercicio ej001_3 \n\t\t¿Continuar?\n");	
	getchar();
	system("clear");

// Ej 001_5
    char cadena1 [] ="Curso 2019"; 
    char cadena2 [sizeof(cadena1)];
    char cadena3[] = "lenguaje C...ok!";
    char cadena4[50];
    int resComparacion;
    printf ("Cadena1 es %s y Cadena2 es %s \n", cadena1, cadena2);
    strcpy (cadena2, cadena1); //Copia cadena1 en cadena2
    printf ("Cadena1 es %s y Cadena2 es %s \n", cadena1, cadena2);
    largo_cadena = strlen(cadena1);
    printf ("Cadena1 tiene longitud %i (uno mas contando \\0) \n", largo_cadena);
    strcpy (cadena4, cadena1) ;
    printf ("Concatenacion %s \n", strcat(cadena4, cadena3));
    
    printf ("\n===================================\n");
    
    resComparacion = strcmp (cadena4, cadena2);
    printf ("Cadena1 vale %s y Cadena2 vale %s \n", cadena1, cadena2);
    printf ("Cadena3 vale %s y Cadena4 vale %s \n", cadena3, cadena4);
    if (resComparacion ==0) 
    {
        puts ("Las cadenas 1 y 2 son iguales");
    }
    resComparacion = strcmp (cadena1, cadena3);
    if (resComparacion >0) 
    {
        puts ("La cadena 1 precede alfabeticamente a la cadena 3");
    }

	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio ej001_5 \n\t\t¿Continuar?\n");	
	getchar();
	system("clear");
// Ej 001_6
	char color[] = "rojo";
	char grosor[] = "grueso";
	char descripcion[1024];
	strcpy(descripcion, "Lapiz color ");
	strncat(descripcion, color, 1024);
	strncat(descripcion, " de trazo ", 1024);
	strncat(descripcion, grosor, 1024);
	printf ("\nLa Cadena final es : %s", descripcion);
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio ej001_6 \n\t\t¿Continuar?\n");	
	getchar();
	system("clear");
	return (0);
}
