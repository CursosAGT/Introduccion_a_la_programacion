// Copyright 2019 Ariel H Garcia Traba <cursos.agt@gmail.com>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void intercambia (int valor_a,int valor_b);
void intercambia2 (int *valor_a, int *valor_b);
int main()
{
/*	La sintaxis de C puede, a veces, provocar confusion. Se debe distinguir lo que es un prototipo de una funcion de lo que es una declaracion de una variable. Asi mismo, un puntero a un vector de punteros, etc...
	int f1(); funcion que devuelve un entero
	int *p1; puntero a entero
	int *f2(); funcion que devuelve un puntero a entero
	int (*pf)(int); puntero a funcion que toma y devuelve un entero
	int (*pf2)(int *pi); puntero a funcion que toma un puntero a entero y devuelve un entero
	int a[3]; vector de tres enteros
	int *ap[3]; vector de tres punteros a entero
	int *(ap[3]); vector de tres punteros a entero
	int (*pa)[3]; puntero a vector de tres enteros
	int (*apf[5])(int *pi); vector de 5 punteros a funcion que toman un puntero a entero y devuelven un entero
	*/
	printf("Esta funcion devuelve el numero de caracteres que tiene la cadena (sin contar el \\0) ");//<----dara error
	char datos[]="Gandalf";
	int longitud= ((sizeof datos )/4);//int 4 bits por iten de array;
	for (int contador=0;contador<= longitud;contador++ )
    {
        printf("\ndatos %d \ten posicion %d", datos[contador],contador);
	}

	printf( "\nLa cadena \"%s\" tiene %i caracteres.\n", datos , longitud );
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	printf( "\n\n\tFin del ejercicio 003_P_00 \n\t\t¿Continuar ?\n");
	getchar();fflush (stdin);
// Ej 003_P_01
//Este código sería erróneo y daría una violacion de segmento:
/*
char *puntero;
scanf ("%c", puntero);

*/
	char *puntero = (char*) malloc (sizeof (char));
	printf("Ingrese una palabra :");
	scanf ("%c", puntero);
//En este código, al scanf le pasamos el puntero en sí. El puntero es una variable, como bien se ha dicho anteriormente, que contiene una dirección de memoria, por tanto, no es necesario el uso de & para pasarle la dirección de memoria a scanf. Anteriormente hemos tenido que reservar un espacio de memoria con malloc(), que se verá su uso más adelante.
	fflush (stdin);    getchar();	fflush (stdin);    getchar();


//  https://www.youtube.com/watch?v=OgX4vdtkkHQ
	char *caracter_1;//<--------------------------------------------------------error agregar un * antes del nombre
	caracter_1 = "UTN 2019";
	printf ("%s",caracter_1);
	printf("\n-----------------------------------------------------------------------\n");
	char *caracter_2[] ={"U","T","N"," ","2","0","1","9"};
	printf ("\n%s",*caracter_2);
	printf("\n-----------------------------------------------------------------------\n");
	printf( "\n\n\tFin del ejercicio 003_P_01 \n\t\t¿Continuar?\n");
	fflush (stdin);    getchar();
	printf("\n############################################################################\n");
// Ej 003_P_02
	char *mi_Array_1[5]= {"Primero","segundo","terecero","cuarto", "quinto"};//Esta matriz tiene 4 cadenas almacenadas, para leer o escribir una cadena usa el indice, si quieres coger una letra tratala como bidimensional [indice][indice_letra]
	float mi_Array_2[5] ={3.1459,6.6742,299792458,6,6260693};
	int contador = 0;

	for (contador = 0; contador < 5; contador++)
	{
		printf ("\nItem Nº: %i",contador+1);//porque somos humanos y el pimer valor natural que tomamos es 1 vs numeros naturales cardinales
		printf ("\n\tNombre de la constante: %s y esta ubicada en el puntero %p ",mi_Array_1[contador],&mi_Array_1[contador]);
		printf ("\n\tValor de la constante: %f.2",mi_Array_2[contador]);
	}
	printf( "\n\n\tFin del ejercicio 003_P_02 \n\t\t¿Continuar?\n");
    fflush (stdin);    getchar();
	printf("\n############################################################################\n");
// Ej 003_P_03
	printf( "\n\tContinuamos..\n");
	getchar();
	int variable_valor_1 = 1973;
	printf ("\nAntes de accion variable_valor_1 : %i", variable_valor_1);
	int *posicion_mem_variable_valor_1 = &variable_valor_1;
	*posicion_mem_variable_valor_1 = 45;
	printf ("\nLuego de accion variable_valor_1 : %i", variable_valor_1);
	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 003_P_03 \n\t\t¿Continuar?\n");
    getchar();fflush (stdin);
	printf("\n############################################################################\n");
// Ej 003_P_04
    int valor_1 = 1973;
    int valor_2 = 9;
    int valor_3 = 22;
	printf ("\nvalor_1 : %i ", valor_1 );
	printf ("\nvalor_2 : %i ", valor_2 );
	printf ("\nvalor_3 : %i ", valor_3);

	int array_valores [3]={1973,9,22};
	int *posicion_array_valores = array_valores;
	printf ("\narray_valores = 0 -> 0: %i ", *posicion_array_valores);
	posicion_array_valores+=2;
	printf ("\narray_valores desplazo de 0 + 2 a 2: %i ", *posicion_array_valores);
	posicion_array_valores-=1;
	printf ("\narray_valores desplazo de 2 - 1 a 1 : %i ", *posicion_array_valores);

	printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf( "\n\n\tFin del ejercicio 003_P_04 \n\t\t¿Continuar?\n");
    getchar();fflush (stdin);
	printf("\n############################################################################\n");
// Ej 003_P_05

/*
Definiciones de arrays como punteros. La propiedad anterior da lugar a que en
numerosos libros de texto, se definan por ejemplo cadenas de caracteres como punteros
a char, que segun hemos visto son equivalentes. Esto es, las siguientes declaraciones de
la variable s son “aparentemente” equivalentes:
	char s[10];	<--reservando una cantidad de memoria concreta,
	char *s;	<--NO reservando una cantidad de memoria concreta,
	char s[];	<--NO reservando una cantidad de memoria concreta,
		El simbolo * se usa para DEFINIR una variable de tipo puntero.
		El simbolo & se usa para indicar la direccion de una variable “normal”. NO un vector. Un vector NO necesita & para pasas referencias
		El simbolo * se usa para ACCEDER al valor que guarda un puntero.
		El simbolo & se usa solo en la invocacion de funciones, de forma que se pone delante de los parametro reales de E/S.
		Cuando un parametro formal es de E/S en el prototipo y cabecera se indica con un tipo puntero, esto es, poniendo un * entre el tipo y el nombre del parametro.
		En el cuerpo de la funcion los argumentos formales que son parametros de E/S se usan con un * delante.
		Los & solo se usan en el programa principal.
		Los * solo se usarian en las funciones.(solo que se trabaje los arrays en estas, si tambien se trabajan en main se usan en ambos lados)
		*
*/
	printf("\n######################## Uso en Funciones ######################################\n");
	printf("\n+------------------------+");
	printf("\n|  DENTRO DE LA FUNCION  |");
	printf("\n|           main         |");
	printf("\n+------------------------+");
//	int valor_1,valor_2;
	printf("\n Ingrese el 1er valor a intercambiar  :");
	scanf("%i",&valor_1);
	printf("\n Ingrese el 2do valor a intercambias  :");
	scanf("%i",&valor_2);
	printf("\nValores originales 1º %i y 2º %i",valor_1,valor_2);
	intercambia (valor_1,valor_2);
	printf("\nValores cambiados 1º %i y 2º %i",valor_1,valor_2);

	printf("\n-----------------------------------------------------------------------\n");

	printf("\nValores originales 1º %i y 2º %i",valor_1,valor_2);
	intercambia2 (&valor_1,&valor_2);//<-------------------el & permite asignar desde la funcion un valor al puntero
	printf("\nValores cambiados 1º %i y 2º %i",valor_1,valor_2);

	printf( "\n\n\tFin del ejercicio 003_P_05 \n\t\t¿Continuar?\n");
    getchar();fflush (stdin);
	printf("\n############################################################################\n");

	return (0);
}
void intercambia (int valor_a,int valor_b)//<---------------------las variables son del tipo entero y nada mas
{
	printf("\n+------------------------+");
	printf("\n|  DENTRO DE LA FUNCION  |");
	printf("\n| intercambia  variables |");
	printf("\n+------------------------+");
	int auxiliar ;
	auxiliar = valor_a;
	valor_a = valor_b;
	valor_b = auxiliar;
}


void intercambia2 (int  *valor_a,int *valor_b)//<---------------------las variables son del tipo puntero entero
{
	int auxiliar ;
	printf("\n+------------------------+");
	printf("\n|  DENTRO DE LA FUNCION  |");
	printf("\n| intercambia2 v.punteros|");
	printf("\n+------------------------+");
	auxiliar = *valor_a;//<---------------------las variables comun entera se le asigna el valor del puntero entero
	*valor_a = *valor_b;//<---------------------las variables puntera entera se le asigna el valor del puntero entero
	*valor_b = auxiliar;//<---------------------las variables puntera entera se le asigna el valor de la variable entera comun
}
