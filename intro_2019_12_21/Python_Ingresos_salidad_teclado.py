#!/usr/bin/env python
# -*- coding: utf-8 -*-
# AGT
# Copyright 2019 Ariel H Garcia Traba <ariel.garcia.traba@gmail.com>
#
print("############################################################################");
print("##                                                                        ##");
print("##      Unidad 1 -¿Qué es Python?                                         ##");
print("##            * Instalación y configuración                               ##");
print("##            * Errores sintácticos y lógicos                             ##");
print("##            * Programación secuencial                                   ##");
print("##            * Estructuras condicionales simples, compuestas y anidadas  ##");
print("##            * Estructuras repetitivas                                   ##");
print("##                                                                        ##");
print("##      Unidad 2 - Variables, Listas                                      ##");
print("##            * Tipos de variables                                        ##");
print("##            * Procesamiento de cadenas                                  ##");
print("##            * Listas                                                    ##");
print("##            * Diccionarios                                              ##");
print("##                                                                        ##");
print("##      Unidad 3 - Funciones                                              ##");
print("##            * Parámetros                                                ##");
print("##            * Retorno de datos                                          ##");
print("##            * Return de listas                                          ##");
print("##            * Parámetros con valor por defecto                          ##");
print("##                                                                        ##");
print("##      Unidad 4 - Listas, Tuplas y Diccionarios                          ##");
print("##         Listas                                                         ##");
print("##            * Índices                                                   ##");
print("##            * Recorrer listas                                           ##");
print("##         Tuplas                                                         ##");
print("##            * Índices                                                   ##");
print("##            * Recorrer Tuplas                                           ##");
print("##         Diccionarios                                                   ##");
print("##            * Funcionamiento de diccionarios                            ##");
print("##            * Estructuras tipo JSON                                     ##");
print("##                                                                        ##");
print("##         Unidad 5 - MySQL, Parte 1                                      ##");
print("##            * INSERT, UPDATE, DELETE, SELECT                            ##");
print("##            * FECHAS Y HORAS                                            ##");
print("##            * %LIKE%                                                    ##");
print("##            * JOIN                                                      ##");
print("##                                                                        ##");
print("##         Unidad 6 - MySQL, Parte 2                                      ##");
print("##            * MySQL en Python                                           ##");
print("##            * Cursor y verificación de consultas                        ##");
print("##            * Manejo de errores                                         ##");
print("##                                                                        ##");
print("##         Unidad 7 - Fechas, Horas, Archivos                             ##");
print("##            * Modulo time, datetime                                     ##");
print("##            * Manejo de fechas y horas                                  ##");
print("##            * Operaciones con archivos                                  ##");
print("##                                                                        ##");
print("##         Unidad 8 - OPEN CV                                             ##");
print("##            * Procesamiento de imágenes en OpenCV                       ##");
print("##            * Detección y descripción de imágenes                       ##");
print("##            * Detección de objetos                                      ##");
print("##                                                                        ##");
print("##         Unidad 9 - Programación de eventos                             ##");
print("##            * Módulo sched                                              ##");
print("##            * Declaración de programadores                              ##");
print("##            * Programar eventos y poner en marcha el programador        ##");
print("##            * Programación de eventos considerando prioridades          ##");
print("##            * Cancelación de eventos                                    ##");
print("##                                                                        ##");
print("##         Unidad 10 - GIT Colaborativo -Pair Programming                 ##");#print("https://www.w3schools.in/python-tutorial/gui-programming/")
print("##            * Introducción a CVS y comparativa con SVN                  ##");
print("##            * Creando un repositorio con GIT, clonar, crear branches    ##");
print("##            * Borrar, guardar (stash), recuperar (pop)                  ##");
print("##            * Configuración de remote                                   ##");
print("##            * Configuración de Git avanzada                             ##");
print("##                                                                        ##");
print("############################################################################");
print("############################################################################");
print("##                                                                        ##");
print("##      Unidad 1 -¿Qué es Python?                                         ##");
print("##            * Instalación y configuración                               ##");
print("##            * Errores sintácticos y lógicos                             ##");
print("##            * Programación secuencial                                   ##");
print("##            * Estructuras condicionales simples, compuestas y anidadas  ##");
print("##            * Estructuras repetitivas                                   ##");
print("##                                                                        ##");
print("############################################################################");     
print("##                                                                        ##");
print("##                      Ingreso - salida de datos                         ##");
print("##                                                                        ##");
print("############################################################################");
def limpiar():
    import os
    if os.name == 'nt':
        os.system('cls')
    else:
        os.system('clear')
print("Inicio ej 002_1 - ingreso de datos por teclado");
nota_alumno_1 = int(input("Ingreso la nota del 1er parcial :"));
nota_alumno_2 = int(input("Ingreso la nota del 2d0 parcial :"));
print ("1er parcial : "+str(nota_alumno_1));
print ("2do parcial : "+str(nota_alumno_2));
print ("promedio : "+str((nota_alumno_1+nota_alumno_2)/2));
print (input("Fin ej 002_1 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 002_2
valor1=0,1
valor2=0,1
valor1=float(input("valor de la mercaderia 1 : "));
valor2=float(input("valor de la mercaderia 2 : "));

resultado_suma= valor1+valor2
resultado_resta=valor1-valor2
resultado_multiplica=valor1*valor2
resultado_divide=valor1/valor2

print ("la suma de los valores es "+str(resultado_suma)+" pesos");
print ("la devolucion genera una resta cuyo saldo es de "+str(resultado_resta)+" pesos");
print ("la multiplicacion de ambos valores es de " +str(resultado_multiplica)+" pesos", end=" ");
print (" y la deivion es de "+str(resultado_divide)+" aunque esto no sirve para nada");
print (input("Fin ej 002_2 \n		continuar?"));

# Ej 002_3
print("Inicio ej 002_3");
edad=int(input("Ingere su edad : "));
if edad<0:
	print("error");
if edad<=2:
	print("bebe");
if edad<=10:
	print("Chico");
if edad<=15:
	print("pavo");
if edad<=20:
	print("Ni ni");
if edad<=30:
	print("A laburar");
if edad>=40:
	print("te crece la panza y se cae todo, hasta el pelo");
print (input("Fin ej 002_3 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 002_4
print("Inicio ej 002_4");
print ("rehacer ej 002_03 con parametros de '>'");
print (input("Fin ej 002_4 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 002_5
valoracion="aprobado"
print("Inicio ej 002_5 - multiples condiciones en multiples lineas");
nota_alumno_1 = int(input("Ingreso la nota del 1er parcial :"));
nota_alumno_2 = int(input("Ingreso la nota del 2d0 parcial :"));
def evaluacion(nota1,nota2):
	valoracion="aprobado"
	if nota1<5 and nota2<5:
		valoracion="final obligatorio"
	elif nota1<5 and nota2>=5:
		valoracion="RECUPREA 1er parcial"
	elif nota1>=5 and nota2<5:
		valoracion="RECUPREA 2do parcial"
	elif nota1>=7 and nota2>=7:
		valoracion="Aprobado sin final"
	return valoracion
print(evaluacion((nota_alumno_1),(nota_alumno_2)));
print("promedio : "+str((nota_alumno_1+nota_alumno_2)/2));
print (input("Fin ej 002_5 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 002_6
Edad_alumno = 0
valoracion="ok"
print("Inicio ej 002_6 - condicion maximos y minimos en una linea (concatenados)");
Edad_alumno = int(input("Ingreso la edad del alumno :"));
print (Edad_alumno);
if 0<Edad_alumno<100:
	valoracion="ok"
else:
	valoracion="Error"
print (valoracion);
print (input("Fin ej 002_6 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 002_7
print("Inicio ej 002_7 - multiples condiciones en una linea (concatenados)");
nota_1 = int(input("Ingreso la nota del 1er bimestre :"));
nota_2 = int(input("Ingreso la nota del 2er bimestre :"));
nota_3 = int(input("Ingreso la nota del 3er bimestre :"));
nota_4 = int(input("Ingreso la nota del 4er bimestre :"));
if nota_1<nota_2<nota_3<nota_4:
	valoracion="MEJORANDO"
elif nota_1>nota_2>nota_3>nota_4:
	valoracion="DE MAL EN PEOR"
else:
	valoracion="Maso"	
print (valoracion);
print (input("Fin ej 002_7 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 002_8
print("Inicio ej 002_8 - multiples condiciones en una linea (concatenados)");
print (" el ej 002_7  con arreglos por notas");
print ("					<0 - out");
print ("				entre	0  y <4  - ");
print ("				entre	4  y <6  - ");
print ("				entre	6  y <8  - ");
print ("				entre	8  y <10  - ");
print ("					>10 - out");
print (input("Fin ej 002_8 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 002_9
print("Inicio ej 002_9 - isdigit ");
print("isalnum()	Returns true if string has at least 1 character and all characters are alphanumeric and false otherwise.");
print("isalpha()	Returns true if string has at least 1 character and all characters are alphabetic and false otherwise.");
print("isdigit()	Returns true if string contains only digits and false otherwise.");
print("islower()	Returns true if string has at least 1 cased character and all cased characters are in lowercase and false otherwise.");
print("isnumeric()	Returns true if a unicode string contains only numeric characters and false otherwise.");
print("leer\nhttp://pyspanishdoc.sourceforge.net/lib/string-methods.html");
texto_en_memoria="1973"
print("texto_en_memoria : "+str(texto_en_memoria));
print("isalnum : "+str(texto_en_memoria.isalnum()));
print("---------------------------------------------------------------------");
print("isalpha : "+str(texto_en_memoria.isalpha()));
print("---------------------------------------------------------------------");
print("isdigit : "+str(texto_en_memoria.isdigit()));
print("---------------------------------------------------------------------");
texto_en_memoria="arribaUTN"
print("texto_en_memoria : "+str(texto_en_memoria));
print("isalnum : "+str(texto_en_memoria.isalnum()));
print("---------------------------------------------------------------------");
print("isalpha : "+str(texto_en_memoria.isalpha()));
print("---------------------------------------------------------------------");
print("isdigit : "+str(texto_en_memoria.isdigit()));
print("---------------------------------------------------------------------");
texto_en_memoria="Arielnacioen1973"
print("texto_en_memoria : "+str(texto_en_memoria));
print("isalnum : "+str(texto_en_memoria.isalnum()));
print("---------------------------------------------------------------------");
print("isalpha : "+str(texto_en_memoria.isalpha()));
print("---------------------------------------------------------------------");
print("isdigit : "+str(texto_en_memoria.isdigit()));
print("---------------------------------------------------------------------");
print (input("Fin ej 002_9 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 002_9
#print("Inicio ej 002_9 -");

