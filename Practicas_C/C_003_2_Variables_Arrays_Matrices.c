/*
 * C_003_2_Variables_Arrays_Matrices.c
 *
 * Copyright 2020 Ariel H Garcia T <Cursos.AGT@gmail.com>

 */


#include <stdio.h>
int main()
{
	int a=0; //Declaracion de variable entera de tipo entero
	int *puntero; //Declaracion de variable puntero de tipo entero
	puntero = &a; //Asignacion de la direccion memoria de a

	printf("El valor de a es: %d. \nEl valor de *puntero es: %d. \n",a,*puntero);
	printf("La direccion de memoria de *puntero es: %p",puntero);
	/////////////////////////////////////////////////////
	int array[10]={0,2,3,5,5,6,7,8,9,0}; //Declarar e inicializar un array.
	int *puntero2 = &array[0]; //Le damos la direccion de inicio del array
	int i; //variable contadora...

	for (i=0;i<10;i++)
	{
		printf("%d\n",*(puntero2+i)); //imprimimos los valores del puntero.
	}
	return 0;
}


