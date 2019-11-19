// Copyright 2019 Ariel H Garcia Traba <cursos.agt@gmail.com>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	printf("############################################################################\n");
	printf("##                                                                        ##\n");
	printf("##      ¿Que es C?                                                        ##\n");
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
	printf( "\n\n\tFin intro \n\t\t¿Continuar?\n");
    getchar();
	printf("\n############################################################################\n");
// Ej 009_1


/*
Nombre Función
* fopen() Abre un archivo.
* fclose() Cierra un archivo.
* fgets() Lee una cadena de un archivo.
* fputs() Escribe una cadena en un archivo
* fseek() Busca un byte especifico de un archivo.
* fprintf() Escribe una salida con formato en el archivo.
* fscanf() Lee una entrada con formato desde el archivo.
* feof() Devuelve cierto si se llega al final del archivo.
* ferror() Devuelve cierto si se produce un error.
* rewind() Coloca el localizador de posición del archivo al principio del mismo.
* remove() Borra un archivo.
* fflush() Vacía un archivo.
* FILE * fopen (const char *filename, const char *opentype);

    "r" : abrir un archivo para lectura, el fichero debe existir.
    "w" : abrir un archivo para escritura, se crea si no existe o se sobreescribe si existe.
    "a" : abrir un archivo para escritura al final del contenido, si no existe se crea.
    "a+" :abrir el archivo para lectura/escritura (se sitúa al final del archivo).
    "r+" : abrir un archivo para lectura y escritura, el fichero debe existir.
    "w+" : crear un archivo para lectura y escritura, se crea si no existe o se sobreescribe si existe.
    "r+b ó rb+" : Abre un archivo en modo binario para actualización (lectura y escritura).
    "rb" : Abre un archivo en modo binario para lectura.
    * fclose










Si vamos a trabajar con archivos binarios usamos la letra b así que los modos de acceso quedan “rb”, “wb”, “ab”, “rb+”, “wb+”, “ab+”.

Esta función sirve para poder cerrar un fichero que se ha abierto.
	int fclose (FILE *stream);
    */



int main(){
	printf("Leemos un archivo");
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
            printf("\nEl contenido del archivo de prueba es \n\n");
            while((caracter = fgetc(datos_archivo_entrada)) != EOF)
				{
				printf("%c",caracter);
				}
        }

  /*
   * Cuando ya no necesitemos trabajar mas con el archivo procedemos a cerrarlo
   */
  fclose(datos_archivo_entrada);


	printf( "\n\n\tFin intro \n\t\t¿Continuar?\n");
    getchar();
	printf("\n############################################################################\n");
// Ej 009_2
	printf("insertamos una linea en un archivo");

	char cadena[] = "Pablo Neruda\nPoema numero XX.\n\n";

	datos_archivo_entrada = fopen ( "prueba_2.txt", "r+" );//probar con w pero backupear el archivo
	rewind(datos_archivo_entrada);

											// Rebobinamos el archivo y llevamos el cursor al principio.
	fputs( cadena, datos_archivo_entrada);
	printf("\nal principio");
											// Ahora con fseek nos posicionamos donde querramos,
											// en este caso 300 bytes desde el inicio del archivo.
	fseek(datos_archivo_entrada, 300, SEEK_SET);
	fputs( "aqui estamos UTN", datos_archivo_entrada);
	printf("\ndespues de 300 bytes");
											// Se ubica a 200 bytes del final del archivo
	fseek(datos_archivo_entrada, 0, SEEK_END);

	 printf("\nIntrouce un texto al fichero: (fin) ");
	 while((caracter = getchar()) != '\n')
	{
			printf("%c", fputc(caracter, datos_archivo_entrada));
	}
	printf("\nal final");
											// Al final cerramos
	fclose(datos_archivo_entrada);

	printf( "\n\n\tFin intro \n\t\t¿Continuar?\n");
    getchar();
	printf("\n############################################################################\n");
// Ej 009_3
/*
   char name[3000];
   int idNum;

   FILE *datos_archivo_salida, *datos_archivo_entrada2;                 	// Declara apuntadores a archivo
   datos_archivo_entrada2 = fopen("prueba_2.txt","r");         				// Abre archivo de entrada
   fscanf(datos_archivo_entrada2,"%s %d",name,&idNum);  					// Lee datos de entrada
   datos_archivo_salida = fopen("prueba_3.txt","w");         				// Abre archivo de salida
   fprintf(datos_archivo_salida,"%d %s\n",idNum, name); 					// Escribe los datos
   fclose(datos_archivo_entrada2);
   fclose(datos_archivo_salida);           									// Cierra los archivos
	return 0;
}
