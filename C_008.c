#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define tam 4
/* programa para calcular la suma, promedio, cuadrado, cubo y desviación
estandar de una serie de números */
int main(void)
{
double vector[tam],cuadrado, cubo;
float prom, desv,suma=0;
int i;

system("cls" );
printf ("PROGRAMA PARA CALCULAR \n");
printf(" PROMEDIO, SUMA, CUADRADO, CUBO Y DESV. EST.\n\n") ;
//Captura de valores y suma de los mismos
for(i = 0 ; i < tam ; ++i)
{
printf ("num [%d] = " , i) ;
scanf ("%lf" , &vector[i]) ;
suma+= vector[i] ;
}
prom = suma / tam ;
printf (" \n El promedio de los numeros es: %4.2f\n ", prom) ;
//Calculo e impresión de cuadrado, cubo y desviación estandar
printf(" \n \n NUMERO CUADRADO CUBO DESV. EST.\n");
for( i = 0 ; i < tam ; ++i )
{
cuadrado = vector[i] * vector[i] ;
cubo = pow (vector[i], 3) ;
desv = vector [i] - prom ;
printf ("%.2lf", vector[i] ) ;
printf (" \t%.2lf", cuadrado) ;
printf (" \t%.2lf", cubo) ;
printf (" \t%.2f\n", desv) ;
}
system("pause");
return(0);
}


