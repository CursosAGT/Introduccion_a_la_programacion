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
print("############################################################################");
print("##                                                                        ##");
print("##                     Python tuples/Array Methods                        ##");
print("##                     ---------------------------                        ##");
print("##                                                                        ##");
print("##     Method    Description                                              ##");
print("##                                                                        ##");
print("##     count()   Returns the number of elements with the specified value  ##");
print("##                                                                        ##");
print("##     index()   Returns the index of the first element with the specified##");
print("##               value.Searches the tuple for a specified value and       ##");
print("##               returns the position of where it was found               ##");
print("##                                                                        ##");
print("############################################################################");
print("##                                                                        ##");
print("##                               Tuplas                                   ##");
print("##                                                                        ##");
print("############################################################################");
print("https://www.w3schools.com/python/python_ref_tuple.asp");
print("\nhttps://www.w3schools.com/python/python_tuples.asp");
print("#########################################################");
Nombre_tupla_1 = ["linea 1","linea 2","linea 3","linea 4","linea 5","linea 6","linea 7","linea 8","linea 9","linea 1"]
Nombre_lista_1 = (" ")
Nombre_tupla_2 = [" "]
# Ej 006_1
print("Inicio ej006_1 -  tupla a listas con tuple")
print ("valores tupla 1"+str(Nombre_tupla_1))
print ("valores lista 1"+str(Nombre_lista_1))
print ("paso los datos de mi tupla a mi lista")
Nombre_lista_1=tuple(Nombre_tupla_1)
print ("Nuevos valores lista 1"+str(Nombre_lista_1))
print (input("Fin ej006_1 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 006_2
print("Inicio ej006_2 -  lista a tuple con list")
print ("valores tupla 2"+str(Nombre_tupla_2))
print ("paso los datos de mi lista a mi tupla 2")
Nombre_tupla_2=list(Nombre_lista_1)
print ("Nuevos valores tupla 2"+str(Nombre_tupla_2))
print (input("Fin ej006_2 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 006_3
print("Inicio ej006_3 - posiciones") 
print (Nombre_tupla_1)
print ("posicion [1]  "+Nombre_tupla_1[1])
print ("posicion [5]  "+Nombre_tupla_1[5])
print ("posicion [7]  "+Nombre_tupla_1[7])
print ("posicion [0]  "+Nombre_tupla_1[0])
print ("posicion [9]  "+Nombre_tupla_1[9])
print (input("Fin ej006_3 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 006_4
print("Inicio ej006_4 - posiciones negativas") 
print (Nombre_tupla_1)
print ("posicion [-1]  "+Nombre_tupla_1[-1])
print ("posicion [-2]  "+Nombre_tupla_1[-2])
print ("posicion [-3]  "+Nombre_tupla_1[-9])
print (input("Fin ej006_4 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 006_5
print("Inicio ej006_5 - sectores o porsiones") 
print (Nombre_tupla_1)
print ("posicion [4 al 8]  "+str(Nombre_tupla_1[4:8]))
print ("posicion [0 al -2]  "+str(Nombre_tupla_1[0:-2]))
print ("posicion [-3 al 5]  "+str(Nombre_tupla_1[-3:5])+"error")
print (input("Fin ej006_5 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 006_6
print("Inicio ej006_6 - operadores varios") 
print (Nombre_tupla_1)
print ("cantidad de datos totales "+str(len(Nombre_tupla_1)))
print ("cantidad de datos 'ĺinea 1' es " +str(Nombre_tupla_1.count("linea 1")))
print (input("Fin ej006_6 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 006_7
print("Inicio ej006_7 - busco (si existe) un dato en la tupla")
print (Nombre_tupla_1)
print ("Busco si el dato 'linea 3' esta en mi tupla??")
print ("linea 3" in  Nombre_tupla_1)
print (input("Fin ej006_7 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 006_8
print("Inicio ej006_8 - busco (si existe) un dato en la tupla")
print ("Busco si el dato 'columna 3' esta en mi tupla??")
print ("viejo" in  Nombre_tupla_1)
print (input("Fin ej006_8 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 006_9
print("Inicio ej006_9 - Ubicar la posicion un dato en el index" )
print (Nombre_tupla_1)
print ("Ubicar la posicion de 'linea 3' en el index y es : ")
print (Nombre_tupla_1.index("linea 3"))
print (input("Fin ej006_9 \n		continuar?"));
limpiar();
"""
print("#########################################################");
# Ej 006_10
#print("Inicio ej006_10 ")
#print (input("Fin ej006_10 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 006_11
#print("Inicio ej006_11 ")
#print (input("Fin ej006_11 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 006_12
#print("Inicio ej006_12 ")
#print (input("Fin ej006_12 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 006_13
#print("Inicio ej006_13 ")
#print (input("Fin ej006_13 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 006_14
#print("Inicio ej006_14")
#print (input("Fin ej006_14"); print("")
"""
