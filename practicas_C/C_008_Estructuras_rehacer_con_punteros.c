// Copyright 2019 Ariel H Garcia Traba <cursos.agt@gmail.com>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#define Cant_alumnos 2

// ver https://www.youtube.com/watch?v=f6aK9QL-fdA&list=PLw8RQJQ8K1ySN6bVHYEpDoh-CKVkL_uOF&index=34			
typedef struct{
				char Nombre[11];
				char Apellido[11];
				char Curso[11];				
				float Lengua;
				float Matematica;
				float Fisica;
				float Quimica;
				float Promedio;
				}notas;
void ingresar_notas (notas *notas_examen);
void salida_boletines (notas *notas_examen);
void retocar_strings(char mi_cadena[11]);
int main()
{
	notas notas_examen[Cant_alumnos];
	printf ("\nIngreso de datos");
	ingresar_notas (&notas_examen);//<--------------se van a mover datos por intermedio de punteros
	system("clear");
	printf ("\nBoletines");
	salida_boletines (&notas_examen);//<--------------se van a mover datos por intermedio de punteros

	printf( "\n\tContinuar: (S/N)\n");
	getchar();
//	system("clear");
	return (0);
}

void ingresar_notas (notas *notas_examen)// notas examen modifica los valores porque es puntero
{
	char Nombre_temporaria[11];
	char Apellido_temporaria[11];
	char Curso_temporaria[11];	
	float Lengua_temporaria;
	float Matematica_temporaria;
	float Fisica_temporaria;
	float Quimica_temporaria;
	float Promedio_temporaria;
	for (int contador=0; contador < Cant_alumnos ; contador++)
	{
		fflush (stdin);		
		printf("\nItem Nº %i : ok?",contador+1);		getchar();
		printf("\nIngresa el Curso del alumno :");
		fflush (stdin);
		fgets(Curso_temporaria,11,stdin);
		retocar_strings (Curso_temporaria);
		strcpy(notas_examen[contador].Curso,  Curso_temporaria);

		printf("\nIngresa el Apellido del alumno :");
		fflush (stdin);
		fgets(Nombre_temporaria,11,stdin);
		retocar_strings (Nombre_temporaria);
		strcpy(notas_examen[contador].Nombre,  Nombre_temporaria);

		fgets(notas_examen[contador].Apellido,11,stdin);
		printf("\nIngresa el Nombre del alumno :");
		fflush (stdin);
		fgets(Apellido_temporaria,11,stdin);
		retocar_strings (Apellido_temporaria);
		strcpy(notas_examen[contador].Apellido, Apellido_temporaria);
		
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		printf("\nIngresa la nota de Lengua :");
		fflush (stdin);
		scanf("%f",&Lengua_temporaria);
		notas_examen[contador].Lengua= Lengua_temporaria;
		
		printf("\nIngresa la nota de Matematica :");
		fflush (stdin);
		scanf("%f",&Matematica_temporaria);
		notas_examen[contador].Matematica= Matematica_temporaria;
		printf("\nIngresa la nota de Fisica :");
		fflush (stdin);
		
		scanf("%f",&Fisica_temporaria);
		notas_examen[contador].Fisica= Fisica_temporaria;
		printf("\nIngresa la nota de Quimica :");
		fflush (stdin);
		scanf("%f",&Quimica_temporaria );
		notas_examen[contador].Quimica =Quimica_temporaria;
		Promedio_temporaria=(Lengua_temporaria+Matematica_temporaria+Fisica_temporaria+Quimica_temporaria)/4;
		notas_examen[contador].Promedio = Promedio_temporaria;
//		printf("\nNota de Promedio : %.2f",Promedio_temporaria);
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		
	}
}
void salida_boletines (notas *notas_examen)// notas examen modifica los valores porque es puntero
{
	for (int contador=0; contador < Cant_alumnos ; contador++)
	{
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		printf("\nItem Nº %i :",contador+1);
		printf("\nCurso %s del alumno %s %s",notas_examen[contador].Curso,notas_examen[contador].Nombre,notas_examen[contador].Apellido);
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		printf("\nNota de Lengua :\t%.2f",notas_examen[contador].Lengua);
		printf("\nNota de Matematica :\t%.2f",notas_examen[contador].Matematica);
		printf("\nNota de Fisica :\t%.2f",notas_examen[contador].Fisica);
		printf("\nNota de Quimica :\t%.2f",notas_examen[contador].Quimica);
		printf("\nPromedio :\t%.2f",notas_examen[contador].Promedio);
		printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		
	}
}
void retocar_strings (char mi_cadena[11])
{
	for (int contador = 0; contador < 11; contador++)
	{
		if (mi_cadena[contador] == '\n')
		{
			mi_cadena[contador] = '\0';
		}
		if (mi_cadena[contador-1] != ' ')
		{
			mi_cadena[contador] = tolower(mi_cadena[contador]);
		}
		else
		{
			mi_cadena[contador] = toupper(mi_cadena[contador]);
		}
	}
	mi_cadena[0] = toupper(mi_cadena[0]);
}
