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
	printf("##                            condicionales                               ##\n");
	printf("##                           ~~~~~~~~~~~~~~~                              ##\n");
	printf("##                                                                        ##\n");
	printf("##               if  else else if //  switch case break default//         ##\n");
	printf("##  proximamente >>>>    while  //  do while >>> en su cartelera de cines ##\n");
	printf("##                                                                        ##\n");
	printf("##    ==              Igual                                               ##\n");
	printf("##    !=              distinto                                            ##\n");
	printf("##    >               Mayor                                               ##\n");
	printf("##    <               Menor                                               ##\n");
	printf("##    ==              Menor igual                                         ##\n");
	printf("##    ==              Mayor igual                                         ##\n");
	printf("##                                                                        ##\n");
	printf("##    &&              y -- and                                            ##\n");
	printf("##    ||              o -- or                                             ##\n");
	printf("##                                                                        ##\n");
	printf("############################################################################\n");
    printf( "\n\tContinuamos..\n");
    getchar();
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin intro \n\t\t¿Continuar?\n");
	float    temporaria = 0;
	int    dato_1_int, dato_2_int =0;
// Ej 004_1

	getchar();
printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 004_1 \n\t\t¿Continuar?\n");
// Ej 004_2/1
	printf("\n ingrese un numero :");
	int numero;
	scanf("%d",&numero);
	if(numero % 2 == 0)
		{printf("El numero es par");}
	else
		{printf("El numero es impar");}
    printf( "\n\n\tContinuamos..\n");
printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 004_2/1 \n\t\t¿Continuar?\n");
// Ej 004_2/2
	getchar();	fflush (stdin);

	printf("\nIntroduce un numero int : ");
	scanf("%i", &dato_1_int);
	temporaria = dato_1_int % 2;
	if (dato_1_int == 0 )
	{
		printf ("\n el dato %i es cero, ni par ni impar", dato_1_int );
	}
	else if (temporaria == 0 )
	{
		printf ("\n el dato %i es par", dato_1_int );
	}
	else
	{
		printf ("\n el dato %i es impar", dato_1_int );
	}

	printf("\n");
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 004_2/2 \n\t\t¿Continuar?\n");

// Ej 004_3/1
	getchar();	fflush (stdin);

	printf("\nIntroduce el primer numero int : ");
	scanf("%i", &dato_1_int);
	printf("\nIntroduce el segundo numero int : ");
	scanf("%i", &dato_2_int);
	if (dato_1_int == dato_2_int)
	{
		printf ("\n el primer dato %i es igual al segundo %i", dato_1_int , dato_2_int);
	}
	if (dato_1_int != dato_2_int)
	{
		printf ("\n el primer dato %i es diferente al segundo %i", dato_1_int , dato_2_int);
	}
	if (dato_1_int > dato_2_int)
	{
		printf ("\n el primer dato %i es mayor al segundo %i", dato_1_int , dato_2_int);
	}
	if (dato_1_int < dato_2_int)
	{
		printf ("\n el primer dato %i es menor al segundo %i", dato_1_int , dato_2_int);
	}
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 004_3/1 \n\t\t¿Continuar?\n");
// Ej 004_3/2
	getchar();	fflush (stdin);
	printf("\nIntroduce el primer numero int : ");
	scanf("%i", &dato_1_int);
	printf("\nIntroduce el segundo numero int : ");
	scanf("%i", &dato_2_int);
	if (dato_1_int == dato_2_int)
	{
		printf ("\n el primer dato %i es igual al segundo %i", dato_1_int , dato_2_int);
	}
	else
	{
		printf ("\n el primer dato %i es diferente al segundo %i", dato_1_int , dato_2_int);

		if (dato_1_int > dato_2_int)
		{
			printf ("\n el primer dato %i es mayor al segundo %i", dato_1_int , dato_2_int);
		}
		else
		{
			printf ("\n el primer dato %i es menor al segundo %i", dato_1_int , dato_2_int);
		}
	}
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 004_3/2 \n\t\t¿Continuar?\n");
// Ej 004_3/3
	getchar();	fflush (stdin);
	printf("\nIntroduce el primer numero int : ");
	scanf("%i", &dato_1_int);
	printf("\nIntroduce el segundo numero int : ");
	scanf("%i", &dato_2_int);
	if (dato_1_int == dato_2_int)
	{
		printf ("\n el primer dato %i es igual al segundo %i", dato_1_int , dato_2_int);
	}
	else if (dato_1_int > dato_2_int)
	{
		printf ("\n el primer dato %i es diferente al segundo %i", dato_1_int , dato_2_int);
		printf ("\n el primer dato %i es mayor al segundo %i", dato_1_int , dato_2_int);
	}
	else
	{
		printf ("\n el primer dato %i es diferente al segundo %i", dato_1_int , dato_2_int);
		printf ("\n el primer dato %i es menor al segundo %i", dato_1_int , dato_2_int);
	}

	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 004_3/3 \n\t\t¿Continuar?\n");
// Ej 004_4
	getchar();	fflush (stdin);
	float nota1 , nota2 ;
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
// Ej 004_5/1

	getchar();	fflush (stdin);
	printf("\nIntroduce un mes en numero : ");
	scanf("%i", &dato_1_int);
	if (dato_1_int <= 1 || dato_1_int >= 12 )
	{
		printf ("\n Error %i no corresponde a los 12 meses", dato_1_int );
	}
	else if (dato_1_int == 1  )
	{
		printf ("\n %i corresponde al mes de Enero", dato_1_int );
	}
	else if (dato_1_int == 2  )
	{
		printf ("\n %i corresponde al mes de Febrero", dato_1_int );
	}
	else if (dato_1_int == 3  )
	{
		printf ("\n %i corresponde al mes de Marzo", dato_1_int );
	}
	else if (dato_1_int == 4  )
	{
		printf ("\n %i corresponde al mes de Abril- No esta, se lo robaron a Joaquin", dato_1_int );
	}
	else if (dato_1_int == 5  )
	{
		printf ("\n %i corresponde al mes de Mayo", dato_1_int );
	}
	else if (dato_1_int == 6  )
	{
		printf ("\n %i corresponde al mes de Junio", dato_1_int );
	}
	else if (dato_1_int == 7  )
	{
		printf ("\n %i corresponde al mes de Julio", dato_1_int );
	}
	else if (dato_1_int == 8  )
	{
		printf ("\n %i corresponde al mes de Agosto", dato_1_int );
	}
	else if (dato_1_int == 9  )
	{
		printf ("\n %i corresponde al mes de Septiembre", dato_1_int );
	}
	else if (dato_1_int == 10  )
	{
		printf ("\n %i corresponde al mes de Octubre", dato_1_int );
	}
	else if (dato_1_int == 11  )
	{
		printf ("\n %i corresponde al mes de Noviembre", dato_1_int );
	}
	else if (dato_1_int == 12  )//  Else if o else
	{
		printf ("\n %i corresponde al mes de Diciembre", dato_1_int );
	}
printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Otra manera ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 004_5/1 \n\t\t¿Continuar?\n");
// Ej 004_5/2
	getchar();	fflush (stdin);
	printf("\nIntroduce un mes en numero : ");
	scanf("%i", &dato_1_int);

printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 004_5/2 \n\t\t¿Continuar?\n");
	getchar();	fflush (stdin);

// Ej 004_6

	printf("\nIntroduce el primer numero > 0 y < 10 int : ");
	scanf("%i", &dato_1_int);
	if (dato_1_int < 0 || dato_1_int > 10 )
	{
		printf ("\n Error %i no corresponde a los limites >0 <10", dato_1_int );
	}
	else if (dato_1_int > 0 && dato_1_int < 10 )
	{
		printf ("\n OK  %i corresponde a los limites >0 <10", dato_1_int );
	}
	else // (dato_1_int == 0 || dato_1_int == 10 )
	{
		printf ("\n Error %i no corresponde es limite", dato_1_int );
	}

printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 004_6 \n\t\t¿Continuar?\n");
	getchar();	fflush (stdin);
// Ej 004_7
	int dia=0;
	char nombre[10];
//	char error[] = 'Dia incorrecto';
	printf("\nIntroduce el numero del dia de la semana  1 a  7  : ");
	scanf("%i", &dia);
	char *nombre_dias[] = { "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado","Domingo"};// en realidad el primer dia de la semana es el domingo
	if (dia >= 1 && dia <= 7)
		{
		strcpy( nombre, nombre_dias[dia-1] );
		}
	else
		{
		strcpy( nombre, 'Error' );
		}
	printf ("Hoy es : %s", nombre);

	getchar();
	//system("clear");

printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 004_7 \n\t\t¿Continuar?\n");
	getchar();	fflush (stdin);
// Ej 004_8
	char c;
	printf(" Menu:");
	printf(" A=Añadir a la lista");
	printf(" B=Borrar de la lista");
	printf(" O=Ordenar la lista");
	printf(" I=Imprimir la lista");
	printf(" Escriba su seleccion y luego <enter>");
	c = getchar();
	if(c != "")
	{
		if(c=='A')
		{
			 printf(" Has seleccionado añadir");
		}
		else  if(c=='B') printf(" Has seleccionado borrar");
		else  if(c=='O') printf(" Has seleccionado ordenar");
		else  if(c=='I') printf(" Has seleccionado imprimir");
	}
	else
	{
		printf(" No has seleccionado nada");
	}
printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 004_8 \n\t\t¿Continuar?\n");
	getchar();	fflush (stdin);
	return (0);
}

