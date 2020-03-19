#!/usr/bin/env python
# -*- coding: utf-8 -*-
# Copyright 2019 Ariel H Garcia Traba <cursos.agt@gmail.com>
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
print("##     append()  Adds an element at the end of the list                   ##");
print("##     clear()   Removes all the elements from the list                   ##");
print("##     copy()    Returns a copy of the list                               ##");
print("##     count()   Returns the number of elements with the specified value  ##");
print("##     extend()  Add the elements of a list (or any iterable), to the end ##");
print("##               of the current list                                      ##");
print("##     index()   Returns the index of the first element with the specified##");
print("##               value                                                    ##");
print("##     insert()  Adds an element at the specified position                ##");
print("##     pop()     Removes the element at the specified position            ##");
print("##     remove()  Removes the first item with the specified value          ##");
print("##     reverse() Reverses the order of the list                           ##");
print("##     sort()    Sorts the list                                           ##");
print("##                                                                        ##");
print("############################################################################");
print("##                                                                        ##");
print("##                               Listas                                   ##");
print("##                                                                        ##");
print("############################################################################");
print("https://www.w3schools.com/python/python_ref_list.asp");
print("\nhttps://www.w3schools.com/python/python_lists.asp");
print("""
list.append(x)
    Agrega un ítem al final de la lista. Equivale a a[len(a):] = [x].

list.extend(iterable)
    Extiende la lista agregándole todos los ítems del iterable. Equivale a a[len(a):] = iterable.

list.insert(i, x)
    Inserta un ítem en una posición dada. El primer argumento es el índice del ítem delante del cual se insertará, por lo tanto a.insert(0, x) inserta al principio de la lista, y a.insert(len(a), x) equivale a a.append(x).

list.remove(x)
    Quita el primer ítem de la lista cuyo valor sea x. Es un error si no existe tal ítem.

list.pop([i])
    Quita el ítem en la posición dada de la lista, y lo devuelve. Si no se especifica un índice, a.pop() quita y devuelve el último ítem de la lista. (Los corchetes que encierran a i en la firma del método denotan que el parámetro es opcional, no que deberías escribir corchetes en esa posición. Verás esta notación con frecuencia en la Referencia de la Biblioteca de Python.)

list.clear()
    Quita todos los elementos de la lista. Equivalente a del a[:].

list.index(x[, start[, end]])
	Devuelve un índice basado en cero en la lista del primer ítem cuyo valor sea x. Levanta una excepción ValueError si no existe tal ítem.
    Los argumentos opcionales start y end son interpetados como la notación de rebanadas y se usan para limitar la búsqueda a una subsecuencia particular de la lista. El index retornado se calcula de manera relativa al inicio de la secuencia completa en lugar de con respecto al argumento start.

list.count(x)
    Devuelve el número de veces que x aparece en la lista.

list.sort(key=None, reverse=False)
    Ordena los ítems de la lista in situ (los argumentos pueden ser usados para personalizar el orden de la lista, ve sorted() para su explicación).

list.reverse()
    Invierte los elementos de la lista in situ.

list.copy()
	Devuelve una copia superficial de la lista. Equivalente a a[:].
""");
print (input("		continuar?"));
limpiar();
Nombre_lista_1 = ["linea 1","linea 2","linea 3","linea 4","linea 5","linea 6","linea 7","linea 8","linea 9","linea 10"]
Nombre_lista_2 = ["columna 1","columna 2","columna 3","columna 4","columna 5","columna 6","columna 7","columna 8","columna 9","columna 10"]
print("Inicio ej005_1 - posiciones")
print (Nombre_lista_1)
print ("posicion [1]  "+Nombre_lista_1[1])
print ("posicion [5]  "+Nombre_lista_1[5])
print ("posicion [7]  "+Nombre_lista_1[7])
print ("posicion [0]  "+Nombre_lista_1[0])
print ("posicion [9]  "+Nombre_lista_1[9])
print (input("Fin ej005_1 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 005_2
print("Inicio ej005_2 - posiciones negativas") 
print (Nombre_lista_1)
print ("posicion [-1]  "+Nombre_lista_1[-1])
print ("posicion [-2]  "+Nombre_lista_1[-2])
print ("posicion [-3]  "+Nombre_lista_1[-9])
print (input("Fin ej005_2 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 005_3
print("Inicio ej005_3 - sectores o porsiones") 
print (Nombre_lista_1)
print ("posicion [4 al 8]  "+str(Nombre_lista_1[4:8]))
print ("posicion [0 al -2]  "+str(Nombre_lista_1[0:-2]))
print ("posicion [-3 al 5]  "+str(Nombre_lista_1[-3:5])+"error")
print (input("Fin ej005_3 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 005_4
print("Inicio ej005_4 - amplio la lista con un dato al final")
print (Nombre_lista_1)
print ("Agrego un dato en la posicion FINAL")
Nombre_lista_1.append ("Nuevo")
print (Nombre_lista_1)
print (input("Fin ej005_4 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 005_5
print("Inicio ej005_5 - amplio la lista con un dato en una posicion elejida")
print (Nombre_lista_1)
print ("Agrego un dato en la posicion 5")
Nombre_lista_1.insert(5,"AQUI_Nuevo_5")
print (Nombre_lista_1)
print (input("Fin ej005_5 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 005_6
print("Inicio ej005_6 - amplio mucho la lista ")
print (Nombre_lista_1)
print ("Agrego o adiciono un conjunto de datos u otra lista a la original")
Nombre_lista_1.extend(["linea 11","linea 12","linea 13","linea 14","linea 15","linea 16","linea 17","linea 18","linea 19","linea 20"])
print (Nombre_lista_1)
print (input("Fin ej005_6 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 005_7
print("Inicio ej005_7 - busco (si existe) un dato en la lista")
print (Nombre_lista_1)
print ("Busco si el dato 'AQUI_Nuevo_5' esta en mi lista??")
print ("AQUI_Nuevo_5" in  Nombre_lista_1)
print (input("Fin ej005_7 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 005_8
print("Inicio ej005_8 - busco (si existe) un dato en la lista")
print ("Busco si el dato 'viejo' esta en mi lista??")
print ("viejo" in  Nombre_lista_1)
print (input("Fin ej005_8 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 005_9
print("Inicio ej005_9 - Ubicar la posicion un dato en el index" )
print (Nombre_lista_1)
print ("Ubicar la posicion de 'AQUI_Nuevo_5' en el index y es : ")
print (Nombre_lista_1.index("AQUI_Nuevo_5"))
print (input("Fin ej005_9 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 005_10
posicion = 0 
print("Inicio ej005_10 - remuevo el dato especifico")
print (Nombre_lista_1)
print ("remuevo de la lista 'AQUI_Nuevo_5'")
Nombre_lista_1.remove("AQUI_Nuevo_5")
print (Nombre_lista_1)
print (input("Fin ej005_10 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 005_11
posicion = 0 
print("Inicio ej005_11 - remuevo el dato en la posicion FINAL")
print (Nombre_lista_1)
print ("remuevo el dato en la posicion FINAL")
Nombre_lista_1.pop()
print (Nombre_lista_1)
print (input("Fin ej005_11 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 005_12
print("Inicio ej005_12 - suma de 2 listas")
print ("Lista original")
print (Nombre_lista_1)
print ("Lista nueva")
print (Nombre_lista_2)
print ("junto las listas")
Nombre_lista_3=Nombre_lista_1+Nombre_lista_2
print (Nombre_lista_3)
print (input("Fin ej005_12 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 005_13
print("Inicio ej005_13 - multiplicacion de listas") 
print ("Lista original")
print (Nombre_lista_2)
print ("repetir datos 3 veces")
Nombre_lista_2=Nombre_lista_2 * 3
print (Nombre_lista_2)
print (input("Fin ej005_13 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 005_14
print("Inicio ej005_14 - remuevo el dato en la posicion buscada por index")
print (Nombre_lista_1)
posicion = Nombre_lista_1.index("linea 4")
print ("Ubicar la posicion de 'linea 4' con .index y es : "+str(posicion))
print ("delETEO borro la posicion : "+str(posicion))
del Nombre_lista_1[posicion]
print (Nombre_lista_1)
print (input("Fin ej005_14 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 005_15
print("Inicio ej005_15 - remuevo el dato en la posicion buscada por index")
print("https://python-para-impacientes.blogspot.com/2014/02/programacion-funcional-funciones-de.html")
print ("""
Función map()
-------------
La función de orden superior map() aplica una función a una lista de datos y devuelve un iterador que contiene todos los resultados para los elementos de la lista.
En el siguiente ejemplo la función cuadrado calcula el cuadrado de un número. 
La lista_VALORES contiene una lista de datos numéricos. Con map(cuadrado, lista_VALORES) se aplica la función cuadrado a cada elemento de la lista. 
""")
def cuadrado(numero):       
	return numero ** 2
lista_VALORES = [-2, 4, -6, 8]
lista_CUADRADOS = list(map(cuadrado, lista_VALORES))# Convierte a lista el iterador obtenido
print(lista_CUADRADOS)  # Muestra elementos de la lista

print ("""
Función filter()
----------------
La función filter() aplica un filtro a una lista de datos y devuelve un iterador con los elementos que superan el filtro.
""")

def esneg(numero):# La función verifica si un número es negativo
    return (numero < 0)# Devuelve True/False según sea o no nº negativo
lista5 = [-3, -2, 0, 1, 9, -5]
print(list(filter(esneg, lista5)))
# Muestra los números negativos de la lista
# La función esneg() es llamada para comprobar, 
# uno a uno, todos los números de la lista

print ("""
Función reduce()
----------------
La función reduce() aplica una función a una lista de datos evaluando los elementos por pares. La primera vez se aplica al primer y segundo elemento, la siguiente, se aplicará al valor devuelto por la función junto al tercer elemento y así, sucesivamente, reduciendo la lista hasta que quede un sólo elemento.
A partir de Python 3 si queremos utilizar reduce() debemos importar el módulo functools:
""")
import functools

def multiplicar(x, y):
    print(x * y)  # muestra el resultado parcial
    return x * y

lista = [1, 2, 3, 4]
valor = functools.reduce(multiplicar, lista)
print(valor)  # muestra el resultado final

print ("""
Función lambda
--------------
La función lambda se utiliza para declarar funciones que sólo ocupan una línea. Son objetos que se pueden asignar a variables para usar con posterioridad.
""")
cuadrado = lambda x: x*x

lista = [1,2,3,5,8,13]
for elemento in lista:
    print(cuadrado(elemento))

# Lambda, con 2 argumentos:

area_triangulo = (lambda b,h: b*h/2)
medidas = [(34, 8), (26, 8), (44, 18)]
for datos in medidas:
    base = datos[0]
    altura = datos[1]
    print(area_triangulo(base, altura))

print ("""
Comprensión de listas
----------------------
Es un tipo de construcción que consta de una expresión que determina cómo modificar los elementos de una lista, seguida de una o varias clausulas for y, opcionalmente, una o varias clausulas if. El resultado que se obtiene es una lista.
""")
lista = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

# Cada elemento de la lista se eleva al cubo
cubos = [valor ** 3 for valor in lista]
print('Cubos de 1 a 10:', cubos)


numeros = [135, 154, 180, 193, 210]
divisiblespor3 = [valor for valor in numeros if valor % 3.0 == 0] 

# Muestra lista con los números divisibles por 3
print(divisiblespor3)  


# Define función devuelve el inverso de un número
def funcion(x):
    return 1/x

L = [1, 2, 3]  # declara lista

# Muestra lista con inversos de cada número
print([funcion(i) for i in L])

print ("""
Generadores
-----------
Los generadores funcionan de forma parecida a la comprensión de listas pero no devuelven listas sino generadores. Un generador es una clase especial de función que genera valores sobre los que iterar. La sintaxis usada es como la usada en la comprensión de listas pero en vez de usar corchetes se utilizan paréntesis. Para devolver los valores se utiliza yield en vez de return.
""")
# Define generador
def generador(inicio, fin, incremento):
    while(inicio <= fin):
        yield inicio  # devuelve valor
        inicio += incremento

# Recorre los valores del generador
for valor in generador(0, 6, 1):
    # Muestra valores, uno a uno:
    print(valor)  # 0 1 2 3 4 5 6

# Obtiene una lista del generador
lista = list(generador(0, 8, 2))

# Muestra lista
print(lista)  # [0,2,4,6,8]

print ("""
Función Decorador
-----------------
Es una función que recibe una función como parámetro y devuelve otra función como valor de retorno. Se utiliza cuando es necesario definir varias funciones que son muy parecidas. La función devuelta actúa como un envoltorio (wrapper) resolviendo lo que sería común a todas las funciones. También se aplica a clases.
""")
# Define decorador
def decorador1(funcion):
    # Define función decorada
    def funciondecorada(*param1, **param2):
        print('Inicio', funcion.__name__)
        funcion(*param1, **param2)
        print('Fin', funcion.__name__)
    return funciondecorada
    
def suma(a, b):
    print(a + b)

suma2 = decorador1(suma)
suma2(1,2)
suma3 = decorador1(suma)
suma3(2,2)

# Otra forma más elegante, usando @:

@decorador1
def producto(arg1, arg2):
    print(arg1 * arg2)

producto(5,5)


# El siguiente decorador genera tablas de sumas
# y multiplicaciones. El código que es común a todas 
# las funciones se declara en la función 'envoltura':

def tablas(funcion):
    def envoltura(tabla=1):
        print('Tabla del %i:' %tabla)
        print('-' * 15)
        for numero in range(0, 11):            
            funcion(numero, tabla)
        print('-' * 15)
    return envoltura

@tablas
def suma(numero, tabla=1):
    print('%2i + %2i = %3i' %(tabla, numero, tabla+numero))

@tablas
def multiplicar(numero, tabla=1):
    print('%2i X %2i = %3i' %(tabla, numero, tabla*numero))

# Muestra la tabla de sumar del 1
suma()

# Muestra la tabla de sumar del 4 
suma(4)

# Muestra la tabla de multiplicar del 1
multiplicar()

# Muestra la tabla de multiplicar del 10
multiplicar(10)  
