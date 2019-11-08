// Copyright 2019 Ariel H Garcia Traba <cursos.agt@gmail.com>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define primer_valor 21
#define segundo_valor 32
#define SUMAMOS(x,y) x+y
int main()
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
    printf( "\n\tContinuamos..\n");
    getchar();
// Ej 003_A_01
	printf("Inicio ej000_V_1\n");
	printf("############################################################################\n");
	printf("##                                                                        ##\n");
	printf("##      Variables,                                                        ##\n");
	printf("##                 tipos                                                  ##\n");
	printf("##                 Declaracion y activacion                               ##\n");
	printf("##                                                                        ##\n");
	printf("############################################################################\n");
	printf("\n\tTIPO DE DATOS	SE ESCRIBE	MEMORIA REQUERIDA*	RANGO ORIENTATIVO*			EQUIVALENCIA EN PSEUDOCÓDIGO	OBSERVACIONES");
	printf("\n\tEntero			int			2 bytes				- 32768 a 32767	Entero		Entero			Uso en contadores, control de bucles etc.");
	printf("\n\tEntero largo	long		4 bytes				- 2147483648 a 2147483647	Entero			Igual que int pero admite un rango más amplio");
	printf("\n\tDecimal simple	float		4 bytes				- 3,4·1038 a 3,4·1038		Real			Hasta 6 decimales. También admite enteros");
	printf("\n\tDecimal doble	double		8 bytes				- 1,79·10308 a 1,79·10308	Real			Hasta 14 decimales. También admite enteros");
	printf("\n\tCarácter		char		1 bytes				0 a 255						Alfanumérica	Carácter, independiente o parte de una cadena");

	printf ("\nUna variable es un espacio en la memoria, en el cual el programador asigna un valor determinado por el tipo de dato que el lenguaje de programación va soportar, para declararla es necesario saber que tipo de dato la contiene.");
	printf( "\n\tContinuamos..\n");
	getchar();
    int numero_ent;
    float numero_dec;
    char letra;
	printf ("\nIniciación de una variable: \n\tLas variables globales son iniciadas por omisión por el compilador: las variables numéricas con 0 y los caracteres con ‘/0’. También pueden ser iniciadas explícitamente, como hemos hecho en el ejemplo anterior con la variable c. En cambio, las variables locales no son inicializadas por el compilador, por lo tanto, depende de nosotros iniciarlas o no.");
/*
    numero_ent = 1;
    numero_dec = 1.1;
    letra = 'c';
*/
	printf ("\nUn dato de tipo entero (int en lenguaje C ) es aquel que puede tomar por valor un número perteneciente al conjunto de los números enteros (Z), el cual está formado por los números naturales, su opuestos (números negativos) y el cero.");
	printf ("\nEn C y otros lenguajes de programación similares, un long double se refiere a un tipo de dato de punto (o coma) flotante que suele ser más preciso que un double.");
	printf ("\nEl tipo de datos char sirve para representar o contener un solo carácter. Un byte y un char son la misma cosa, excepto porque char se utiliza como carácter, o como parte de una cadena de caracteres, y no se puede utilizar en una expresión aritmética, mientras que un byte solamente puede ser usado como un tipo numérico.");

	printf ("\nValor Nº: %i",numero_ent);		//<---error
	printf ("\nValor Nº: %f",numero_dec);		//<---error
	printf ("\n\tValor Caracter: %c",letra);	//<---error

    printf( "\n\tContinuamos..\n");
    getchar();
	printf("\n############################################################################\n");
// Ej 003_V
    numero_ent = 1;
    numero_dec = 1.1;
    float numero_rec ;

	numero_rec = numero_ent +numero_dec;
	printf("\n resultado: %f",numero_rec);
    printf( "\n\tContinuamos..\n");
    getchar();
	printf("\n############################################################################\n");
// Ej 004_V

	int numero1=1;
	int numero2=2.1;
	float numero3=12.23;
	char letra_sola='A';
	char palabra[5]="HOLA";

	printf("\n El valor de numero1 es: %d", numero1);
	printf("\n El valor de numero2 es: %d", numero2);
	printf("\n El valor de numero3 es: %f", numero3);
	printf("\n El valor de letra es: %c", letra_sola);
	printf("\n El valor de numero1 es: %s", &palabra);	//<---error
    printf( "\n\tContinuamos..\n");
    getchar();
	printf("\n############################################################################\n");
// Ej 005_V
	printf( "\n\tContinuamos..\n");
	getchar();
	system("clear");

	int var_entera_1 = 5;
	int var_entera_2 = 3;
	int var_entera_3 = 4;
	printf ("\nvariable Nº 3: %d",var_entera_3);
	printf ("\nvariable Nº 1: %d",var_entera_1);
	printf ("\nvariable Nº 2: %d",var_entera_2);
	var_entera_1 = var_entera_1*var_entera_3-var_entera_2;
	printf ("\nOperacion Nº 1: %d", var_entera_1);
	var_entera_1 = -(var_entera_1*var_entera_3+1)/var_entera_2;
	printf ("\nOperacion Nº 2: %d",var_entera_1);
// Ej 006_V
	printf( "\n\tContinuamos..\n");
	getchar();
	system("clear");

	const int cont_entera_1 = 15;
	const int cont_entera_2 = 32;
	const int cont_entera_3 = 44;
	int aux_entera_1 ;
	int aux_entera_2 ;
	printf ("\nvariable aux Nº 1: %d",aux_entera_1);
	printf ("\nvariable aux Nº 2: %d",aux_entera_2);
	aux_entera_1 = (cont_entera_1*cont_entera_3-cont_entera_2);
	aux_entera_2 = (cont_entera_1*cont_entera_3+1)/cont_entera_2;

	printf ("\nOperacion Nº 1: %d",aux_entera_1);
	printf ("\nOperacion Nº 2: %d",aux_entera_2);

// Ej 007_V
	printf( "\n\tContinuamos..\n");
	getchar();
	system("clear");
    printf ("\nSi el primer valor es %i mientras el segundo_valor es %i", primer_valor,segundo_valor);
	printf ("\nSumamos el primer_valor y segundo_valor dano %d", SUMAMOS(primer_valor,segundo_valor));
	printf("\n\n\tPero....\n\t\tPero.....\n1) de donde sacamos primer_valor y segundo_valor????? ");
	printf("\n\n\t 2)  La operacion de suma ¿donde se hace?");


/*
 * ver con windows
*/
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 002_6 \n\t\t¿Continuar con strlen?\n");
	getchar();
	printf("Esta función devuelve el número de caracteres que tiene la cadena (sin contar el \0) ");
	char texto[]="Gandalf";
	char *p;
	int longitud=0;

	p = texto;
	while (*p != '\0') {
		longitud++;
		printf( "%c\n", *p );	/* Mostramos la letra actual */
		p++;			/* Vamos a la siguiente letra */
	}
	printf( "La cadena \"%s\" tiene %i caracteres.\n", texto, longitud );
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 002_6 \n\t\t¿Continuar con strcpy?\n");
	getchar();
	printf("Copia el contenido de cadena2 en cadena1. cadena2 puede ser una variable o una cadena directa ");
	printf("Debemos tener cuidado de que la cadena destino (cadena1) tenga espacio suficiente para albergar a la cadena origen (cadena2).");
	char texto3[] = "Éste es un curso de C.";
	char destino3[50];

	strcpy( destino3, texto3 );
	printf( "Valor final: %s\n", destino3 );

	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 002_6 \n\t\t¿Continuar con strcat?\n");
	getchar();
	printf("Añade la cadena2 al final de la cadena1 (concatena).");;
	char nombre_completo2[50];
	char nombre2[]="Gandalf";
	char apellido2[]="el Gris";

	strcpy( nombre_completo2, nombre2 );
	strcat( nombre_completo2, " " );
	strcat( nombre_completo2, apellido2 );
	printf( "El nombre completo es: %s.\n", nombre_completo2 );
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 002_6 \n\t\t¿Continuar con sprintf?\n");
	getchar();
	printf("Funciona de manera similar a printf pero, en vez de mostrar el texto en la pantalla, lo guarda en una variable (destino). El valor que devuelve (int) es el número de caracteres guardados en la variable destino.");
	char nombre_completo3[50];
	char nombre3[]="Gandalf";
	char apellido3[]="el Gris";

	sprintf( nombre_completo3, "%s %s", nombre3, apellido3 );
	printf( "El nombre completo es: %s.\n", nombre_completo3 );

	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 002_6 \n\t\t¿Continuar strcmp?\n");
	getchar();
	printf("Compara cadena1 y cadena2. Si son iguales, devuelve 0. Un número negativo si cadena1 +va+ antes que cadena2, y un número positivo si es al contrario:");
	printf("        < 0    si    cadena1 < cadena2");
	printf("        ==0    si    cadena1 == cadena2");
	printf("        > 0    si    cadena1 > cadena2 ");

	char nombre4[]="Gandalf";
	char nombre5[]="Frodo";

	printf( "Comparación con strcmp: %i\n", strcmp(nombre4,nombre5));


    return 0;

}
