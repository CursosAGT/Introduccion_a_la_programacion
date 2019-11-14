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
	printf("##                                                                        ##\n");
	printf("##                                                                        ##\n");
	printf("##               Entradas (teclado) y Salidas (Pantalla)                  ##\n");
	printf("##              ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                 ##\n");
	printf("##                                                                        ##\n");
	printf("##    char              Caracter                 (1 byte)                 ##\n");
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
	printf("##      https://elrincondelc.com/foros/viewtopic.php?t=18819              ##\n");
	printf("##                                                                        ##\n");
	printf("##      https://www.monografias.com/trabajos4/lenguajec/lenguajec.shtml	  ##\n");
	printf("##                                                                        ##\n");
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
	-		justifica a la izquierda el resultado, añadiendo espacios al final
	blank	si es positivo, imprime un espacio en lugar de un signo +
	#		especifica la forma alternativa

	En el campo width se especifica la anchura minima de la forma:
	n		se imprimen al menos n caracteres.
	0n		se imprimen al menos n caracteres y si la salida es menor, se anteponen ceros
	*		la lista de parametros proporciona el valor

	Hay dos modificadores de tamaño, para los tipos enteros:
	l		imprime un entero long
	h		imprime un entero short
	*/

	printf( "\n\tContinuamos..\n");
	getchar();
	//system("pause");
	//system("clear");
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
	scanf("%c%*c", &dato_char);//    scanf("%*[^\n]"); // Lee cualquier caracter mientras no sea nueva linea
	printf("\nOK un caracter : %c\n", dato_char);//c

	printf("\nIntroduce una cadena de caracteres - String: ");
	scanf("%s%*c", cadena_char);
	printf("\nOK cadena de caracteres - String: %s\n", cadena_char);//c


	printf("\n\nLos datos que ud. ingreso fueron :\n");
	printf("%d\t%f\t%lf\t%c\t%s\t\n\n", dato_int, dato_float, dato_double,dato_char, cadena_char);

	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 002_1 \n\t\t¿Continuar?\n");
// Ej 002_2
	getchar();
	char nombre[20] ; // Reservamos espacio para cadena de 19 caracteres + el caracter nulo /
	int longitud_string = 0;
	printf ("\nPor favor ingrese su nombre :");
	scanf("%s", nombre);
	longitud_string = strlen(nombre); //strlen cuenta caracteres
	printf( "\t...Che %s...tu nombre tiene %i caracteres. \n", nombre, longitud_string );
//	system("clear");
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 002_2 \n\t\t¿Continuar?\n");
// Ej 002_3
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
	printf( "\n\n\tFin del ejercicio 002_3 \n\t\t¿Continuar?\n");
	getchar();
//	system("clear");
//Ej 002_3
	float nota_alumno_1 = 0, nota_alumno_2 = 0;
	printf ("\nIngreso la nota del 1er parcial :");
	scanf("%f",&nota_alumno_1);
	printf ("\nIngreso la nota del 2do parcial :");
	scanf("%f",&nota_alumno_2);
	printf ("\n1er parcial : %f",nota_alumno_1);
	printf ("\n2do parcial : %f",nota_alumno_2);
	printf ("\npromedio : %f",((nota_alumno_1+nota_alumno_2)/2));
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 002_4 \n\t\t¿Continuar?\n");
	getchar();
// Ej 002_4
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
	printf( "\n\n\tFin del ejercicio 002_5 \n\t\t¿Continuar?\n");
	getchar();
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

	printf("\n Ahora inventamos algo\n\t El Sr.%c %s con una altura de %lf y un peso de %f pretende ganar la competencia, pero lleva %ld dias desde que nacio que equivalen a %lld segundos desde que dio su primer respiro que fue en el año %d.",variable_caracter,variable_cadena,variable_float,variable_double,variable_long,variable_longlong,variable_int);

	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 002_6 \n\t\t¿Continuar?\n");
	getchar();


	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf ("         dejamos aqui y vamos a condicionales y bucles, luego vovemos");
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");



	char texto[]="Gandalf";
	char *character_indicado;
	int longitud=0;

	character_indicado = texto;
	while (*character_indicado != '\0') {
		longitud++;
		printf( "%c\n", *character_indicado );	// Mostramos la letra actual
		character_indicado++;					// Vamos a la siguiente letra
	}
	printf( "La cadena \"%s\" tiene %i caracteres.\n", texto, longitud );
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 002_7 \n\t\t¿Continuar?\n");
	getchar();
//	system("clear");
// Ej 002_5
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
	printf( "\n\n\tFin del ejercicio 002_8 \n\t\t¿Continuar?\n");
	getchar();	getchar();

//	system("clear");
// Ej 002_6*/
/* Funciones de <string.h>:

	strcmp(cadena1, cadena2); //Compara dos cadenas de caracteres
	strcat(cadena1, cadena2); //Concatena dos cadenas de caracteres
	strcpy(cadena1, cadena2); //Copia la primera cadena en la segunda
	strlen(cadena);  //Retorna la longitud de caracteres que componen a la cadena
	*/

	char cadena_org[30] = " Esto Es una CaDeNa De pRuEbA ";
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
	printf("\n si es diferente a 0 (cero) es que no es la misma cadena ");


	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 002_9 \n\t\t¿Continuar?\n");
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

	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 002_10 \n\t\t¿Continuar?\n");
	getchar();	getchar();


	char texto2[] = "este es un curso de intro a la programacion.";
	char destino[50];

	strcpy( destino, texto2 );
	printf( "Valor final: %s\n", destino );

	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	printf( "\n\n\tFin del ejercicio 002_11 \n\t\t¿Continuar?\n");
	getchar();	getchar();

	int num,bucle,suma=0,cantidad;

	printf("Promedio.n Cuantos numero quieres calcular su promedio: ");
	scanf("%d",&num);
	for(bucle=1;bucle<=num;bucle++)
	{
	 printf("Numero: ");
	 scanf("%d",&cantidad);
	 suma=suma+cantidad;
	}
	suma=(suma/num);
	printf("Su promedio es: %i",suma);
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	printf( "\n\n\tFin del ejercicio 002_12 \n\t\t¿Continuar?\n");
	getchar();	getchar();

	int cant;				//cantidad de valores
	int valor_nuevo;				//contador int _valor;

	int cont;
	int sumas;				//sumas de los valores
	float prom;				//promedio de la sumas entre la cantidad
	cont=1;				//Inicializo
	sumas=0;				//variables
	printf("cantidad de valores a introducir: ");
	scanf("%d",&cant);			//Lectura de las variables
	while(cont<=cant)
	{					//Ciclo que cuenta la lectura
		printf("\nValor: ");
		scanf("%d",&valor_nuevo);			//lectura de valores
		sumas=sumas+valor_nuevo;			//sumas de valores
		cont++;//incremente de lectura de valores
	 }						//END while
	prom=sumas/cant;//promedio de valores
	printf("Promedio: %.2f",prom);//impresion de valores getch();//esperar a que presiona una tecla el usuario
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	printf( "\n\n\tFin del ejercicio 002_12 \n\t\t¿Continuar?\n");
	getchar();	getchar();


	float registro;
	int contador2;
	float memoria;
	float sumar = 0;
	float promedio;
	printf("Cuantas calificaciones deseas introducir: " );
	scanf("%f", &registro);
	for(contador2 = 1; contador2 <= registro; contador2 ++)
		{
		printf("Introduce la calificacion %d: ", contador2);
		scanf("%f", &memoria);
		sumar = sumar + memoria;
		promedio = ((sumar/registro));
		}
	printf("El promedio es igual a: %f", promedio);
	getchar();
return 0;
}
