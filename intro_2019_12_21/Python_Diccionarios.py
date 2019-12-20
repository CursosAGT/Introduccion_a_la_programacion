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
print("##                      Python List/Array Methods                         ##");
print("##                     ---------------------------                        ##");
print("##                                                                        ##");
print("##     Method    Description                                              ##");
print("##                                                                        ##");
print("##     clear()   Removes all the elements from the dictionary             ##");
print("##     copy()    Returns a copy of the dictionary                         ##");
print("##     fromkeys()Returns a dictionary with the specified keys and values  ##");
print("##     get()     Returns the value of the specified key                   ##");
print("##     items()   Returns a list containing a tuple for each key value pair##");
print("##     keys()    Returns a list containing the dictionary's keys          ##");
print("##     pop()     Removes the element at the specified position            ##");
print("##     popitem() Removes the last inserted key-value pair                 ##");
print("##     reverse() Reverses the order of the dictionary                     ##");
print("##     setdefault() Returns the value of the specified key. If the key    ##");
print("##               does not exist: insert the key, with the specified value ##");
print("##     update()  Updates the dictionary with the specified key-value pairs##");
print("##     values()  Returns a list of all the values in the dictionary       ##");
print("##                                                                        ##");
print("############################################################################");
print("##                                                                        ##");
print("##                             Diccionarios                               ##");
print("##                                                                        ##");
print("############################################################################");
print("https://www.w3schools.com/python/python_ref_dictionary.asp");
print("nhttps://www.w3schools.com/python/python_dictionaries.asp");
print("https://python-para-impacientes.blogspot.com/2014/01/cadenas-listas-tuplas-diccionarios-y.html");
print("""
Diccionarios o matrices asociativas
Los diccionarios son objetos que contienen una lista de parejas de elementos.
De cada pareja un elemento es la clave, que no puede repetirse, y, el otro, un valor asociado.
La clave que se utiliza para acceder al valor tiene que ser un dato inmutable como una cadena,
El valor puede ser un número, una cadena, un valor lógico (True/False), una lista o una tupla.
Los pares clave-valor están separados por dos puntos, las parejas por comas y todo el conjunto se encierra entre llaves.
""")


Nombre_diccionario_1 = {"clave 1":"dato_asociado 1","clave 2":"dato_asociado 2","clave 3":"dato_asociado 3","clave 4":"dato_asociado 4","clave 5":"dato_asociado 5","clave 6":"dato_asociado 6","clave 7":"dato_asociado 7","clave 8":"dato_asociado 8","clave 9":"dato_asociado 9","clave 10":"dato_asociado 10"}
Nombre_tupla_1 = ["linea 1","linea 2","linea 3","linea 4","linea 5","linea 6","linea 7","linea 8","linea 9","linea 1"]
Nombre_tupla_2 = ["columna 1","columna 2","columna 3","columna 4","columna 5","columna 6","columna 7","columna 8","columna 9","columna 10"]

print("Inicio ej007_1")
print (Nombre_diccionario_1)
print ("clave 2  "+Nombre_diccionario_1["clave 2"])
print ("clave 6  "+Nombre_diccionario_1["clave 6"])
print ("clave 5  "+Nombre_diccionario_1["clave 5"])
print ("clave 9  "+Nombre_diccionario_1["clave 9"])
print ("clave 1  "+Nombre_diccionario_1["clave 1"])
print (input("Fin ej007_1 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 007_2
print("Inicio ej007_2 - Agregar")
print (Nombre_diccionario_1)
print ("Agrego un conjunto en la posicion FINAL")
Nombre_diccionario_1["clave 11"]="dato_asociado 11"
print (Nombre_diccionario_1)
print (input("Fin ej007_2 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 007_3
print("Inicio ej007_3 - borrar")
print (Nombre_diccionario_1)
print ("delEteo o borro el dato 'clave 8'")
del Nombre_diccionario_1["clave 8"]
print (Nombre_diccionario_1)
print (input("Fin ej007_3 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 007_4
print("Inicio ej007_4 - reemplazar")
print (Nombre_diccionario_1)
print ("cambio el dato asociado a la clave 9")
Nombre_diccionario_1["clave 9"]="dato_asociado 999"
print (Nombre_diccionario_1)
print (input("Fin ej007_4 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 007_5
print("Inicio ej007_5 - de tuplas a diccionrios")
print ("valores tupla 1"+str(Nombre_tupla_1))
print ("valores tupla 2"+str(Nombre_tupla_2))
Nombre_diccionario_3 = {}
Nombre_diccionario_2 = {Nombre_tupla_1[0]:Nombre_tupla_2[0],Nombre_tupla_1[1]:Nombre_tupla_2[1],Nombre_tupla_1[2]:Nombre_tupla_2[2],Nombre_tupla_1[3]:Nombre_tupla_2[3],Nombre_tupla_1[4]:Nombre_tupla_2[4],Nombre_tupla_1[5]:Nombre_tupla_2[5],Nombre_tupla_1[6]:Nombre_tupla_2[6],Nombre_tupla_1[7]:Nombre_tupla_2[7],Nombre_tupla_1[8]:Nombre_tupla_2[8],Nombre_tupla_1[9]:Nombre_tupla_2[9]}
print (Nombre_diccionario_2)
for contador in range (0,9):
	Nombre_diccionario_3[Nombre_tupla_1[contador]] = Nombre_tupla_2[contador]
print (Nombre_diccionario_3)
print (input("Fin ej007_5 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 007_6
print("Inicio ej007_6 - separo claves de  datos asociados ")
print ("pares de valores del diccionario 1 : "+str(Nombre_diccionario_1))
print ("Claves del diccionario 1 : "+str(Nombre_diccionario_1.keys()))
print ("Datos asociados del diccionario 1 : "+str(Nombre_diccionario_1.values()))
print ("Longitud de pares de datos del diccionario 1 : "+str(len(Nombre_diccionario_1)))
print (input("Fin ej007_6 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 007_7
print("Inicio ej007_7 ")
# input stored in variable a. 
diccionario = {"nombre":"Juan", "apellido":"Perez"} 
# Use of format_map() function 
print("el apellido de  {nombre} es {apellido}".format_map(diccionario)) 
# input stored in variable a. 
a = {"x":"alfa", "y":"beta"} 
# Use of format_map() function 
print("{x} {y}".format_map(a)) 
# Input dictionary 
profession = { "nombres":["Juan", "Pedro"], 
               "profesion":["Astronauta", "Biologo"], 
               "edad":[33, 55] } 
# Use of format_map() function  
print("{nombres[0]} trabaja de {profesion[0]} y tiene {edad[0]} años.".format_map(profession)) 
print("{nombres[1]} trabaja de {profesion[1]} y tiene {edad[1]} años.".format_map(profession)) 
print (input("Fin ej007_7 \n		continuar?"));
limpiar();
print("#########################################################");
#Ej 007_8
print("Inicio ej007_8 ")
dic1 = {'Lorca':'Escritor', 'Goya':'Pintor'}		# declara diccionario 
print(dic1) 										# imprime dic1{'Goya': 'Pintor', 'Lorca': 'Escritor'}
dic2 = dict((('mesa',5), ('silla',10)))				# declara a partir de tupla
dic3 = dict(ALM=5, CAD=10)							# declara a partir de cadenas simples 
dic4 = dict([(z, z**2) for z in (1, 2, 3)])			# declara a partir patrón
print(dic4)											# muestra {1: 1, 2: 4, 3: 9}
print(dic1['Lorca'])								# escritor, acceso a un valor por clave
print(dic1.get('Gala', 'no existe'))				# acceso a un valor por clave
if 'Lorca' in dic1: print('está')					# comprueba si existe una clave
print(dic1.items())									# obtiene una lista de tuplas clave:valor
print(dic1.keys())									# obtiene una lista de las claves
print(dic1.values())								# obtiene una lista de los valores
dic1['Lorca'] = 'Poeta'								# añade un nuevo par clave:valor
dic1['Amenabar'] = 'Cineasta'						# añade un nuevo par clave:valor
dic1.update({'Carreras' : 'Tenor'})					# añadir con update()
del dic1['Amenabar']								# borra un par clave:valor 
print(dic1.pop('Amenabar', 'Amenabar ya no está'))	# borra par clave:valor

print (input("Fin ej007_8 \n		continuar?"));
limpiar();
print("#########################################################");
#Ej 007_9
print("Inicio ej007_9 ")

artistas = {'Lorca':'Escritor', 'Goya':'Pintor'}	# diccionario
paises = ['Chile','España','Francia','Portugal']	# declara lista
capitales = ['Santiago','Madrid','París','Lisboa']	# declara lista
for c, v in artistas.items():
	print(c,':',v)									# recorre diccionario
for i, c in enumerate(paises):
	print(i,':',c)									# recorre lista 
for p, c in zip(paises, capitales):
	print(c,' ',p)									# recorre listas
for p in reversed(paises):
	print(p,)										# recorre en orden inverso
for c in sorted(paises):
	print(c,)  										# recorre secuencia ordenada
print (input("Fin ej007_9 \n		continuar?"));
limpiar();
print("#########################################################");
#Ej 007_10
print("Inicio ej007_10 ")
