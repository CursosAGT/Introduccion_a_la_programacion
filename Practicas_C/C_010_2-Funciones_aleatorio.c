// Copyright 2020 Ariel H Garcia Traba <cursos.agt@gmail.com>
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
	printf("\n|       opcion 1         |");
	printf("\n+------------------------+");

srand(time(NULL));
int test = rand()%10;
printf ("\nEl numero aleatorio de 0 a 9: %d", test);
printf ("\nMas numeros aleatorios base 12 horario: %d, binario: %d, 0 a 100: %d\n",rand()%13,rand()%2,rand()%101) ;
printf("\nReglas de la ruleta:"

"\nEn la ruleta son posibles las apuestas múltiples durante una misma jugada, en la mesa del juego se encuentra una ruleta con 37 casillas numeradas del ‘0’ al ‘36"
"\n Esto permite que tengas más chances de ganar, pero al mismo tiempo limita la cantidad de ganancias que obtendrás."
"\n Por ejemplo, si apuestas a un color, tu pago será menor que si apuestas a un número y la bola cae allí."
"\nLos tipos de apuesta permitidos son:"
"\n\t\tFichas\t\tApuesta\t\tPremio\t\tSe juega a"
"\n\t\t1\t\tRojo/Negro\t\t1 x 1\n\tSe apuesta al color de número ganador, si será rojo o negro. Con esta apuesta se está jugando a 18 números ya que en la ruleta hay 18 números rojos y 18 números negros."
"\n\t\t2\t\tPar/Impar\t\t1 x 1\n\tSe apuesta a si el número donde cae la bola será par o impar. Con esta apuesta se está jugando a 18 números, bien a los 18 números pares o los 18 números impares que están en la ruleta."
"\n\t\t3\t\tPasa/Falta\t\t1 x 1\n\tSe trata de apostar si el número estará comprendido entre los números del 1 al 18 (falta) o entre los números del 19 al 36 (pasa). Por tanto, con esta apuesta se está jugando a 18 números."
"\n\t\t4\t\tDocena\t\t2 x 1\n\tSe trata de apostar en que docena estará el número ganador. El tapete se divide en 3 docenas, cada una de ellas abarca 12 números, por tanto al apostar por una docena se juega a 12 números."
"\n\t\t5\t\tColumna\t\t2 x 1\n\tSe trata de apostar en que de que columna será el número ganador. El tapete se divide en 3 columnas, cada una de ellas alberga 12 números. Por tanto, al apostar por una columna se juega a 12 números."
"\n\t\t6\t\tDos Docena\t\t0,5 x 1\n\tSe trata de apostar con una sola apuesta a dos docenas, esta apuesta solo se puede hacer para dos docenas contiguas, es decir, se puede apostar a las docenas 1 y 2, o a las docenas 2 y 3. Al apostar a 2 docenas se juega a 24 números."
"\n\t\t7\t\tDos Columnas\t\t0,5 x 1\n\tSe trata de apostar con una sola apuesta a dos columnas, esta apuesta solo se puede realizar para dos columnas contiguas. Por tanto, con la apuesta de dos columnas se podrá apostar a las columnas 1 y 2 o a las columnas 2 y 3. Se juega a 24 números."
"\n\t\t8\t\tSeisena\t\t5 x 1\n\tSe trata de apostar a 6 números con una sola apuesta. Los 6 números sobre los que se realiza este tipo de apuesta se encuentran en dos filas contiguas."
"\n\t\t9\t\tCuadro\t\t8 x 1\n\tSe trata de apostar a 4 números con una sola apuesta. Esta apuesta se realiza sobre 4 números que forman un cuadrado en el tapete."
"\n\t\t10, 11,12\t\tTransversal\t\t11 x 1\n\tSe trata de apostar a 3 números con una sola apuesta, con la apuesta se apuesta a los 3 número de una fila. Existen dos variaciones de esta apuesta, la apuesta transversal para apostar a los 3 números 0,1 y 2 y la apuesta transversal para apostar a los 3 números 0, 2 y 3."
"\n\t\t13,14\t\tCaballo\t\t17 x 1\n\tSe trata de apostar a 2 números con una sola apuesta, los 2 número deberán están contiguos en el tapete de manera horizontal o vertical."
"\n\t\t15\t\tPleno\t\t35 x 1\n\tSe trata de apostar a un solo número.");

printf("\n\nEjercicio"
	"\n\tHas un menu para los distintos tipos de jugadas"
	"\n\t\tNivel 1"			//-------nivel 1
	"\n\t\tRojo/Negro"		//-------nivel 1
	"\n\t\tPar/Impar"		//-------nivel 1
	"\n\t\tPasa/Falta"		//-------nivel 1
	"\n\t\tDocena"			//-------nivel 1
	"\n\t\tColumna"			//-------nivel 1
	"\n\t\tPleno"			//-------nivel 1
	"\n\t\t\tNivel 2"		//-------nivel 2
	"\n\t\t\tDos Docena"	//-------nivel  2
	"\n\t\t\tDos Columnas"	//-------nivel  2
	"\n\t\t\tSeisena"		//-------nivel  2
	"\n\t\t\tTransversal"	//-------nivel  2
	"\n\t\t\tCaballo"		//-------nivel  2
	"\n\tIngresa el / los numeros a los que apostar"
	"\n\tIngresa cuanto vas a apostar"
	"\n\tInicia el numero aleatorio y paga"
	"\n\tIndica si gano o no y cuanto");

printf("\n\nIndicaciones"
	"\n\tHas una funcion para los distintos tipos de jugadas"
	"\n\tdentro Ingresa el / los numeros ya que un pleno solo ingresa 1 valor numerico los que apostar,"
	"\n\to ingresa R o N con getchar() para color o la docena (1, 2 o 3), etc."
	"\n\t...."	);

}
