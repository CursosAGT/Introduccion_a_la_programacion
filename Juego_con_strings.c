// Copyright 2019 Ariel H Garcia Traba <cursos.agt@gmail.com>
#include <stdio.h>
#include <string.h>

#define numero_de_cadenas 4
#define longutud_max_de_cadenas 40

void print_array(const char arr[numero_de_cadenas][longutud_max_de_cadenas])
{
	for (int i = 0; i < numero_de_cadenas; i++)
	{
		printf("'%s' <--- tiene una longitud de %li caracteres\n", arr[i], strlen(arr[i]));
	}
}

int main()
{
	char arr[numero_de_cadenas][longutud_max_de_cadenas] =
	{ "Los array de carracteres en 'C'",
	  "o strings, son complicados de usar",
	  "es importante el espacio reservado",
	  "nunca te pases del limite -1"
	};// matriz de 4 x 40

	printf("Antes de accion reverse:\n");
	print_array(arr);//<-----------------llama a la fucion

	for (int i = 0; i < numero_de_cadenas; i++)
	{
		for (int j = 0, k = strlen(arr[i]) - 1; j < k; j++, k--)
		{
			char temp = arr[i][j];
			arr[i][j] = arr[i][k];
			arr[i][k] = temp;
		}
	}

	printf("\nLuego de la accion reverso:\n");
	print_array(arr);

	return 0;
}
