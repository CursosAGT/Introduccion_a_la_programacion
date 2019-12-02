// Copyright 2019 Ariel H Garcia Traba <cursos.agt@gmail.com>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//Ej 006_2

int main()
{

	printf("\n+------------------------+");
	printf("\n|     Examen Final       |");
	printf("\n|       opcion 2         |");
	printf("\n+------------------------+");

	printf("\nLeemos un archivo");
	/*
	* Para usar un archivo tenemos que asociar una variable puntero
	* al archivo para poder escribir o leer de el
	*/
	FILE *datos_archivo_entrada = NULL;
	/*
	* Ahora que tenemos la variable para asignarla al archivo procedemos a
	* abrir el archivo, el primer parametro es el nombre del archivo
	* con su localizacion exacta en el sistema de archivos.
	* El segundo parametro es la forma en la que se va a abrir el archivo,
	* en este caso estamos abriendo el archivo en modo de solo lectura
	*/
	datos_archivo_entrada = fopen("prueba_2.txt", "r");
	char caracter;
	/*
	* Ahora debemos comprobar que el proceso de apertura fue exitoso
	* para saber si nuestra apertura de archivo fue exitosa hacemos la
	* siguiente comparacion, si el contenido de la variable es igual a NULL
	* el archivo no fue abierto.
	*/
	if(datos_archivo_entrada == NULL )
		{
			printf("\nError de apertura del archivo. \n\n");
		}
	else
		{
			printf("\nEl contenido del archivo es \n\n");
			while((caracter = fgetc(datos_archivo_entrada)) != EOF)
				{
				printf("%c",caracter);
				}
		}

	//	Cuando ya no necesitemos trabajar mas con el archivo procedemos a cerrarlo
	fclose(datos_archivo_entrada);

	printf("\n\nEjercicio"
		"\nHas un programa que dado un texto (en un array) cuenta el número de caracteres, de palabras y de líneas de un fichero de texto"
		"\nnota"
		"\n\tcaracteres\t\ttodos."
		"\n\tpalabras\t\tcuenta cuando encuentre un espacio vació."
		"\n\toraciones\t\tcuenta los . (puntos)");

	printf("\n\nIndicaciones"
		"\n\t\tNivel 1"			//-------nivel 1
		"\n\tHas una funcion para el ingreso del los datos"
		"\n\ty clasificacion"
		"\n\tIngresa un caracter getchar() en especial y que cuente cuantas veces aparece en el texto"
		"\n\tImprime los resultados en un recuadro bien presentado"
		"\n\t\t\tNivel 2"		//-------nivel 2
		"\n\tPasa todo a minusculas menos la primer letra de cada oracion"
		"\n\tBusca la palabra \" ella \" y cuentas veces se repite (Ojo que no forme parte de otra palabra - ver espacios delante y atras )");
}

