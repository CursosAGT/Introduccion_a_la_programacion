// Copyright 2020 Ariel H Garcia Traba <cursos.agt@gmail.com>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
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
    printf( "\n\tContinuamos..\n");
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


//-------> Ej 003_M_01

	printf("\n######################## En Funciones ######################################\n");
	int mi_Matriz_1[5][5];	// 5*5=25 valores 2d //int mi_array_Matriz_1[5][5][5];// 5*5*5=125 valores 3d
	void funcion_entrada(int mi_Matriz_1[5][5]);
	void funcion_salida(int mi_Matriz_1[5][5]);

	funcion_entrada(mi_Matriz_1);
	funcion_salida(mi_Matriz_1);
	printf( "\n\tContinuamos..\n");
	getchar();
//	system("cls");
	return (0);
}

void funcion_entrada(int mi_Matriz_1[5][5])
{
	printf("\n--------------------- Funcion Entrada --------------------------------------\n");
	int contador_x = 0;
	int contador_y = 0;
//	srand(time(NULL));
	for (contador_x = 0; contador_x < 5; contador_x++)
	{
		for (contador_y = 0; contador_y < 5; contador_y++)
		{
			mi_Matriz_1[contador_x][contador_y]=(contador_x+1)*(contador_y+1);//rand()%10;
		}
	}
}
void funcion_salida(int mi_Matriz_1[5][5])
{
	printf("\n--------------------- Funcion Salida ---------------------------------------\n");
	int contador_x = 0;
	int contador_y = 0;
	for (contador_x = 0; contador_x < 5; contador_x++)
	{
		for (contador_y = 0; contador_y < 5; contador_y++)
		{
			printf ("\n\tPosicion %i -  %i \tvalor dado %i " ,(contador_x+1),(contador_y+1), (mi_Matriz_1[contador_x][contador_y]));
		}
		printf("\n--------------");
	//	",*(mi_array_5+contador), (contador+1));
	}
}


