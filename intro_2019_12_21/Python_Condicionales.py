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
print("##                           Condicionales                                ##")
print("##                                                                        ##");
print("############################################################################");
def limpiar():
    import os
    if os.name == 'nt':
        os.system('cls')
    else:
        os.system('clear')
dato = [99, 25, 50, 5];
print (dato)
print("Ejemplo de operador de comparación Igual:");

if (dato[0] == dato[1]):
    print ("'dato[0]' y 'dato[1]' son iguales.");
else:
    print ("'dato[0]' y 'dato[1]' no son iguales.");

print("Ejemplo de operador de comparación Distinto:");

if (dato[0] != dato[1]):
    print ("'dato[0]' y 'dato[1]' son distintas.");
else:
    print ("'dato[0]' y 'dato[1]' no son distintas.");

print("Ejemplo de operador de comparación Menor que:");

if (dato[0] < dato[1]):
    print ("'dato[0]' es menor que 'dato[1]'.");
else:
    print ("'dato[0]' no es menor que 'dato[1]'.");

print("Ejemplo de operador de comparación Mayor que:");

if (dato[0] > dato[1]):
    print ("'dato[0]' es mayor que 'dato[1]'.");
else:
    print ("'dato[0]' no es mayor que 'dato[1]'.");

print("Ejemplo de operador de comparación Menor o igual que:");

if (dato[2] <= dato[3]):
    print ("'dato[2]' es menor o igual que 'dato[3]'.");
else:
    print ("'dato[2]' no es menor o igual que 'dato[3]'.");

print("Ejemplo de operador de comparación Mayor o igual que:");

if (dato[3] >= dato[2]):
    print ("'dato[3]' es mayor o igual que 'dato[2]'.");
else:
    print ("'dato[3]' no es mayor o igual que 'dato[2]'.");


if ((dato[0] >= dato[1])) or ((dato[2] >= dato[3])):
    print ("(dato[0] >= dato[1])) or ((dato[2] >= dato[3]).");

if ((dato[0] >= dato[1])) and ((dato[2] >= dato[3])):
    print ("(dato[0] >= dato[1])) and ((dato[2] >= dato[3]).");

if ((dato[0] >= dato[1])) != ((dato[2] >= dato[3])):
    print ("(dato[0] >= dato[1])) != ((dato[2] >= dato[3]).");
else:
	print ("NO  (dato[0] >= dato[1])) != ((dato[2] >= dato[3]).");

if not ((dato[0] <= dato[1])):
    print ("NOT (dato[0] <= dato[1])).");
else:
	print ("(dato[0] <= dato[1]))") 


var = int(input ("ingrese un numero : "))
if var not in dato:
    print (f" {var} no esta en la lista de datos :{dato}")
else:
    print (f" {var} no esta en la lista de datos :{dato}")

print("Inicio ej003_1 - multiples condiciones en multiples lineas");
nota_alumno = int(input("Ingreso la nota :"));
if nota_alumno<1:
	valoracion="ir a particular - obligatorio"
elif nota_alumno<=5:
	valoracion="mucha ayuda"
elif nota_alumno<=7:
	valoracion="va bien"
elif nota_alumno<=9:
	valoracion="Muy bien"
elif nota_alumno<=10:
	valoracion="Exelente"
else:
	valoracion="Error al ingresar datos"
print(valoracion);
print (input("Fin ej003_1 \n		continuar?"));
limpiar()
print("#########################################################");
# Ej 003_3
Edad_alumno=0
print("Inicio ej003_3 - condicion maximos y minimos en una linea (concatenados)");
Edad_alumno=int(input("Ingreso la edad del alumno :"));
print (Edad_alumno);
if 0<Edad_alumno<100:
	valoracion="ok"
else:
	valoracion="Error"
print (valoracion);
print (input("Fin ej003_3 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 003_4
print("Inicio ej003_4 - multiples condiciones en una linea (concatenados)");
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
print (input("Fin ej003_4 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 003_5
import math
print("Inicio ej003_5 - raiz cuadrada ");
valor=0
valor=int(input("Ingrese numero para sacar raiz cuadrada:"));
if valor>0:
	resultado = math.sqrt(valor);
	print ("la raiz cuadrada de :"+str(valor)+" son los nomeros Reales: + -"+str(resultado));
elif valor<0:
	resultado = math.sqrt(abs(valor));
	print ("la raiz cuadrada de :"+str(valor)+" es un numero Imaginario : + -"+str(resultado)+" i donde i");
print (input("Fin ej003_5 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 003_6
print("Inicio ej003_6 - raiz cuadrada ");
print("solicionar 0	en raiz");
print (input("Fin ej003_6 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 003_7
print("Inicio ej003_7 - multiples condiciones en multiples lineas");
nota_alumno_1 = int(input("Ingreso la nota del 1er parcial :"));
nota_alumno_2 = int(input("Ingreso la nota del 2d0 parcial :"));
def evaluacion(nota1,nota2):#          metodo(clase) o funcion
	print (nota1);
	print (nota2);
	valoracion="aprobado"
	if nota1<5 and nota2<5:
		valoracion="final obligatorio"
	elif nota1<5 and nota2>=5:
		valoracion="RECUPREA 1er parcial"
	elif nota1>=5 and nota2<5:
		valoracion="RECUPREA 2do parcial"
	elif 10>=nota1>=7 and 10>=nota2>=7:
		valoracion="Aprobado sin final"
	elif nota1>10 or nota2>10:
		valoracion="error al cargar los datos"
	return valoracion
print(evaluacion(nota_alumno_1,nota_alumno_2));
print("promedio : "+str((nota_alumno_1+nota_alumno_2)/2));
print (input("Fin ej003_7 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 003_8
valoracion="aprobado"
text_a=" "
text_b=" "
print("Inicio ej003_5 - condicionales string");
texto_a = str(input("escriba 2 veces la letra 'A'"));
texto_b = str(input("escriba 4 veces la letra 'b'"));
if text_a=="AA":
	print ("Ok primera parte");
if text_b=="bbbb":
	print ("Ok segunda parte");
print (input("Fin ej003_8 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 003_9
print("Inicio ej003_9 - condicionales string");
text_a=texto_a.upper
text_b=texto_a.lower
print (input("Fin ej003_9 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 003_10
print("Inicio ej003_10 - condicionales string");
nombre = " "
nombre = str(input("Cual es su gracia? :) "));
if nombre==("Ariel","Joaquin","Andrea","Facundo"):
	print("yo te conozco "+str(nombre));
print("Un placer " + nombre + "!");
Edad = input("Tu edad? ");
print("Datos " + str(Edad) + " Años, " + nombre + "!");
print (input("Fin ej003_10 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 003_11
print("Inicio ej003_11 - lista");

jugadores = ['Batalla', 'Driussi', 'Casco', 'Alario', 'Pity', 'Rojas', 'Ponzio', 'Alonso']
 
print(jugadores)
 
# Para evitar un error con el método remove()
# chequeamos la existencia del ítem antes de
# intentar eliminarlo de la lista.
if 'Maidana' in jugadores:
    jugadores.remove('Maidana')
else:
    print('Maidana no está en la lista de jugadores.')
 
if 'Driussi' in jugadores:
    jugadores.remove('Driussi')
else:
    print('Driussi no está en la lista de jugadores.')
 
print(jugadores)
jugadores.reverse()
print(jugadores)
jugadores.clear()

print(jugadores)
print (input("Fin ej003_11 \n		continuar?"));
limpiar()

cadena = 'Python'											# asigna cadena a variable
lista = [1, 2, 3, 4, 5]										# declara lista
if 'y' in cadena: print('“y” está en “Python”') 			# contiene
if 6 not in lista: print('6 no está en la lista')			# no contiene
if 'abcabc' is 'abc' * 2: print('Son iguales')				# son iguales
