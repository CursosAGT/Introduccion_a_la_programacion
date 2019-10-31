// Copyright 2019 Ariel H Garcia Traba <cursos.agt@gmail.com>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
    printf( "\n\tContinuar: (S/N)\n");
    getchar();
// Ej 003_A_01
	printf("Inicio ej000_V_1\n");
	printf("############################################################################\n");
	printf("##                                                                        ##\n");
	printf("##      Variables, Arrays                                                 ##\n");
	printf("##                 Arrays lineales                                        ##\n");
	printf("##                 Arrays matriciales                                     ##\n");
	printf("##                                                                        ##\n");
	printf("############################################################################\n");     

	float mi_float = 5550.121231323455627789;
	printf ("\nItem Nº: %f",mi_float);
	printf ("\nItem Nº: %.2f",mi_float);
	printf ("\nItem Nº: %.3f",mi_float);
	printf ("\nItem Nº: %.5f",mi_float);
	printf ("\nItem Nº: %.7f",mi_float);	
	printf ("\nItem Nº: %.9f",mi_float);	
	printf ("\nItem Nº: %.15f",mi_float);	
    printf( "\n\tContinuar: (S/N)\n");
    getchar();
	printf("\n############################################################################\n");	
	
	char *mi_array_1[5]= {"Primero","segundo","terecero","cuarto", "quinto"};//Esta matriz tiene 4 cadenas almacenadas, para leer o escribir una cadena usa el indice, si quieres coger una letra tratala como bidimensional [indice][indice_letra]
	float mi_array_2[5] ={3.1459,6.6742,299792458,6,6260693};
	int contador = 0;

	for (contador = 0; contador < 5; contador++)
	{
		printf ("\nItem Nº: %i",contador+1);//porque somos humanos y el pimer valor natural que tomamos es 1 vs numeros naturales cardinales
		printf ("\n\tNombre de la constante: %s",mi_array_1[contador]);
		printf ("\n\tValor de la constante: %f.2",mi_array_2[contador]);
	}

    printf( "\n\tContinuar: (S/N)\n");
    getchar();
	printf("\n############################################################################\n");
// Ej 003_A_02
	float mi_array_3[10] = {0,1,2,3,4,5.5,6.2,7.7,8,9};
	int mi_array_4[10];
	printf("\n---------------------------  Entrada --------------------------------------\n");
	for (contador = 0; contador < 10; contador++)
	{
		printf ("\nIngrese un valor a la posicion Nº %.f  -->",(mi_array_3[contador]+1));
		scanf("%i",&mi_array_4[contador]);
	}
	printf("\n---------------------------  Salida ---------------------------------------\n");
	for (contador = 0; contador < 10; contador++)
	{
		printf ("\nItem Nº: %f",(mi_array_3[contador]+1));
		printf ("\tvalor dado %i",mi_array_4[contador]);
	}

	
	
// Ej 003_A_03
	printf( "\n\tContinuar: (S/N)\n");
	getchar();
	printf("\n######################## En Funciones ######################################\n");

	int mi_array_5[5];
	void funcion_entrada(int *mi_array_5);
	void funcion_salida(int *mi_array_5);
	printf("\n---------------------------------------------------------------------------\n");
	
	 funcion_entrada(mi_array_5);
	 funcion_salida(mi_array_5);


	printf( "\n\tContinuar: (S/N)\n");
	getchar();
//	system("clear");
	return (0);
}
void funcion_entrada(int *mi_array_5)
{
	printf("\n--------------------- Funcion Entrada --------------------------------------\n");
	int contador = 0;
	for (contador = 0; contador < 5; contador++)
	{
		printf ("\nIngrese un valor a la posicion Nº %i  -->",(contador+1));
		scanf("%i", (mi_array_5+contador));
	}
}
void funcion_salida(int *mi_array_5)
{
	printf("\n--------------------- Funcion Salida ---------------------------------------\n");
	int contador = 0;
	for (contador = 0; contador < 5; contador++)
	{
		printf ("\n\tvalor dado %i en posicion %i",*(mi_array_5+contador), (contador+1));
	}
}
/*
	char resultado[80] = “otorrino”;
	strcat( resultado, “laringólogo” );
	printf( “%s\n”, resultado );
	
	La sintaxis de C puede, a veces, provocar confusión. Se debe distinguir lo que es un prototipo de una función de lo que es una declaración de una variable. Así mismo, un puntero a un vector de punteros, etc...
	
	int f1(); función que devuelve un entero
	int *p1; puntero a entero
	int *f2(); función que devuelve un puntero a entero
	int (*pf)(int); puntero a función que toma y devuelve un entero
	int (*pf2)(int *pi); puntero a función que toma un puntero a entero y devuelve un entero
	int a[3]; vector de tres enteros
	int *ap[3]; vector de tres punteros a entero
	int *(ap[3]); vector de tres punteros a entero
	int (*pa)[3]; puntero a vector de tres enteros
	int (*apf[5])(int *pi); vector de 5 punteros a función que toman un puntero a entero y devuelven un entero
	*/
