#!/usr/bin/env python
# -*- coding: utf-8 -*-
# AGT
# Copyright 2019 Ariel H Garcia Traba <ariel.garcia.traba@gmail.com>

def limpiar():
    import os
    if os.name == 'nt':
        os.system('cls')
    else:
        os.system('clear')
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
print("##                           Bucles // for                                ##")
print("##                                                                        ##");
print("############################################################################");
print("Inicio ej005_1");
for i in range(5):
	print ("Valor "+str(i));
print (input("Fin ej005_1 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 005_2
print("Inicio ej005_2");
for i in range(5,20):
	print ("Valor "+str(i));
for i in range(5,20,4):
	print ("Valor "+str(i));
print (input("Fin ej005_2 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 005_3
print("Inicio ej005_3 - in Lista" );
for i in [1,2,3,4,5]:
	print ("valor de la lista "+str(i));
print (input("Fin ej005_3 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 005_4
print("Inicio ej005_4 - in II Lista");
for i in ["Facundo","Joaquin","Andrea","Ariel"]:
	print ("valor de la lista "+str(i));
print (input("Fin ej005_4 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 005_5
print("Inicio ej005_5");
for i in "Facundo@hotmail.com":
	print ("valor del string "+str(i));
print (input("Fin ej005_5 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 005_6
print("Inicio ej005_6");
arroba = False
for i in "Facundo@hotmail.com":
	
	print ("valor del string "+str(i));
	if str(i)=="@":
		arroba = True
if arroba==True:
	print ("tiene @ puede ser mail");
else:
	print ("No puede ser mail");
print (input("Fin ej005_6 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 005_7
print("Inicio ej005_7");
arroba = False
for i in "Facundo@hotmail.com":
	print ("valor del string "+str(i));
	if str(i)=="@":
		arroba = True
		break
if arroba==True:
	print ("tiene @ puede ser mail");
else:
	print ("No puede ser mail");
print (input("Fin ej005_7 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 005_8
print("Inicio ej005_8");
print ("verificar si tiene @ y como minimo un punto.");
print (input("Fin ej005_8 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 005_8
print("Inicio ej005_9");
print ("verificar si tiene mas de un @ y como minimo un punto.");
print (input("Fin ej005_9 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 005_8
print("Inicio ej005_10");
print ("verificar si tiene mas de un @ y como minimo un punto. y caracteres alfanumericos");
print (input("Fin ej005_10 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 005_10-2
print("Inicio ej005_10");
capitales = { "France":"Paris", "Netherlands":"Amsterdam", "Germany":"Berlin", "Switzerland":"Bern", "Austria":"Vienna"}
for pais in capitales:
	print("Aprendan: la capital de " + pais + " es " + capitales[pais])
