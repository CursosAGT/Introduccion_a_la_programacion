/*
 * MCD.c
 *
 * Copyright 2019 Ariel H Garcia T <Cursos.AGT@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */


#include<stdio.h>
#include<string.h>
#define MAX 50

int HCF(int, int);

int main()
{
	int arr[MAX];
	int num1,num2,size,result;
	int i,j;

	printf("Ingrese la cantidad de elementos: ");
	scanf("%d",&size);
	printf("\nIngrese los elementos: \n");
	for(i=0;i<size;i++)
	{
		printf("\n Elemento %d= ",i);
		scanf("%d", &arr[i]);
	}
	num1=arr[0];
	for(j=0;j<size-1;j++)
	{
		num2=arr[j+1];
		result=HCF(num1,num2);
		num1=result;
	}
	printf("\n\n M.C.D es: %d",result);
return 0;
}

int HCF(int x, int y)
	{
	int result1;
	while((x%y)!=0)
	{
		result1=x%y;
		x=y;
		y=result1;
	}
return y;
}

/*
 * Este es el escalar:
#include <stdio.h>

float A[100], k;
int cant, n;
int main()
{
	printf("Cantidad de elementos a introducir: ");
	scanf("%i", &cant);

	for(n = 0; n < cant; n++)
		{
		printf("Introduzca el elemento %i: ",n+1);
		scanf("%f", &A[n]);
		}

	printf("\n\nIntroduzca el valor escalar: ");
	scanf("%f", &k);
	printf("\n\nEl arreglo resultante seria:\n\n");

	for(n = 0; n < cant; n++)
		{
		printf("%.2f ",A[n]*k);
		}

	getchar();
	return 0;
}
*/
