// Copyright 2019 Ariel H Garcia Traba <cursos.agt@gmail.com>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
/*
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
				printf("##      Estructuras de Variables                                          ##\n");
				printf("##                                                                        ##\n");
				printf("############################################################################\n");
*/

#include <stdio.h>
#include <string.h>

/* creamos nuestra estructura con datos similares */
struct infopersona
{
	char direccion[25];
	char ciudad[20];
	char provincia[20];
	long int codigo_postal;
}; /* las estructuras necesitan punto y coma (;) al final */

/* creamos nuestra estructura empleado */
struct empleado
{
	char nombre_empleado[25];
	/* agregamos la estructura infopersona
	 * con nombre direcc_empleado
	 */
	struct infopersona direcc_empleado;
	double salario;
}; /* las estructuras necesitan punto y coma (;) al final */

/* creamos nuestra estructura cliente */
struct cliente
{
	char nombre_cliente[25];
	/* agregamos la estructura infopersona
	 * con nombre direcc_cliente
	 */
	struct infopersona direcc_cliente;
	double saldo;
}; /* las estructuras necesitan punto y coma (;) al final */

int main(void)
{
	/* creamos un nuevo cliente  */
	struct cliente MiCliente;

	/*inicializamos un par de datos de Micliente */
	strcpy(MiCliente.nombre_cliente,"Jose Antonio");
	strcpy(MiCliente.direcc_cliente.direccion, "Altos del Cielo");
	/* notese que se agrega direcc_cliente haciendo referencia
	 * a la estructura infopersona por el dato direccion
	 */

	/* imprimimos los datos */
	printf("\n Cliente: ");
	printf("\n Nombre: %s", MiCliente.nombre_cliente);
	/* notese la forma de hacer referencia al dato */
	printf("\n Direccion: %s", MiCliente.direcc_cliente.direccion);

	/* creamos un nuevo empleado  */
	struct empleado MiEmpleado;

	/*inicializamos un par de datos de MiEmplado */
	strcpy(MiEmpleado.nombre_empleado,"Miguel Angel");
	strcpy(MiEmpleado.direcc_empleado.ciudad,"Madrid");
	/* para hacer referencia a ciudad de la estructura infopersona
	 * utilizamos direcc_empleado que es una estructura anidada
	 */

	/* imprimimos los datos */
	printf("\n");
	printf("\n Empleado: ");
	printf("\n Nombre: %s", MiEmpleado.nombre_empleado);
	/* notese la forma de hacer referencia al dato */
	printf("\n Ciudad: %s", MiEmpleado.direcc_empleado.ciudad);

	return 0;
}
