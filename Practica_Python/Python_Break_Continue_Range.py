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
print("##         Unidad 10 - GIT Colaborativo -Pair Programming                 ##");
print("##            * Introducción a CVS y comparativa con SVN                  ##");
print("##            * Creando un repositorio con GIT, clonar, crear branches    ##");
print("##            * Borrar, guardar (stash), recuperar (pop)                  ##");
print("##            * Configuración de remote                                   ##");
print("##            * Configuración de Git avanzada                             ##");
print("##                                                                        ##");
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
print("##                    break  // continue // range                         ##");
print("##                                                                        ##");
print("############################################################################");
def limpiar():
    import os
    if os.name == 'nt':
        os.system('cls')
    else:
        os.system('clear')
print("Inicio ej007_1 - for continue / break /else ");
cadena_de_caracteres=" "
cont_de_a =0
cont_de_b =0
cont_de_c =0
otras_letras =0
contador_de_letras = 0
cadena_de_caracteres=str(input("Ingrese una frase dato_2 # al final "));
for letra in cadena_de_caracteres:
	if letra==" ":
		continue
	contador_de_letras = contador_de_letras + 1
	if letra=="#":
		print ("break");
		fin=True
		break
	if letra=="a":
		cont_de_a +=1
	elif letra=="b":
		cont_de_b +=1
	elif letra=="c":
		cont_de_c +=1
	else:
		otras_letras +=1
else:
	fin=False
print (str("hay "+str(contador_de_letras)+" letras en" + str(cadena_de_caracteres)));
print (str("hay "+str(cont_de_a)+" 'A' en" + str(cadena_de_caracteres)));
print (str("hay "+str(cont_de_b)+" 'B' en" + str(cadena_de_caracteres)));
print (str("hay "+str(cont_de_c)+" 'C' en" + str(cadena_de_caracteres)));
print (str("hay "+str(otras_letras)+" 'otras letras' en" + str(cadena_de_caracteres)));
if fin:
	print("el programa se bloqueo con #");
else:
	print("el programa llego al fin");
print (input("Fin ej008_1 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 008_2
Nombre_lista_1 = ["linea 1","linea 2","linea 3","linea 4","linea 5","linea 6","linea 7","linea 8","linea 9","linea 10"]
print("Inicio ej008_2");
for dato_1 in Nombre_lista_1:
  print(dato_1)
  if dato_1 == "linea 5":
    break
print (input("Fin ej008_1 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 008_2
print("Inicio ej008_2");
print('Exit the loop when dato_1 is "linea 5", but this time the break comes before the print:');
for dato_1 in Nombre_lista_1:
  if dato_1 == "linea 5":
    break
  print(dato_1)
print (input("Fin ej008_1 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 008_2
print("Inicio ej008_2");
print('The continue Statement');
print('With the continue statement we can stop the current iteration of the loop, and continue with the next:');
print('Do not print linea 5:');
for dato_1 in Nombre_lista_1:
	if dato_1 == "linea 5":
		print("hey UTN's aqui esta");
		continue
	print(dato_1)
print (input("Fin ej008_1 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 008_2
print("Inicio ej008_2");
print('The range() Function');
print('To loop through a set of code a specified number of times, we can use the range() function,');
print('The range() function returns a sequence of numbers, starting from 0 by default, and increments by 1 (by default), and ends at a specified number.');
print('Using the range() function:');
for dato_1 in range(6):
  print(dato_1)
print('Note that range(6) is not the values of 0 to 6, but the values 0 to 5.');
print (input("Fin ej008_1 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 008_2
print("Inicio ej008_2");
print('The range() function defaults to 0 as a starting value, however it is possible to specify the starting value by adding a parameter: range(2, 6), which means values from 2 to 6 (but not including 6):');
print('Using the start parameter:');
for dato_1 in range(2, 6):
  print(dato_1)
print (input("Fin ej008_1 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 008_2
print("Inicio ej008_2");
print('The range() function defaults to increment the sequence by 1, however it is possible to specify the increment value by adding a third parameter: range(2, 30, 3):');
print('Increment the sequence with 3 (default is 1):');
for dato_1 in range(2, 30, 3):
  print(dato_1)
print('Else in For Loop');
print('The else keyword in a for loop specifies a block of code to be executed when the loop is finished:');
print (input("Fin ej008_1 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 008_2
print("Inicio ej008_2");
print('Print all numbers from 0 to 5, and print a message when the loop has ended:');
for dato_1 in range(6):
  print(dato_1)
else:
  print("terminado")
print (input("Fin ej008_1 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 008_2
print("Inicio ej008_2");
print('Nested Loops');
print('A nested loop is a loop inside a loop.');
print('The "inner loop" will be executed one time for each iteration of the "outer loop":');
print("Print each adjective for every list:");
Nombre_lista_1 = ["linea 1","linea 2","linea 3","linea 4","linea 5","linea 6","linea 7","linea 8","linea 9","linea 10"]
Nombre_lista_2 = ["columna 1","columna 2","columna 3","columna 4","columna 5","columna 6","columna 7","columna 8","columna 9","columna 10"]
for dato_1 in Nombre_lista_1:
  for dato_2 in Nombre_lista_2:
    print(dato_1, dato_2);
print (input("Fin ej008_1 \n		continuar?"));
limpiar();
print("#########################################################");
