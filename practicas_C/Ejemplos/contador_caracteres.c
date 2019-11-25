#include <stdio.h>  /* getchar, putchar, EOF */


int separador (int ch)
{
    return (ch==' ') || (ch=='\t') || (ch=='\n');
}


int main ()
{   
  long contador_caracteres;
  long contador_palabras;
  long contador_lineas;
  int  actual;
  int  prev;

  // Inicializaci�n de los contadores

  contador_caracteres = 0;
  contador_palabras = 0;
  contador_lineas = 1;

  // Lectura de los datos de entrada

  prev   = ' ';
  actual = getchar();

  while (actual != EOF) {

      contador_caracteres ++;

      // �Fin de l�nea?

      if (actual=='\n')
          contador_lineas++;

      // �Comienzo de una nueva palabra?

      if (!separador(actual) && separador(prev))
          contador_palabras++;

      // Siguiente car�cter

      prev = actual;
      actual = getchar();
  }

  // Resultado

  printf("%ld caracteres\n", contador_caracteres);
  printf("%ld palabras\n", contador_palabras);
  printf("%ld l�neas\n", contador_lineas);

  return 0;
}
