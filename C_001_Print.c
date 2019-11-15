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
	printf("############################################################################\n");
	printf("##                                                                        ##\n");
	printf("##           CODIGO  SIGNIFICADO  ASCII(decimal) ASCII(hexadecimal)       ##\n");
	printf("##       '\\n' 	nueva linea          10                 0x0A              ##\n");
	printf("##       '\\r' 	retorno de carro     13                 0x0D              ##\n");
	printf("##       '\\f' 	nueva pagina          2                  x0C              ##\n");
	printf("##       '\\t' 	tabulador horizontal  9                 0x09              ##\n");
	printf("##       '\\b' 	retroceso (backspace) 8                 0x08              ##\n");
	printf("##       '\\'' 	comilla simple       39                 0x27              ##\n");
	printf("##       '\"' 	comillas              4                 0x22              ##\n");
	printf("##       '\\ '  barra                92                 0x5C               ##\n");
	printf("##       '\\? ' interrogacion        63                 0x3F               ##\n");
	printf("##       '\\nnn' cualquier caracter (nnn es  ASCII expresado en octal)     ##\n");
	printf("##       '\\xnn' cualquier caracter (nn es ASCII expresado en hexadecimal) ##\n");
	printf("##                                                                        ##\n");
	printf("############################################################################\n");
	printf("##  Caracter                       Significado                            ##\n");
	printf("##     c   Escribe un caracter simple                                     ##\n");
	printf("##     d   Escribe un entero decimal con signo                            ##\n");
	printf("##     i   Escribe un entero decimal, octal o hexadecimal con signo       ##\n");
	printf("##     e   Escribe un numero en punto flotante con exponente              ##\n");
	printf("##     f   Escribe un numero en punto flotante sin exponente              ##\n");
	printf("##     o   Escribe un entero octal, sin el cero inicial                   ##\n");
	printf("##     s   Escribe una cadena de caracteres                               ##\n");
	printf("##     u   Escribe un entero decimal sin signo                            ##\n");
	printf("##     p   Direccion de un puntero u dato.                                ##\n");
	printf("##     lld Especifica un entero largo (long long). [no estandar]          ##\n");
	printf("##     llu Entero largo sin signo (unsigned long long) [no estandar]      ##\n");
	printf("##     x   Escribe un entero hexadecimal sin el prefijo 0x.               ##\n");
	printf("############################################################################\n");
	getchar();
	system("clear");

	putchar('H');
	putchar('o');
	putchar('l');
	putchar('a');

	putchar(32);

	putchar('m');
	putchar('u');
	putchar('n');
	putchar('d');
	putchar('o');

	putchar('\n');
	puts("Bienvenido a la programacion");
	puts(" en lenguaje C");

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

    char letra = 'A';
    char cadena_[20] = "seguimos con variables";
    int numero_int = 22;
    long numero_long = 333;
    long long numero_longlong = 444444;
    float numero_float = 12.123;
    double numero_double = 12.123456;

    printf("La letra es %c \n", letra);
    printf("La cadena es %s \n", cadena_);
    printf("El numero int es %d\n", numero_int);
    printf("El numero long es %ld\n", numero_long);
    printf("El numero long long es %lld\n", numero_longlong);
    printf("El numero float es %0.3f \n", numero_float); //0.3 = 3 decimales
    printf("El numero double es %0.6lf \n", numero_double); //0.6 = 6 decimales


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
	printf( "%%07i            justificado a la derecha, 7 digitos de largo, sin relleno\n");
	printf( "%%.7i            largo minimo de 7 digitos, justificado a la derecha, rellena con ceros\n");
	printf( "%%8.2f           tamaño total de 8 digitos, con dos decimales\n");
	printf( "%%.*f”',x,d)     tamaño predeterminado,x numeros decimales\n");
	printf( "%%*.*f”,x,y,d)   tamaño igual a x, y numeros decimales\n");
	printf( "%%s              cadena terminada en null\n");
	printf( "%%5s             primeros cinco caracteres o delimitador\n");
	printf( "%%.5s            primeros cinco caracteres, sin tener en cuenta el delimitador\n");
	printf( "%%20.5s          primeros cinco caracteres, justificados a la derecha, con 20 caracteres de largo\n");
	printf( "%%-20.5s         primeros cinco caracteres, justificados a la izquierda, con 20 caracteres de largo\n");

	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio ej001_3 \n\t\t¿Continuar?\n");
	getchar();
	system("clear");

// Ej 001_4
    int numEntero=56;
    long numLong =44322155;
    float numFloat=2.36;
    double numDouble=2.545466;
    char miChar='c';
    char miCadena []= "Esto es un Array";
    printf ("\nnumEntero vale %d\n", numEntero);
    printf ("\nnumLong vale %ld\n", numLong);
    printf ("\nnumFloat vale %f\n", numFloat);
    printf ("\nnumDouble vale %lf\n", numDouble);
    printf ("\nChar caracter %c\n", miChar);
    printf ("\nArray  %s\n", miCadena);

	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf ( "\n\n\tFin del ejercicio ej001_4 \n\t\t¿Continuar?\n");
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
// Ej 001_7

	int VALOR_1, VALOR_2;
	float suma, resta, multi, divi;
	VALOR_1=21;
	VALOR_2=3;
	suma=VALOR_1+VALOR_2;
	resta=VALOR_1-VALOR_2;
	multi=VALOR_1*VALOR_2;
	divi=VALOR_1/VALOR_2;

	printf("\nEl valor de la suma es %f", suma);
	printf("\nEl valor de la resta es %f", resta);
	printf("\nEl valor de la multicacion es %f", multi);
	printf("\nEl valor de la division es %f", divi);



	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio ej001_7 \n\t\t¿Continuar?\n");
	getchar();
/*
 * Las marcas en la cadena de formato deben tener la siguiente estructura (los campos entre corchetes son optativos):

%type
* CON OPCIONES

%[parameter][flags][width][.precision][length]type

Toda marca, por tanto, comienza por el símbolo “%” y termina con su tipo. Cada uno de los nombres (parameter, flags, width, precision, length y type) representa un conjunto de valores posibles que se explican a continuación.
 *
Parameter			Descripción
n$						Se reemplaza “n” por un número para cambiar el orden en el que se procesan los argumentos. Por ejemplo %3$d se refiere al tercer argumento independientemente del lugar que ocupa en la cadena de formato.

Flags				Descripción
número 					Rellena con espacios (o con ceros, ver siguiente flag) a la izquierda hasta el valor del número.
0						Se rellena con ceros a la izquierda hasta el valor dado por el flag anterior. Por ejemplo “%03d” imprime un número justificado con ceros hasta tres dígitos.
+						Imprimir el signo de un número
-						Justifica el campo a la izquierda (por defecto ya hemos dicho que se justifica a la derecha)
#						Formato alternativo. Para reales se dejan ceros al final y se imprime siempre la coma. Para números que no están en base 10, se añade un prefijo denotando la base.

Width				Descripción
número 					Tamaño del ancho del campo donde se imprimirá el valor.
*						Igual que el caso anterior, pero el número a utilizar se pasa como parámetro justo antes del valor.
						Por ejemplo printf("%*d", 5, 10) imprime el número 10, pero con un ancho de cinco dígitos (es decir, rellenará con 3 espacios en blanco a la izquierda).

Precision			Descripción
número 					Tamaño de la parte decimal para números reales. Número de caracteres a imprimir para cadenas de texto
*						Igual que el caso anterior, pero el número a utilizar se pasa como parámetro justo antes del valor. Por ejemplo printf("%.*s", 3, "abcdef") imprime “abc”.

Length				Descripción
hh						Convertir variable de tipo char a entero e imprimir
h						Convertir variable de tipo short a entero e imprimir
l						Para enteros, se espera una variable de tipo long.
ll						Para enteros, se espera una variable de tipo long long.
L						Para reales, se espera una variable de tipo long double.
z						Para enteros, se espera un argumento de tipo size_t.

Type				Descripción
%c						Imprime el carácter ASCII correspondiente
%d, %i					Conversión decimal con signo de un entero
%x, %X					Conversión hexadecimal sin signo
%p						Dirección de memoria (puntero)
%e, %E					Conversión a coma flotante con signo en notación científica
%f, %F					Conversión a coma flotante con signo, usando punto decimal
%g, %G					Conversión a coma flotante, usando la notación que requiera menor espacio
%o						Conversión octal sin signo de un entero
%u						Conversión decimal sin signo de un entero
%s						Cadena de caracteres (terminada en '\0')
%%						Imprime el símbolo %
* */
	system("clear");
	return (0);
}
