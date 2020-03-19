// Copyright 2020 Ariel H Garcia Traba <cursos.agt@gmail.com>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
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
	printf("##                                                                        ##\n");
	printf("##                                                                        ##\n");
	printf("##               Entradas (teclado) y Salidas (Pantalla)                  ##\n");
	printf("##              ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                 ##\n");
	printf("##                                                                        ##\n");
	printf("##    char              Caracter                 (1 byte)                 ##\n");
	printf("##    short             Entero corto con signo   (2 bytes)                ##\n");
	printf("##    int               Entero con signo         (2 bytes) 32768 a 32767  ##\n");
	printf("##    long int          Entero largo con signo   (4 bytes)                ##\n");
	printf("##    unsigned int      Entero sin signo         (4 bytes)                ##\n");
	printf("##    unsigned long int Entero largo sin signo   (4 bytes)                ##\n");
	printf("##    float             Flotante simple          (4 bytes)                ##\n");
	printf("##    double            Flotante doble           (8 bytes)                ##\n");
	printf("##    long Double       Largo doble             (12 bytes)                ##\n");
	printf("##                                                                        ##\n");
	printf("##                                                                        ##\n");
	printf("##                                        print /scanf                    ##\n");
	printf("##    caracter                      char          c                       ##\n");
	printf("##    cadena de caracteres          string        s                       ##\n");
	printf("##    entero                        int           i/d                     ##\n");
	printf("##    numero c/punto flotante       float         f                       ##\n");
	printf("##    numero extendido              double        f                       ##\n");
	printf("##                                                                        ##\n");
	printf("############################################################################\n");
	printf("##                                                                        ##\n");
	printf("##                                                                        ##\n");
	printf("##    C ofrece un conjunto de funciones para realizar operaciones de      ##\n");
	printf("##    entrada y salida (E/S) con las cuales puedes leer y escribir        ##\n");
	printf("##    cualquier tipo de dispositivo concreto con el que puedes            ##\n");
	printf("##    intercambiar informacion. C trata a cualquier tipo de fichero       ##\n");
	printf("##    como una serie o conjunto de bytes denominado flujo o stream.       ##\n");
	printf("##                                                                        ##\n");
	printf("##     En C cuentas con 3 flujos de ficheros que ya están abiertos,       ##\n");
	printf("##     Todas las operaciones que vamos a ver necesitan la librería        ##\n");
	printf("##            stdio.h para funcionar.                                     ##\n");
	printf("##                                                                        ##\n");
	printf("##                                                                        ##\n");
	printf("##    stdin: La entrada estándar de lectura.                              ##\n");
	printf("##            Generalmente va asociado al teclado.                        ##\n");
	printf("##                                                                        ##\n");
	printf("##    stdout: La salida estándar de escritura.                            ##\n");
	printf("##            Generalmente va asociado a la pantalla del terminal.        ##\n");
	printf("##                                                                        ##\n");
	printf("##    stderr: La salida estándar de escritura para mensajes de error.     ##\n");
	printf("##            Generalmente también va asociado a la pantalla del terminal.##\n");
	printf("##                                                                        ##\n");
	printf("##                                                                        ##\n");
	printf("############################################################################\n");
	printf("##  Para buscar mas info                                                  ##\n");
	printf("##      https://elrincondelc.com/foros/viewtopic.php?t=18819              ##\n");
	printf("##      https://www.monografias.com/trabajos4/lenguajec/lenguajec.shtml	  ##\n");
	printf("##      http://www.pablin.com.ar/computer/cursos/c2/manc7.htm             ##\n");
	printf("##                                                                        ##\n");
	printf("############################################################################\n");
	printf("##                                                                        ##\n");
	printf("##          strlen                                                        ##\n");
	printf("##          strcpy                                                        ##\n");
	printf("##          strcat                                                        ##\n");
	printf("##          sprintf                                                       ##\n");
	printf("##          strcmp                                                        ##\n");
	printf("##                                                                        ##\n");
	printf("############################################################################\n");
	/*
	 * Acepta un string de formato y cualquier numero de argumentos. Estos argumentos se aplican a cada uno de los especificadores de formato contenidos en format. Un especificador de formato toma la forma %[flags][width][.prec][h|l] type. El tipo puede ser:

	d, i	        entero decimal con signo
	o		entero octal sin signo
	u		entero decimal sin signo
	x		entero hexadecimal sin signo (en minusculas)
	X		entero hexadecimal sin signo (en mayusculas)
	f		coma flotante en la forma [-]dddd.dddd
	e		coma flotante en la forma [-]d.dddd e[+/-]ddd
	g		coma flotante segun el valor
	E		como e pero en mayusculas
	G		como g pero en mayusculas
	c		un caracter
	s		cadena de caracteres terminada en '\0'
	%		imprime el caracter %
	p		puntero

	Los flags pueden ser los caracteres:
	+		siempre se imprime el signo, tanto + como -
	-		justifica a la izquierda el resultado, an-iadiendo espacios al final
	blank	si es positivo, imprime un espacio en lugar de un signo +
	#		especifica la forma alternativa

	En el campo width se especifica la anchura minima de la forma:
	n		se imprimen al menos n caracteres.
	0n		se imprimen al menos n caracteres y si la salida es menor, se anteponen ceros
	*		la lista de parametros proporciona el valor

	Hay dos modificadores de taman-io, para los tipos enteros:
	l		imprime un entero long
	h		imprime un entero short
	*/
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\tContinuamos..\n");
// Ej 002_01

	getchar();	fflush (stdin);
	int caracter1;
	char caracter2;

	printf("getc(stdin)\ngetchar()\n\tPor favor, teclea dos caracteres seguidos luego enter:\n");
/*	fgetc
Esta funcion lee un caracter a la vez del archivo que esta siendo sen-ialado con el puntero *archivo. En caso de que la lectura sea exitosa devuelve el caracter leído y en caso de que no lo sea o de encontrar el final del archivo devuelve EOF 	char fgetc(FILE *archivo);.*/
	caracter1 = getc(stdin);
	caracter2 = getchar();
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

	printf("\n con printf el primer caracter es: %c",caracter1);
	printf("\n con putc _");
	putc(caracter1,stdout);

	printf("\n con printf el segundo caracter es: %c",caracter2);
	printf("\n con putchar :");
	putchar(caracter2);
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 002_1 \n\t\t-Continuar?\n");
// Ej 002_2
	getchar(); fflush (stdin);
	int tamano_cadena = 10;
	char cadena[tamano_cadena];

	printf("\nPor favor, escribe una línea de SI supere los %i caracteres previstos:\n", tamano_cadena);
	gets(cadena);
	printf("Ve que no corto la linea y supera el espacio en memoria reservado:\n");
	puts(cadena);

	printf( "\n\tContinuamos..\n");
	getchar();	fflush (stdin);

	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 002_2 \n\t\t-Continuar?\n");
// Ej 002_3
	int    dato_int;
	float  dato_float;
	double dato_double;
	char   dato_char;
	char   cadena_char[20];
	float  temporaria = 0;
	printf("\nIntroduce un numero int : ");
	scanf("%i", &dato_int);
	printf("\nOK numero int : %i\n", dato_int);//c

	printf("\nIntroduce un numero float : ");
	scanf("%f", &dato_float);
	printf("\nOK numero float %f\n", dato_float);//c

	printf("\nIntroduce un numero double : ");
	scanf("%lf%*c", &dato_double);//%*c toma en enter
	printf("\nOK numero double : %lf\n", dato_double);//c

	printf("\nIngrese un caracter : ");
	fflush (stdin);
	scanf("%c%*c", &dato_char);//    scanf("%*[^\n]"); // Lee cualquier caracter mientras no sea nueva linea
	printf("\nOK un caracter : %c\n", dato_char);//c

	printf("\nIntroduce una cadena de caracteres - String: ");
	scanf("%s%*c", cadena_char);
	printf("\nOK cadena de caracteres - String: %s\n", cadena_char);//c


	printf("\n\nLos datos que ud. ingreso fueron :\n");
	printf("dato_int = %d\tdato_float = %f\tdato_double = %lf\tdato_char = %c\tcadena_char = %s\n", dato_int, dato_float, dato_double,dato_char, cadena_char);

	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 002_3 \n\t\t-Continuar?\n");
// Ej 002_4
	getchar();	fflush (stdin);
	getchar();	fflush (stdin);
	char nombre[20] ; // Reservamos espacio para cadena de 19 caracteres + el caracter nulo /
	int longitud_string = 0;
	printf ("\nPor favor ingrese su nombre :");
	scanf("%s", nombre);
	longitud_string = strlen(nombre); //strlen cuenta caracteres
	printf( "\t...Che %s...tu nombre tiene %i caracteres. \n", nombre, longitud_string );

	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 002_4 \n\t\t-Continuar?\n");
// Ej 002_5
	getchar();	fflush (stdin);
	getchar();	fflush (stdin);
//                              operadores matematicos simples
	float  dato_1_int, dato_2_int;
	printf("\nIntroduce el primer numero float : ");
	scanf("%f", &dato_1_int);
	printf("\nIntroduce el segundo numero (menor) float : ");
	scanf("%f", &dato_2_int);
	temporaria = dato_1_int +dato_2_int;
	printf("\nOK suma : %f", temporaria);//n
	temporaria = dato_1_int -dato_2_int;
	printf("\nOK resta : %f", temporaria);//n
	temporaria = dato_1_int *dato_2_int;
	printf("\nOK multiplicacion : %f", temporaria);//n
	temporaria = dato_1_int / dato_2_int; // OJO nunca dividiras por cero reveer la variable como float
	printf("\nOK divicion : %f", temporaria);//n
	temporaria = dato_1_int / dato_2_int; //
	printf("\nOK resto : %f", temporaria);//n

//	temporaria = pow (dato_int,2);
//	printf("\nSu cuadrado es %f", temporaria);//c
//	temporaria = sqrt (dato_int);
//	printf("\nSu raiz cuadrada es %f", temporaria);//c

	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 002_5 \n\t\t-Continuar?\n");
	getchar();	fflush (stdin);
	getchar();	fflush (stdin);
//Ej 002_6
	float nota_alumno_1 = 0, nota_alumno_2 = 0;

	printf ("\nIngreso la nota del 1er parcial :");
	scanf("%f",&nota_alumno_1);
	printf ("\nIngreso la nota del 2do parcial :");
	scanf("%f",&nota_alumno_2);

	printf ("\n1er parcial : %f",nota_alumno_1);
	printf ("\n2do parcial : %f",nota_alumno_2);
	temporaria=(nota_alumno_1+nota_alumno_2)/2;
	printf ("\npromedio : %f",(temporaria));
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 002_6 \n\t\t-Continuar?\n");

	getchar();	fflush (stdin);//igual que el anterior pero sin usar una variable
//Ej 002_6
	printf ("\nIngreso la nota del 1er parcial :");
	scanf("%f",&nota_alumno_1);
	printf ("\nIngreso la nota del 2do parcial :");
	scanf("%f",&nota_alumno_2);
	printf ("\n1er parcial : %f",nota_alumno_1);
	printf ("\n2do parcial : %f",nota_alumno_2);
	printf ("\npromedio : %f",((nota_alumno_1+nota_alumno_2)/2));


	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 002_7 \n\t\t-Continuar?\n");
	getchar();	fflush (stdin);
// Ej 002_8
	char variable_caracter;
	char variable_cadena[20];
	int variable_int;
	long variable_long;
	long long variable_longlong;
	float variable_float;
	double variable_double;

	printf("\nIngrese la variable_caracter - inicial de tu nombre :" ); //Para string _ cadena
	scanf(" %c", &variable_caracter); //Para string _ cadena

	printf("\nIngrese la variable_cadena - Apellido :" ); //Para string _ cadena
	scanf(" %s%*c", variable_cadena); //Para string _ cadena

	printf("\nIngrese la variable_int - edad :" ); //Para entero
	scanf(" %d", &variable_int); //Para entero

	printf("\nIngrese la variable_long - cantidad de dias de vida(perdon mi imaginacion es desastrosa):" ); //Para long
	scanf(" %ld", &variable_long); //Para long

	printf("\nIngrese la variable_longlong - cantidad de segundos de vida:"); //Para long long
	scanf(" %lld", &variable_longlong); //Para long long

	printf("\nIngrese la variable_float - pesa en kg:"); //Para float
	scanf(" %f", &variable_float); //Para float

	printf("Ingrese la variable_double : mide en metros" ); //Para double (long float)
	scanf(" %lf", &variable_double); //Para double (long float)

	printf("ud. ingreso variable_caracter %c\n", variable_caracter); //Para string _ cadena
	printf("ud. ingreso variable_cadena %s\n", variable_cadena); //Para string _ cadena
	printf("ud. ingreso variable_int %d\n", variable_int); //Para entero
	printf("ud. ingreso variable_long %ld\n", variable_long); //Para long
	printf("ud. ingreso variable_longlong %lld\n", variable_longlong); //Para long long
	printf("ud. ingreso variable_float %0.2f\n", variable_float); //Para float
	printf("ud. ingreso variable_double %0.5lf\n", variable_double); //Para double (long float)

	printf("\n Ahora inventamos algo\n\t El Sr.%c %s con una altura de %lf y un peso de %f pretende ganar la competencia, pero lleva %ld dias desde que nacio que equivalen a %lld segundos desde que dio su primer respiro que fue en el an-io %d.",variable_caracter,variable_cadena,variable_double,variable_float,variable_long,variable_longlong,variable_int);

	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 002_8 \n\t\t-Continuar?\n");
	getchar();	fflush (stdin);

	printf("\nEn resumen");
	printf("\n\t Hay varias formas de ingresar datos. ");
	printf("\n\t Para toman de a un caracter ");
	printf("\n\t var =getc(stdin) o var = getchar() ");
	printf("\n\t Para toman string o cadenas de  caracter ");
	printf("\n\t\t gets(cadena)									No tiene limites de reserva de memoria y el array no lleva &");
	printf("\n\t\t scanf('\\%");printf("s',cadena)							No acepta espacios y el array no lleva &");
	printf("\n\t\t fgets(cadena,numero_bytes,stdin);()			Si acepta espacios, el array no lleva & y el final de linea no es \0 sino \n");


	char mi_string_2[11] ;//  cantidad de caracteres reservados mas  "\0" fin de string
	printf ("\n---------------------------  Entrada scanf---------------------------------\n");
	printf ("\n\tIngresa tu nombre con scanf :");
	scanf ("%s",mi_string_2);	//  ojo con los espacios en el string
	printf ("\n---------------------------  Salida scanf----------------------------------\n");
	printf ("\n\tcon scanf -\tBuenas noches ' %s ', como va el curso",mi_string_2);
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf ( "\nContinuamos..\n");getchar();fflush (stdin);
	printf ("\n---------------------------  Entrada gets----------------------------------\n");
	printf ("\n\tIngresa tu nombre con get : ");
	gets (mi_string_2);			//  ojo con el taman-io del string
	printf ("\n---------------------------  Salida gets-----------------------------------\n");
	printf ("\n\tcon gets -\tBuenas noches ' %s ', como va el curso",mi_string_2);
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf ( "\nContinuamos..\n");getchar();fflush (stdin);
	printf ("\n---------------------------  Entrada fgets---------------------------------\n");
/*fgets
Esta funcion está disen-iada para leer cadenas de caracteres. Leerá hasta n-1 caracteres o hasta que lea un cambio de línea '\n' o un final de archivo EOF. En este último caso, el carácter de cambio de línea '\n' también es leído.
El prototipo correspondiente de fgets es:	char *fgets(char *buffer, int taman-io, FILE *archivo);
*/
	printf ("\n\tIngresa tu nombre con fget : ");
	fgets (mi_string_2,11,stdin);//  cantidad de caracteres mas  "\n" fin de string
	printf ("\n---------------------------  Salida fgets----------------------------------\n");
	printf ("Observar que bajo una linea------------!");
	printf ("\n\tcon fgets -\tBuenas noches ' %s ', como va el curso",mi_string_2);
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf ( "\nContinuamos..\n");getchar();fflush (stdin);
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 002_9 \n\t\t-Continuar?\n");
	getchar();	fflush (stdin);
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf ("         dejamos aqui y vamos a condicionales y bucles, luego volvemos");
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	getchar();fflush (stdin);
return 0;
}
