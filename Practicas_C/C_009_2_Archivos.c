// Copyright 2020 Ariel H Garcia Traba <cursos.agt@gmail.com>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define primer_valor 21
#define segundo_valor 32
#define SUMAMOS(x,y) x+y
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
	printf( "\n\n\tFin intro \n\t\t-Continuar?\n");
    getchar();
	printf("\n############################################################################\n");
//

#include <stdio.h>
//#include <conio.h>
#include <string.h>

struct datos {


   char nombres[10];
   int edad;
   char rut[9];
   int telefono;
} cliente[5];

int main(void){

   int i;
   FILE*archivo;
   archivo = fopen("prueba_4.txt", "at+");
   puts("");
   for (i = 0; i < 5; i++){

      printf("Ingrese el %d Nombre: ", i + 1);
      gets(cliente[i].nombres);
      printf("Ingrese la edad: ");
      scanf("%d", &cliente[i].edad);
      while (getchar() != '\n')

         ;
      printf("Ingrese el Rut: ");
      gets(cliente[i].rut);
      printf("Ingrese el numero telefonico: ");
      scanf("%d", &cliente[i].telefono);
      while (getchar() != '\n')
         ;
      fwrite(&cliente[i], sizeof(cliente[i]), 1, archivo);
   }

   i = 0;
   rewind(archivo);
   while (fread(&cliente[i], sizeof(cliente[i]), 1, archivo) == 1) {


      printf("\n Nombre alumno numero %d es: %s", i + 1, cliente[i].nombres);
      printf("\n Edad alumno numero %d es: %d", i + 1, cliente[i].edad);
      printf("\n Rut alumno numero %d es: %s", i + 1, cliente[i].rut);
      printf("\n Telefono alumno numero %d es: %d", i + 1, cliente[i].telefono);
      i++;

   }

   fclose(archivo);
   printf("\n Los Datos fueron guardados al disco");
   getchar();

}
