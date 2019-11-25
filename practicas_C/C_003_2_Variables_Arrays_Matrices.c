/*
 * C_003_2_Variables_Arrays_Matrices.c
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


#include <stdio.h>

#include <stdio.h>

int main()
{
int a=0; //Declaración de variable entera de tipo entero
int *puntero; //Declaración de variable puntero de tipo entero
puntero = &a; //Asignación de la dirección memoria de a

printf("El valor de a es: %d. \nEl valor de *puntero es: %d. \n",a,*puntero);
printf("La dirección de memoria de *puntero es: %p",puntero);
/////////////////////////////////////////////////////
int array[10]={0,2,3,5,5,6,7,8,9,0}; //Declarar e inicializar un array.
int *puntero2 = &array[0]; //Le damos la dirección de inicio del array
int i; //variable contadora...

for (i=0;i<10;i++)
printf("%d\n",*(puntero2+i)); //imprimimos los valores del puntero.


return 0;
}


