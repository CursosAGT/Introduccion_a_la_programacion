// Copyright 2019 Ariel H Garcia Traba <cursos.agt@gmail.com>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
void cambiar_retorno(char mi_string_7[11]);
void cambiar_mayusc (char mi_string_7[11]);
void cambiar_minusc (char mi_string_7[11]);


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
		printf("############################################################################\n");
		printf("##                                                                        ##\n");
		printf("##      Variables, Strings                                                ##\n");
		printf("##                                                                        ##\n");
		printf("############################################################################\n");
/*
• strlen(<cadena>):
 Devuelve la longitud de la cadena sin tomar en cuenta el caracter de final de cadena.
• strcpy(<cadena_destino>,  <cadena_origen>)  :
    Copia    el    contenido de  <cadena_origen> en <cadena_destino>.
• strcat(<cadena_destino>,  <cadena_origen>)  :
	Concatena  el  contenido de  <cadena_origen> al final de <cadena_destino>.
• strcmp(<cadena1>,  <cadena2>)  :
	Compara   las   dos   cadenas   y   devuelve   un   0   si   las   dos   cadenas   son   iguales,   un   numero   negativo   si   4 <cadena1>  es  menor  que  (precede  alfabeticamente  a)  <cadena2>  y  un  numero positivo (mayor que cero) si <cadena1> es mayor que <cadena2>.
            // devuelve un valor menor, igual o mayor que 0 segun si cadena1 es menor,
            // igual o mayor que cadena2, respectivamente.
• strchr(<cadena1>,  caracter) :
	Devuelve la posicion en memoria de la primer aparicion de caracter dentro de cadena
• strstr(<cadena1>,  <subcadena>):
	Devuelve la posicion en memoria de la primer aparicion de subcadena dentro de cadena

*/
//Ej 003_S_01

		char mi_string_1[6] = {"Ariel"};//  cantidad de caracteres mas  "\0" fin de string
		printf ("\n\tNombre de la constante: %s",mi_string_1);

	printf( "\n\n\tFin del ejercicio 003_S_01 \n\t\t¿Continuar?\n");
	getchar();fflush (stdin);
		printf("\n############################################################################\n");
//Ej 003_S_02

		char mi_string_2[11] ;//  cantidad de caracteres reservados mas  "\0" fin de string
		printf ("\n---------------------------  Entrada scanf---------------------------------\n");
		printf ("\n\tIngresa tu nombre con scanf :");
		scanf ("%s",mi_string_2);	//  ojo con los espacios en el string
		printf ("\n---------------------------  Salida scanf----------------------------------\n");
		printf ("\n\tcon scanf -\tBuenas noches ' %s ', como va el curso",mi_string_2);
		printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf ( "\nContinuamos..\n");getchar();fflush (stdin);
		printf ("\n---------------------------  Entrada gets----------------------------------\n");
		printf ("\n\tIngresa tu nombre con get : ");
		gets (mi_string_2);			//  ojo con el tamaño del string
		printf ("\n---------------------------  Salida gets-----------------------------------\n");
		printf ("\n\tcon gets -\tBuenas noches ' %s ', como va el curso",mi_string_2);
		printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf ( "\nContinuamos..\n");getchar();fflush (stdin);
		printf ("\n---------------------------  Entrada fgets---------------------------------\n");
		printf ("\n\tIngresa tu nombre con fget : ");
		fgets (mi_string_2,11,stdin);//  cantidad de caracteres mas  "\n" fin de string
		printf ("\n---------------------------  Salida fgets----------------------------------\n");
		printf ("Observar que bajo una linea------------!");
		printf ("\n\tcon fgets -\tBuenas noches ' %s ', como va el curso",mi_string_2);
		printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf ( "\nContinuamos..\n");getchar();fflush (stdin);
		printf ("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
;
	getchar();fflush (stdin);
		printf("\n############################################################################\n");
		printf("Vean que seria incorrecto leer este string mediante un puntero declarado , pero al que no se le ha reservado memoria:");
		char *puntero_nuevo_1;
		scanf("%s" , puntero_nuevo_1 );      // Incorrecto donde reservo o limito la cantidad de memoria????/
		printf("ya que la direccion contenida por puntero_nuevo_1 no ha sido inicializada aun con ningun valor valido.");
		printf("y no tiene maximo, Lo correcto en este caso seria");
		char *puntero_nuevo_2 ;
		puntero_nuevo_2 = (char *)malloc(128 * sizeof(char)) ;//<-----------------aqui asigno 128 bytes reservando memoria previamente a cargar el string.
		scanf("%s" , puntero_nuevo_2 );                           /* Correcto */
	printf( "\n\n\tFin del ejercicio 003_S_02 \n\t\t¿Continuar?\n");
	getchar();fflush (stdin);
		printf("\n############################################################################\n");
//Ej 003_S_03                    del ejercicio arrays 003_A_01
		int mi_array_1[] = {1,2,3,4};
		float mi_array_2[] ={3.1459,6.6742,299792458,6.6260693};
		char mi_array_3[4][25] = {"--","(10) × 10-11 N·m2/kg2","m/s","(11) × 10-34 J·s"};//  cantidad de caracteres mas  "\0" fin de string
		char mi_array_4[4][25] = {"Constante PY","Constante de gravitacion","Constante vel luz","Constante de Plank"};
		int contador = 0;

		for (contador = 0; contador < 4; contador++)
		{
			printf ("\nItem Nº: %i",mi_array_1[contador]);
			printf ("\n\tNombre de la constante: %s",mi_array_4[contador]);
			printf ("\n\tValor de la constante: %f",mi_array_2[contador]);
			printf ("   %s",mi_array_3[contador]);
		}
	printf( "\n\n\tFin del ejercicio 003_S_03 \n\t\t¿Continuar?\n");
	getchar();fflush (stdin);
		printf("\n############################################################################\n");
//Ej 003_S_04
/*

Caracteres ASCII de control
00NULL(caracter nulo)
01SOH(inicio encabezado)
02STX(inicio texto)
03ETX(fin de texto)
04EOT(fin transmision)
05ENQ(consulta)
06ACK(reconocimiento)
07BEL(timbre)
08BS(retroceso)
09HT(tab horizontal)
10LF(nueva linea)
11VT(tab vertical)
12FF(nueva pagina)
13CR(retorno de carro)
14SO(desplaza afuera)
15SI(desplaza adentro)
16DLE(esc.vinculo datos)
17DC1(control disp. 1)
18DC2(control disp. 2)
19DC3(control disp. 3)
20DC4(control disp. 4)
21NAK(conf. negativa)
22SYN(inactividad sinc)
23ETB(fin bloque trans)
24CAN(cancelar)
25EM(fin del medio)
26SUB(sustitucion)
27ESC(escape)
28FS(sep. archivos)
29GS(sep. grupos)
30RS(sep. registros)
31US(sep. unidades)
127DEL(suprimir)
Caracteres ASCII imprimibles
32espacio
33!
34"
35#
36$
37%
38&
39'
40(
41)
42*
43+
44,
45-
46.
47/
480
491
502
513
524
535
546
557
568
579
58:
59;
60<
61=
62>
63?
64@
65A
66B
67C
68D
69E
70F
71G
72H
73I
74J
75K
76L
77M
78N
79O
80P
81Q
82R
83S
84T
85U
86V
87W
88X
89Y
90Z
91[
92\
93]
94^
95_
96`
97a
98b
99c
100d
101e
102f
103g
104h
105i
106j
107k
108l
109m
110n
111o
112p
113q
114r
115s
116t
117u
118v
119w
120x
121y
122z
123{
124|
125}
126~
128Ç
129ü
130e
131â
132ä
133à
134å
135ç
136ê
137ë
138è
139ï
140î
141ì
142Ä
143Å
144e
145æ
146Æ
147ô
148ö
149ò
150û
151ù
152ÿ
153Ö
154Ü
155ø
156£
157Ø
158×
159ƒ
160a
161i
162o
163u
164ñ
165Ñ
166ª
167º
168¿
169®
170¬
171½
172¼
173¡
174«
175»
176░
177▒
178▓
179│
180┤
181a
182Â
183À
184©
185╣
186║
187╗
188╝
189¢
190¥
191┐
192└
193┴
194┬
195├
196─
197┼
198ã
199Ã
200╚
201╔
202╩
203╦
204╠
205═
206╬
207¤
208ð
209Ð
210Ê
211Ë
212È
213ı
214i
215Î
216Ï
217┘
218┌
219█
220▄
221¦
222Ì
223▀
224o
225ß
226Ô
227Ò
228õ
229Õ
230µ
231þ
232Þ
233u
234Û
235Ù
236ý
237Ý
238¯
239´
240≡
241±
242‗
243¾
244¶
245§
246÷
247¸
248°
249¨
250·
251¹
252³
253²
254■
255nbs
*/
		char caracter_1=58;		//
		char caracter_2=41;		//
		char caracter_3=65;		//A
		char caracter_4=114;	//r
		char caracter_5=105;	//i
		char caracter_6=101;	//e
		char caracter_7=108;	//l
		char caracter_8=234;	// ojo, no se usa
		char caracter_9=32;		//` `
		char caracter_10=33;	// !
		printf ("%c%c%c%c%c%c%c%c%c%c%c%c",caracter_1,caracter_2,caracter_9,caracter_3,caracter_4,caracter_5,caracter_6,caracter_7,caracter_9,caracter_10,caracter_10,caracter_10);
	printf( "\n\n\tFin del ejercicio 003_S_03 \n\t\t¿Continuar?\n");
	getchar();fflush (stdin);
		printf("\n############################################################################\n");

		char mi_string_3[9] = {"otorrino"};
		printf("\n\tNombre de la constante: %s ",mi_string_3);
		printf("\n-----------------------------------------------------------------------\n");
		strcat( mi_string_3, "laringolo" );
		printf("\n\tNombre de la constante: %sgo ",mi_string_3);
		printf("\n-----------------------------------------------------------------------\n");
		char mi_string_4[4] = {"gia"};
		strcat( mi_string_3, mi_string_4 );
		printf ("\n\tNombre de la constante: %s",mi_string_3);
	printf( "\n\n\tFin del ejercicio 003_S_04 \n\t\t¿Continuar?\n");
	getchar();fflush (stdin);
		printf("\n############################################################################\n");

//Ej 003_S_05
		int comp;
		char mi_string_5[11] ;//  cantidad de caracteres reservados mas  "\0" fin de string
		char mi_string_6[11] ;//  cantidad de caracteres reservados mas  "\0" fin de string
		printf("\n---------------------------  Comparamos cadenas ----------------------------\n");
		printf ("\n\tIngresa un primer string :");
		fflush (stdin);
		fgets (mi_string_5,11,stdin);//  cantidad de caracteres mas  "\n" fin de string
		printf ("\n\tIngresa un segundo string :");
		fflush (stdin);
		fgets (mi_string_6,11,stdin);//  cantidad de caracteres mas  "\n" fin de string
		comp = strcmp(mi_string_5,mi_string_6);
	//	printf ("%s %s %i\n",mi_string_5,mi_string_6,comp);
		if (comp == 0)
			{
				printf("\nSon iguales");
			}
		else
			{
				printf("\nSon diferentes");
			}
	printf( "\n\n\tFin del ejercicio 003_S_05 \n\t\t¿Continuar?\n");
	getchar();fflush (stdin);
		printf("\n############################################################################\n");


//Ej 003_S_06
		int cant_caracteres ;
		char mi_string_8[]="Este es un texto al azar";//  cantidad de caracteres reservados mas  "\0" fin de string
		printf("\n---------------------------  Entrada ---------------------------------\n");

		printf ("\n\tIngresa un string con mayusculas y minusculas :");
		cant_caracteres = strlen(mi_string_8);
		printf("\n---------------------------  Salida ----------------------------------\n");
		printf("\nOriginal");
		printf("\n%s",mi_string_8);

		for (contador = 0; contador < cant_caracteres; contador++)
		{
			if ((contador%2) == 0)
			{
				mi_string_8[contador] = tolower(mi_string_8[contador]);
			}
			else
			{
				mi_string_8[contador] = toupper(mi_string_8[contador]);
			}
		}
		printf("\nModificado");
		printf("\n%s",mi_string_8);
	printf( "\n\n\tFin del ejercicio 003_S_06 \n\t\t¿Continuar?\n");
	getchar();fflush (stdin);
		printf("\n############################################################################\n");
//Ej 003_S_07
		char mi_string_7[11];//  cantidad de caracteres reservados mas  "\0" fin de string
		printf("\n---------------------------  Cambiamos cadenas ----------------------------\n");
		printf ("\n\tIngresa un string con mayusculas y minusculas :");

		fgets (mi_string_7,11,stdin);//  cantidad de caracteres mas  "\n" fin de string
		printf("\nCadena original");
		printf("\n%s",mi_string_7);
		printf("<~~~~~~fin de linea");
		printf("\n-----------------");
		cambiar_retorno (mi_string_7);
		printf("\nCortamos la nueva linea o retorno de carro ");
		printf("\n%s",mi_string_7);
		printf("<~~~~~~fin de linea");
		printf("\n-----------------");
		cambiar_mayusc (mi_string_7);
		printf("\nTodo en mayusculas");
		printf("\n%s",mi_string_7);
		printf("\n-----------------");
		cambiar_minusc (mi_string_7);
		printf("\nTodo en minusculas");
		printf("\n%s",mi_string_7);
		printf("\n-----------------");
		printf("\nLongitud de la cadena");
		printf("\n%li",(strlen(mi_string_7)));
		printf("\n-----------------");
	printf( "\n\n\tFin del ejercicio 003_S_07 \n\t\t¿Continuar?\n");
	getchar();fflush (stdin);
		printf("\n############################################################################\n");
		printf("\n##     Este ejemplo no es el mejor, se deberian usar punteros,            ##\n");
		printf("\n##     pero para explicar el tema sin profundizar es correcto             ##\n");
		printf("\n##     proximamente veremos punteros                                      ##\n");
		printf("\n############################################################################\n");
		return (0);

}

void cambiar_retorno (char mi_string_7[11])
{
	int contador = 0;
	for (contador = 0; contador < 11; contador++)
	{
		if (mi_string_7[contador] == '\n')
		{
			mi_string_7[contador] = '\0';
		}
	}
}
void cambiar_mayusc (char mi_string_7[11])
{
	int contador = 0;
	for (contador = 0; contador < 11; contador++)
	{
	mi_string_7[contador] = toupper(mi_string_7[contador]);
	}
}
void cambiar_minusc (char mi_string_7[11])
{
	int contador = 0;
	for (contador = 0; contador < 11; contador++)
	{
	mi_string_7[contador] = tolower(mi_string_7[contador]);
	}
}
