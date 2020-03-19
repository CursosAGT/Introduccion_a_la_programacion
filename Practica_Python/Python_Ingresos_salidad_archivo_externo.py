#!/usr/bin/env python
# -*- coding: utf-8 -*-
# AGT
# Copyright 2019 Ariel H Garcia Traba <ariel.garcia.traba@gmail.com>
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
print("##         Unidad 7 - Fechas, Horas, Archivos                             ##");
print("##            * Operaciones con archivos                                  ##");
print("##                                                                        ##");
print("############################################################################");     
print("##                                                                        ##");
print("##                      Ingreso - salida de datos                         ##");
print("##                                                                        ##");
print("##                                                                        ##");
print("##                      otros archivos de texto                           ##");
print("##                      -----------------------                           ##");
print("##                                                                        ##");
print("##                           crear archivos de texto                      ##");
print("##                                                                        ##");
print("##                           escribir un texto                            ##");
print("##                                                                        ##");
print("##                   escribir una linea al final                          ##");
print("##                                                                        ##");
print("##                   leer un texto                                        ##");
print("##                                                                        ##");
print("##                   leer una linea                                       ##");
print("##                                                                        ##");
print("##                           cerrar archivos                              ##");
print("##                                                                        ##");
print("############################################################################");
print("##                                                                        ##");
print("##                  IO  -  TIPO  o CVS 'text.txt                          ##");
print("##                                                                        ##");
print("##                Unidad 7 - Fechas, Horas, Archivos                      ##");
print("##                      * Operaciones con archivos                        ##");
print("##                                                                        ##");
print("##                Unidad 4 - Listas, Tuplas y Diccionarios                ##");
print("##                      * Operaciones con archivos                        ##");
print("##                      libreria   pickle                                 ##");
print("##                                                                        ##");
print("############################################################################"); 
print("##                                                                        ##");
print("##         r      read   Lectura                                          ##");
print("##         r+     read+  Lectura/Escritura simultánea                     ##");
print("##         w      write  Sobreescritura. Si no existe archivo se creará   ##");
print("##         a      append Añadir. Escribe al final del archivo             ##");
print("##                EN BINARIO                                              ##");
print("##         rb     read   Lectura binaria                                  ##");
print("##         r+b    read+  Lectura/Escritura binaria simultánea             ##");
print("##         wb     write  Sobreescritura binaria                           ##");
print("##                                                                        ##");
print("##         U            Salto de línea                                    ##");
print("##                                                                        ##");
print("############################################################################"); 

def limpiar():
    import os
    if os.name == 'nt':
        os.system('cls')
    else:
        os.system('clear')
print(input("continuar?"));
print("Un módulo es un fichero que contiene codigo PYTHON. Su extensión es .py. Almacena declaración de variables e implementación de funciones. Posibilidad de hacer referencia a otros módulos (mediante la instrucción import).")
print("Inicio ej 002-2_1 - salida de datos a otro archivo write");
from io import *
archivo_de_texto=open("text.txt","w")# abre el archivo text.txt para escritura y si no existe lo crea
texto_en_memoria="TEXT\nLenguaje interpretado\n Un lenguaje interpretado es un lenguaje de programación para el que la mayoría de sus implementaciones ejecuta las instrucciones directamente, sin una previa compilación del programa a instrucciones en lenguaje máquina.\n El intérprete ejecuta el programa directamente, traduciendo cada sentencia en una secuencia de una o más subrutinas ya compiladas en código máquina.\n Los términos lenguaje interpretado y lenguaje compilado no están bien definidos porque, en teoría, cualquier lenguaje de programación puede ser interpretado o compilado.\n Cada vez es más popular, en las implementaciones más modernas de un lenguaje de programación, ofrecer ambas opciones.\n Los lenguajes interpretados también pueden diferenciarse de los lenguajes de máquina.\n Funcionalmente, tanto la ejecución y la interpretación significan lo mismo -obtener la siguiente instrucción/sentencia del programa y su ejecución-.\n Aunque el bytecode (código byte) interpretado es además idéntico a su forma en código máquina y tiene una representación en ensamblador, el término 'interpretado' se reserva en la práctica para lenguajes 'procesados por software' (como las máquinas virtuales o emuladores) por encima del procesado nativo (por ejemplo, por hardware).\n En principio, los programas de muchos lenguajes se pueden compilar o interpretar, emular o ejecutar nativamente, así que esta designación se aplica solamente a la implementación práctica más usual, en vez de representar una propiedad esencial del lenguaje.\n De forma parecida al microcódigo del procesador, muchos intérpretes, internamente recaen en una compilación en tiempo de ejecución.\n Evitando la compilación, los programas interpretados son más fáciles de evolucionar durante el desarrollo y la ejecución (transformándose en ocasiones de uno en la otra).\n De otra parte, ya que la compilación implica una traducción a un formato más amigable con la máquina, los programas interpretados corren más lentamente y menos eficientemente (es decir, gastan considerablemente más energía).\n Esto es especialmente verdad para los lenguajes de guion, cuyas sentencias son más complejas de analizar comparadas con las instrucciones máquina.\n Muchos lenguajes se han implementado usando tanto compiladores como intérpretes, incluyendo BASIC, C, Lisp, Pascal y Python. Java y C# se compilan a código byte, el lenguaje interpretado específico para la máquina virtual.\n Muchas implementaciones de Lisp pueden mezclar libremente código interpretado y compilado. "
archivo_de_texto.write(texto_en_memoria);
archivo_de_texto.close();
print (input("Fin ej 002_2_1 \n		continuar?"));
limpiar();
print("############################################################################"); 
# Ej 002_2_2
print("Inicio ej 002_2_2 - salida de datos a otro archivo append");
archivo_de_texto=open("text.txt","a")# abre el archivo text.txt para agregar datos
linea_texto_en_memoria="\n fuente wikipedia : https://es.wikipedia.org/wiki/Int%C3%A9rprete_(inform%C3%A1tica)#Eficiencia"
archivo_de_texto.write(linea_texto_en_memoria);
archivo_de_texto.close();
print (input("Fin ej 002-2_2 \n		continuar?"));
limpiar();
print("############################################################################"); 
# Ej 002_2_3
print("Inicio ej 002_2_3 - ingreso lectura de bloque de datos desde otro archivo read");
archivo_de_texto=open("text.txt","r")# abre el archivo text.txt para lectura en bloque
texto_a_memoria=archivo_de_texto.read();
print(texto_a_memoria);
archivo_de_texto.close();
print (input("Fin ej 002_2_3 \n		continuar?"));
limpiar();
print("############################################################################"); 
# Ej 002_2_4
print("Inicio ej 002_2_4 - ingreso lectura por lineas de datos desde otro archivo readlines");
archivo_de_texto=open("text.txt","r")# abre el archivo text.txt para lectura en lineas
linea_texto_a_memoria=archivo_de_texto.readlines();
print(linea_texto_a_memoria[2]);
archivo_de_texto.close();
print (input("Fin ej 002_2_4 \n		continuar?"));
####################                  BINARIOS "binario.dat"
print("############################################################################"); 
print("##                                                                        ##");
print("##                       BINARIOS 'binario.dat'                           ##");
print("##                                                                        ##");
print("##                Unidad 7 - Fechas, Horas, Archivos                      ##");
print("##                      * Operaciones con archivos                        ##");
print("##                                                                        ##");
print("##                Unidad 4 - Listas, Tuplas y Diccionarios                ##");
print("##                      * Operaciones con archivos                        ##");
print("##                      libreria   pickle                                 ##");
print("##                                                                        ##");
print("############################################################################"); 

import pickle
# Ej 002_2_5
binario_en_memoria="PICKLE\nLenguaje interpretado\n Un lenguaje interpretado es un lenguaje de programación para el que la mayoría de sus implementaciones ejecuta las instrucciones directamente, sin una previa compilación del programa a instrucciones en lenguaje máquina.\n El intérprete ejecuta el programa directamente, traduciendo cada sentencia en una secuencia de una o más subrutinas ya compiladas en código máquina.\n Los términos lenguaje interpretado y lenguaje compilado4​ no están bien definidos porque, en teoría, cualquier lenguaje de programación puede ser interpretado o compilado.\n Cada vez es más popular, en las implementaciones más modernas de un lenguaje de programación, ofrecer ambas opciones.\n Los lenguajes interpretados también pueden diferenciarse de los lenguajes de máquina.\n Funcionalmente, tanto la ejecución y la interpretación significan lo mismo -obtener la siguiente instrucción/sentencia del programa y su ejecución-.\n Aunque el bytecode (código byte) interpretado es además idéntico a su forma en código máquina y tiene una representación en ensamblador, el término 'interpretado' se reserva en la práctica para lenguajes 'procesados por software' (como las máquinas virtuales o emuladores) por encima del procesado nativo (por ejemplo, por hardware).\n En principio, los programas de muchos lenguajes se pueden compilar o interpretar, emular o ejecutar nativamente, así que esta designación se aplica solamente a la implementación práctica más usual, en vez de representar una propiedad esencial del lenguaje.\n De forma parecida al microcódigo del procesador, muchos intérpretes, internamente recaen en una compilación en tiempo de ejecución.\n Evitando la compilación, los programas interpretados son más fáciles de evolucionar durante el desarrollo y la ejecución (transformándose en ocasiones de uno en la otra).\n De otra parte, ya que la compilación implica una traducción a un formato más amigable con la máquina, los programas interpretados corren más lentamente y menos eficientemente (es decir, gastan considerablemente más energía).\n Esto es especialmente verdad para los lenguajes de guion, cuyas sentencias son más complejas de analizar comparadas con las instrucciones máquina.\n Muchos lenguajes se han implementado usando tanto compiladores como intérpretes, incluyendo BASIC, C, Lisp, Pascal y Python. Java y C# se compilan a código byte, el lenguaje interpretado específico para la máquina virtual.\n Muchas implementaciones de Lisp pueden mezclar libremente código interpretado y compilado. "
print("Inicio ej 002_2_5 - salida de datos a otro archivo binario write wr ");
from io import *
archivo_de_binario=open("binario.dat","wb")# abre el archivo binario para escritura y si no existe lo crea
pickle.dump(binario_en_memoria,archivo_de_binario);
archivo_de_binario.close();
del archivo_de_binario
print (input("Fin ej 002_2_5 \n		continuar?"));
limpiar();
print("############################################################################"); 
# Ej 002_2_6
print("Inicio ej 002_2_6 - ingreso lectura de bloque de datos desde otro archivo binario read - rw");
archivo_de_binario=open("binario.dat","rb")# abre el archivo binario para lectura en bloque
binario_a_memoria=pickle.load(archivo_de_binario);
print(binario_a_memoria);
archivo_de_binario.close();
del archivo_de_binario
print (input("Fin ej 002_2_6 \n		continuar?"));
limpiar();
print("############################################################################"); 
# Ej 002_2_7
print("Inicio ej 002_2_7 - ingreso lectura por lineas de datos desde otro archivo binario readlines");
archivo_de_binario=open("binario.dat","rb")# abre el archivo binario para lectura en lineas
linea_binario_a_memoria=archivo_de_binario.readlines();
print(linea_binario_a_memoria[5]);
archivo_de_binario.close();
del archivo_de_binario
print (input("Fin ej 002_2_7 \n		continuar?"));

####################                  JSON (JavaScript Object Notation)."binario.dat"
print("############################################################################"); 
print("##                                                                        ##");
print("##                JSON (JavaScript Object Notation).                      ##");
print("##                                                                        ##");
print("##                Unidad 7 - Fechas, Horas, Archivos                      ##");
print("##                      * Operaciones con archivos                        ##");
print("##                                                                        ##");
print("##                Unidad 4 - Listas, Tuplas y Diccionarios                ##");
print("##                      * Operaciones con archivos                        ##");
print("##                      libreria json                                     ##");
print("##                                                                        ##");
print("##                JSON                 Python                             ##");
print("##                -----                ------                             ##");
print("##                object                dict                              ##");
print("##                array                 list                              ##");
print("##                string                unicode                           ##");
print("##                number (int)          int, long                         ##");
print("##                number (real)         float                             ##");
print("##                true                  True                              ##");
print("##                false                 False                             ##");
print("##                null                  None                              ##");
print("##                                                                        ##");
print("############################################################################"); 
import json
# Ej 002_2_8
json_en_memoria="JSON\nLenguaje interpretado\n Un lenguaje interpretado es un lenguaje de programación para el que la mayoría de sus implementaciones ejecuta las instrucciones directamente, sin una previa compilación del programa a instrucciones en lenguaje máquina.\n El intérprete ejecuta el programa directamente, traduciendo cada sentencia en una secuencia de una o más subrutinas ya compiladas en código máquina.\n Los términos lenguaje interpretado y lenguaje compilado4​ no están bien definidos porque, en teoría, cualquier lenguaje de programación puede ser interpretado o compilado.\n Cada vez es más popular, en las implementaciones más modernas de un lenguaje de programación, ofrecer ambas opciones.\n Los lenguajes interpretados también pueden diferenciarse de los lenguajes de máquina.\n Funcionalmente, tanto la ejecución y la interpretación significan lo mismo -obtener la siguiente instrucción/sentencia del programa y su ejecución-.\n Aunque el bytecode (código byte) interpretado es además idéntico a su forma en código máquina y tiene una representación en ensamblador, el término 'interpretado' se reserva en la práctica para lenguajes 'procesados por software' (como las máquinas virtuales o emuladores) por encima del procesado nativo (por ejemplo, por hardware).\n En principio, los programas de muchos lenguajes se pueden compilar o interpretar, emular o ejecutar nativamente, así que esta designación se aplica solamente a la implementación práctica más usual, en vez de representar una propiedad esencial del lenguaje.\n De forma parecida al microcódigo del procesador, muchos intérpretes, internamente recaen en una compilación en tiempo de ejecución.\n Evitando la compilación, los programas interpretados son más fáciles de evolucionar durante el desarrollo y la ejecución (transformándose en ocasiones de uno en la otra).\n De otra parte, ya que la compilación implica una traducción a un formato más amigable con la máquina, los programas interpretados corren más lentamente y menos eficientemente (es decir, gastan considerablemente más energía).\n Esto es especialmente verdad para los lenguajes de guion, cuyas sentencias son más complejas de analizar comparadas con las instrucciones máquina.\n Muchos lenguajes se han implementado usando tanto compiladores como intérpretes, incluyendo BASIC, C, Lisp, Pascal y Python. Java y C# se compilan a código byte, el lenguaje interpretado específico para la máquina virtual.\n Muchas implementaciones de Lisp pueden mezclar libremente código interpretado y compilado. "
print("Inicio ej 002_2_8 - salida de datos a otro archivo JavaScript_Object_Notation write wr ");
from io import *
archivo_de_json=open("JavaScript_Object_Notation.json","w")# abre el archivo JavaScript_Object_Notation para escritura y si no existe lo crea
json.dump(json_en_memoria,archivo_de_json);
archivo_de_json.close();
del archivo_de_json
print (input("Fin ej 002_2_8 \n		continuar?"));
limpiar();
print("############################################################################"); 
# Ej 002_2_9
print("Inicio ej 002_2_9 - ingreso lectura de bloque de datos desde otro archivo JavaScript_Object_Notation read - rw");
archivo_de_json=open("JavaScript_Object_Notation.json","r")# abre el archivo JavaScript_Object_Notation para lectura en bloque
json_en_memoria=json.load(archivo_de_json);
print(json_en_memoria);
archivo_de_json.close();
del archivo_de_json
print (input("Fin ej 002_2_9 \n		continuar?"));
limpiar();
print("############################################################################"); 
# Ej 002_2_10
print("############################################################################"); 
print("##                                                                        ##");
print("##                Unidad 7 - Fechas, Horas, Archivos                      ##");
print("##                      * Operaciones con archivos                        ##");
print("##                                                                        ##");
print("##                Unidad 4 - Listas, Tuplas y Diccionarios                ##");
print("##                      * Operaciones con archivos                        ##");
print("##                                                                        ##");
print("##                      metodo 'WITH'                                     ##");
print("##                                                                        ##");
print("############################################################################"); 
# Ej 002_2_5
import pickle
print("Inicio ej 002_2_5 - salida de datos con metodo WITH a otro archivo binario write wr ");
binario_en_memoria2="PICKLE_WITH\nLenguaje interpretado\n Un lenguaje interpretado es un lenguaje de programación para el que la mayoría de sus implementaciones ejecuta las instrucciones directamente, sin una previa compilación del programa a instrucciones en lenguaje máquina.\n El intérprete ejecuta el programa directamente, traduciendo cada sentencia en una secuencia de una o más subrutinas ya compiladas en código máquina.\n Los términos lenguaje interpretado y lenguaje compilado4​ no están bien definidos porque, en teoría, cualquier lenguaje de programación puede ser interpretado o compilado.\n Cada vez es más popular, en las implementaciones más modernas de un lenguaje de programación, ofrecer ambas opciones.\n Los lenguajes interpretados también pueden diferenciarse de los lenguajes de máquina.\n Funcionalmente, tanto la ejecución y la interpretación significan lo mismo -obtener la siguiente instrucción/sentencia del programa y su ejecución-.\n Aunque el bytecode (código byte) interpretado es además idéntico a su forma en código máquina y tiene una representación en ensamblador, el término 'interpretado' se reserva en la práctica para lenguajes 'procesados por software' (como las máquinas virtuales o emuladores) por encima del procesado nativo (por ejemplo, por hardware).\n En principio, los programas de muchos lenguajes se pueden compilar o interpretar, emular o ejecutar nativamente, así que esta designación se aplica solamente a la implementación práctica más usual, en vez de representar una propiedad esencial del lenguaje.\n De forma parecida al microcódigo del procesador, muchos intérpretes, internamente recaen en una compilación en tiempo de ejecución.\n Evitando la compilación, los programas interpretados son más fáciles de evolucionar durante el desarrollo y la ejecución (transformándose en ocasiones de uno en la otra).\n De otra parte, ya que la compilación implica una traducción a un formato más amigable con la máquina, los programas interpretados corren más lentamente y menos eficientemente (es decir, gastan considerablemente más energía).\n Esto es especialmente verdad para los lenguajes de guion, cuyas sentencias son más complejas de analizar comparadas con las instrucciones máquina.\n Muchos lenguajes se han implementado usando tanto compiladores como intérpretes, incluyendo BASIC, C, Lisp, Pascal y Python. Java y C# se compilan a código byte, el lenguaje interpretado específico para la máquina virtual.\n Muchas implementaciones de Lisp pueden mezclar libremente código interpretado y compilado. "
with open("binario_metodo_with.dat","wb") as write_file:# abre el archivo binario para escritura y si no existe lo crea
	pickle.dump(binario_en_memoria2, write_file, pickle.HIGHEST_PROTOCOL)
print (input("Fin ej 002_2_5 \n		continuar?"));
# Ej 002_2_6
print("Inicio ej 002_2_6 - ingreso lectura de bloque de datos con metodo WITH desde otro archivo binario read - rw");
with open("binario_metodo_with.dat", "rb") as read_file:# abre el archivo binario para lectura en bloque  
    binario_a_memoria2 = pickle.load(read_file)
print(binario_a_memoria2);
print (input("Fin ej 002_2_6 \n		continuar?"));
limpiar();
print("############################################################################"); 
# Ej 002_2_8
import json
json_en_memoria2="JSON_WITH\nLenguaje interpretado\n Un lenguaje interpretado es un lenguaje de programación para el que la mayoría de sus implementaciones ejecuta las instrucciones directamente, sin una previa compilación del programa a instrucciones en lenguaje máquina.\n El intérprete ejecuta el programa directamente, traduciendo cada sentencia en una secuencia de una o más subrutinas ya compiladas en código máquina.\n Los términos lenguaje interpretado y lenguaje compilado4​ no están bien definidos porque, en teoría, cualquier lenguaje de programación puede ser interpretado o compilado.\n Cada vez es más popular, en las implementaciones más modernas de un lenguaje de programación, ofrecer ambas opciones.\n Los lenguajes interpretados también pueden diferenciarse de los lenguajes de máquina.\n Funcionalmente, tanto la ejecución y la interpretación significan lo mismo -obtener la siguiente instrucción/sentencia del programa y su ejecución-.\n Aunque el bytecode (código byte) interpretado es además idéntico a su forma en código máquina y tiene una representación en ensamblador, el término 'interpretado' se reserva en la práctica para lenguajes 'procesados por software' (como las máquinas virtuales o emuladores) por encima del procesado nativo (por ejemplo, por hardware).\n En principio, los programas de muchos lenguajes se pueden compilar o interpretar, emular o ejecutar nativamente, así que esta designación se aplica solamente a la implementación práctica más usual, en vez de representar una propiedad esencial del lenguaje.\n De forma parecida al microcódigo del procesador, muchos intérpretes, internamente recaen en una compilación en tiempo de ejecución.\n Evitando la compilación, los programas interpretados son más fáciles de evolucionar durante el desarrollo y la ejecución (transformándose en ocasiones de uno en la otra).\n De otra parte, ya que la compilación implica una traducción a un formato más amigable con la máquina, los programas interpretados corren más lentamente y menos eficientemente (es decir, gastan considerablemente más energía).\n Esto es especialmente verdad para los lenguajes de guion, cuyas sentencias son más complejas de analizar comparadas con las instrucciones máquina.\n Muchos lenguajes se han implementado usando tanto compiladores como intérpretes, incluyendo BASIC, C, Lisp, Pascal y Python. Java y C# se compilan a código byte, el lenguaje interpretado específico para la máquina virtual.\n Muchas implementaciones de Lisp pueden mezclar libremente código interpretado y compilado. "
print("Inicio ej 002_2_8 - salida de datos con metodo WITH  a otro archivo JavaScript_Object_Notation write wr ");
with open("JavaScript_Object_Notation_with.json", "w") as write_file:# abre el archivo JavaScript_Object_Notation para escritura y si no existe lo crea
	json.dump(json_en_memoria2, write_file)
print (input("Fin ej 002_2_7 \n		continuar?"));
# Ej 002_2_9
print("Inicio ej 002_2_9 - ingreso lectura de bloque de datos con metodo WITH  desde otro archivo JavaScript_Object_Notation read - rw");
with open("JavaScript_Object_Notation_with.json","r") as read_file:# abre el archivo JavaScript_Object_Notation para lectura en bloque
	json_en_memoria2 = json.load(read_file);
print(json_en_memoria2);
print (input("Fin ej 002_2_9 \n		continuar?"));
print("https://docs.python.org/3/library/pickle.html")
