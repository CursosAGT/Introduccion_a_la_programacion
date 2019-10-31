// Copyright 2019 Ariel H Garcia Traba <cursos.agt@gmail.com>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
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
	printf("##                                                                        ##\n");
	printf("##                                                                        ##\n");
	printf("##               Entradas (teclado) y Salidas (Pantalla)                  ##\n");
	printf("##              ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                 ##\n");
	printf("##                                                                        ##\n");
	printf("##    char              Carácter                 (1 byte)                 ##\n");
	printf("##    char              Carácter                 (1 byte)                 ##\n");
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
	printf("##    número c/punto flotante       float         f                       ##\n");
	printf("##    numero extendido              double        f                       ##\n");
	printf("##                                                                        ##\n");
	printf("##      https://elrincondelc.com/foros/viewtopic.php?t=18819              ##\n");
	printf("##                                                                        ##\n");
	printf("##      https://www.monografias.com/trabajos4/lenguajec/lenguajec.shtml	  ##\n");
	printf("##                                                                        ##\n");
	printf("##      http://www.pablin.com.ar/computer/cursos/c2/manc7.htm             ##\n");
	printf("##                                                                        ##\n");
	printf("############################################################################\n");

	/*
	 * Acepta un string de formato y cualquier número de argumentos. Estos argumentos se aplican a cada uno de los especificadores de formato contenidos en format. Un especificador de formato toma la forma %[flags][width][.prec][h|l] type. El tipo puede ser:
	
	d, i	        entero decimal con signo
	o		entero octal sin signo
	u		entero decimal sin signo
	x		entero hexadecimal sin signo (en minúsculas)
	X		entero hexadecimal sin signo (en mayúsculas)
	f		coma flotante en la forma [-]dddd.dddd
	e		coma flotante en la forma [-]d.dddd e[+/-]ddd
	g		coma flotante según el valor
	E		como e pero en mayúsculas
	G		como g pero en mayúsculas
	c		un carácter
	s		cadena de caracteres terminada en '\0'
	%		imprime el carácter %
	p		puntero
	
	Los flags pueden ser los caracteres:
	+		siempre se imprime el signo, tanto + como -
	-		justifica a la izquierda el resultado, añadiendo espacios al final
	blank	si es positivo, imprime un espacio en lugar de un signo +
	#		especifica la forma alternativa
	
	En el campo width se especifica la anchura mínima de la forma:
	n		se imprimen al menos n caracteres.
	0n		se imprimen al menos n caracteres y si la salida es menor, se anteponen ceros
	*		la lista de parámetros proporciona el valor
	
	Hay dos modificadores de tamaño, para los tipos enteros:
	l		imprime un entero long
	h		imprime un entero short	
	*/	
	
	printf( "\n\tContinuar: (S/N)\n");
	getchar();
	system("pause");
	system("clear");
	printf("\n");


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
	scanf("%c%*c", &dato_char);//    scanf("%*[^\n]"); /* Lee cualquier carácter mientras no sea nueva línea */
	printf("\nOK un caracter : %c\n", dato_char);//c

	printf("\nIntroduce una cadena de caracteres - String: ");
	scanf("%s%*c", cadena_char);
	printf("\nOK cadena de caracteres - String: %s\n", cadena_char);//c


	printf("\n\nLos datos que ud. ingreso fueron :\n");
	printf("%d\t%f\t%lf\t%c\t%s\t\n\n", dato_int, dato_float, dato_double,dato_char, cadena_char);

	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 004_1 \n\t\t¿Continuar?\n");
// Ej 004_2
	getchar();
	char nombre[20] ; /* Reservamos espacio para cadena de 19 caracteres + el caracter nulo */
	int longitud_string = 0;
	printf ("\nPor favor ingrese su nombre :");
	scanf("%s", nombre);
	longitud_string = strlen(nombre); //strlen cuenta caracteres
	printf( "\t...Che %s...tu nombre tiene %i caracteres. \n", nombre, longitud_string );
//	system("clear");  	
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 004_2 \n\t\t¿Continuar?\n");
// Ej 004_3
	getchar();
//	system("clear");  	
//                              operadores matematicos simples
	float  dato_1_int, dato_2_int;
	printf("\nIntroduce el primer numero int : ");
	scanf("%f", &dato_1_int);
	printf("\nIntroduce el segundo numero (menor) int : ");
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
	printf( "\n\n\tFin del ejercicio 004_3 \n\t\t¿Continuar?\n");
	getchar();
//	system("clear");
//Ej 004_3
	float nota_alumno_1 = 0, nota_alumno_2 = 0;
	printf ("\nIngreso la nota del 1er parcial :");
	scanf("%f",&nota_alumno_1);
	printf ("\nIngreso la nota del 2do parcial :");
	scanf("%f",&nota_alumno_2);
	printf ("\n1er parcial : %f",nota_alumno_1);
	printf ("\n2do parcial : %f",nota_alumno_2);
	printf ("\npromedio : %f",((nota_alumno_1+nota_alumno_2)/2));
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 004_4 \n\t\t¿Continuar?\n");
	getchar();
// Ej 004_4
	float nota1 , nota2 =0 ;
	printf ("\nIngreso la nota del 1er parcial :");
	scanf ("%f",&nota1);
	printf ("\nIngreso la nota del 2d0 parcial :");
	scanf ("%f",&nota2);
	temporaria=0;
	if (nota1<5 && nota2<5)
		{printf ("\nfinal obligatorio");}
	else if (nota1<5 && nota2>=5)
		{printf ("\nRECUPERA 1er parcial");}
	else if (nota1>=5 && nota2<5)
		{printf ("\nRECUPERA 2do parcial");}
	else if (nota1>=7 && nota2>=7)
		{printf ("\nAprobado sin final");}
	temporaria = ((nota1+nota2)/2);
	printf ("Evaluaciones :\t %f \t|\t%f ",(nota1),(nota2));
	printf ("\npromedio : %f ", temporaria);
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 004_4 \n\t\t¿Continuar?\n");
	getchar();
/*	
	int num,i,suma=0,cantidad;
	clrscr();
	printf("Promedio.n Cuantos numero quieres calcular su promedio: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
	 printf("Numero: ");
	 scanf("%d",&cantidad);
	 suma=suma+cantidad;
	}
	suma=suma/num;
	printf("Su promedio es: %d",suma);
*/

/*
	clrscr();				//limpiar pantalla
	int _cant;				//cantidad de valores
	int _cont;				//contador int _valor;//para leer valores
	int _suma;				//suma de los valores
	float _prom;				//promedio de la suma entre la cantidad
	_cont=1;				//Inicializo
	_suma=0;				//variables
	printf("Numeros: ");
	scanf("%d",&_cant);			//Lectura de las variables
	while(_cont<=_cant)
	{					//Ciclo que cuenta la lectura
		scanf("%d",&_valor);			//lectura de valores
		_suma=_suma+_valor;			//suma de valores   
		_cont++;//incremente de lectura de valores
	 }						//END while
	_prom=_suma/_cant;//promedoi de valores
	printf("Promedio: %.2e",_prom);//impresion de valores getch();//esperar a que presiona una tecla el usuario

*/
/*
	float registro;
	int contador;
	float memoria;
	float suma = 0;
	float promedio;
	printf("Cuantas calificaciones deseas introducir: " );
	scanf("%f", &registro);
	for(contador = 1; contador <= registro; contador ++)
		{
		printf("Introduce la calificacion %d: ", contador);
		scanf("%f", &memoria);
		suma = suma + memoria;
		promedio = ((suma/registro));
		}
	printf("El promedio es igual a: %f", promedio);
	getchar();
*/

	
//	system("clear"); 
// Ej 004_5
	int edad = 0;
	printf ("Ingrese su edad : ");
	scanf("%i",&edad);
	if (edad<0)
	{
		printf ("\nerror");
	}	
	else if(edad<=2)
	{
		printf ("\nbebe");
	}
	else if( edad<=10)
	{
		printf ("\nChico");
	}
	else if( edad<=15)
	{
		printf ("\npavo");
	}
	else if( edad<=20)
	{
		printf ("\nNi ni");
	}
	else if( edad<=30)
	{
		printf ("\nA laburar");
	}
	else if( edad>=40 && edad<=50)
	{
		printf ("\ndificil pero hay que volver a empezar");
	}
	else
	{
		printf ("\nte crece la panza y se cae todo, hasta el pelo");
	}
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 004_5 \n\t\t¿Continuar?\n");
	getchar();
//	system("clear");
// Ej 004_6
/* Funciones de <string.h>:
	
	strcmp(cadena1, cadena2); //Compara dos cadenas de carácteres
	strcat(cadena1, cadena2); //Concatena dos cadenas de carácteres 
	strcpy(cadena1, cadena2); //Copia la primera cadena en la segunda
	strlen(cadena);  //Retorna la longitud de carácteres que componen a la cadena
	*/
	char cadena_org[30] = "Esto Es una CaDeNa De pRuEbA";
	char cadena_May[30] ;
	char cadena_Min[30] ;
	
	int contador, largo, compara =0;
	strcpy(cadena_May, cadena_org); //Copia la primera cadena en la segunda
	strcpy(cadena_Min, cadena_org); //Copia la primera cadena en la segunda
	largo = strlen(cadena_org);
	for(contador = 0; cadena_May[contador]; contador++)
	{
	cadena_May[contador] = toupper(cadena_May[contador]);
	cadena_Min[contador] = tolower(cadena_Min[contador]);
	}
	printf("\n%s con un lardo de %i", cadena_org , largo);
	printf("\n%s EN MAYUSCULAS", cadena_May);
	printf("\n%s en minusculas", cadena_Min);
	strcat(cadena_May, cadena_Min);
	printf("\n Esta es la union de ambas cadenas %s ", cadena_May);
	compara = strcmp(cadena_May, cadena_Min);
	printf("\n Esta es la union de ambas cadenas %i ", compara);
	return 0;

	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 004_6 \n\t\t¿Continuar?\n");
	getchar();
//	system("clear"); 
	int numero;
	fputs("Introduzca un numero entero par: ", stdout);

	scanf("%d", &numero);
	if (!numero) {
		fputs("Error: numero no valido.\n", stderr);
		return -1;
	}

	int i = 1;
	while (numero%2 == 0) {
		printf ("%.3d| %d/2 =", i++, numero);
		numero /=2;
		printf("%d\n", numero);
	}

	printf ("No se puede seguir dividiendo: El numero %d es impar.\n", numero);
	return (0);
}
/*
 * Funciones de <math.h>:
	
	double sin(valor);  //Calcula el sinus
	double cos(valor);  //Calcula el cosinus
	double tan(valor);  //Calcula la tangente
	double asin(valor);
	double atan(valor);
	double acos(valor);
	double sinh(valor);
	double cosh(valor);
	double tanh(valor);
	double log10(valor);
	double log(valor);
	double ldexp(valor1,valor2);
	double pow(valor);
	double sqrt(valor);  //Calcula raíces cuadradas
	#include <stdio.h>
	
	float promedio(int valores[], int cantidad) {
	int i;
	float suma = 0.0;
	
	for (i = 0; i < cantidad; ++i)
	suma += valores[i];
	
	return suma / (float) cantidad;
}
	
	
int main() 
{
	
	int notas[10];
	char nombre[20];
	char opcion[3];
	int n, i;
	
	do 
	{
	printf("Ingrese nombre del alumno: ");
	scanf("%s", nombre);
	
	printf("Cuantas notas tiene %s? ", nombre);
	scanf("%d", &n);
	
	for (i = 0; i < n; ++i)
		{
		    printf("  Nota %d: ", i + 1);
		    scanf("%d", &notas[i]);
		}
	
	printf("El promedio de %s es %.1f\n", nombre, promedio(notas, n));
	
	printf("Desea calcular mas promedios (si/no)? ");
	scanf("%s", opcion);
	
	} while (opcion[0] == 's' || opcion[0] == 'S');
	
	return 0;
}
*/

