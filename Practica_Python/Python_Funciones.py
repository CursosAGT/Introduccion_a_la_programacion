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
def limpiar():
    import os
    if os.name == 'nt':
        os.system('cls')
    else:
        os.system('clear')
print(input("continuar?"));
print("https://python-para-impacientes.blogspot.com/2014/02/programacion-funcional-funciones-de.html")
print("https://python-para-impacientes.blogspot.com/2014/02/funciones.html")
print("""
Funciones
=========
Una función es como una caja negra: una vez creada no debemos preocuparnos por lo que tiene en su interior, simplemente, tenemos que recordar su nombre y los datos que necesita para resolver un proceso. Generalmente, devuelven un resultado.
La principal virtud de una función está en la reutilización del código, es decir, una vez creada puede ser llamada cada vez que se necesite. Para mejor aprovechamiento debemos procurar que las funciones ofrezcan soluciones a necesidades muy concretas.

Funciones con un número fijo de parámetros
La siguiente función calcula el área de un triángulo. Una vez definida se utiliza para calcular el área de dos triángulos de distintas dimensiones.
Para definir la función escribiremos def seguido del nombre de la función y entre paréntesis los dos parámetros que son necesarios para calcular el área del triángulo: base y altura. Con return la función devolverá el resultado de la fórmula matemática expresada. Los dos parámetros son obligatorios. Si alguno falta habrá una excepción.
""");
def area_triangulo(base, altura):  # define función con dos parámetros
    ''' Calcular el área de un triangulo'''  # cadena de documentación
    return base * altura / 2  # devuelve el resultado de la expresión

print(area_triangulo(6, 4))  # la función retornará el valor 12
print(area_triangulo(3.5, 2.4))  # la función retornará el valor 4.2
print("""
Funciones con un número variable de parámetros
----------------------------------------------
La siguiente función suma la distancia de un número variable de tramos. Si se utiliza sin aportar ningún valor devolverá 0. También, como cabría pensar es posible pasar variables.
""")
def distancia(*tramos): # define función con nº variable de parámetros
    ''' Suma distancia de tramos '''  # cadena de documentación
    total = 0  # inicializa variable numérica 
    for distancia in tramos:  # recorre, uno a uno, los tramos...
        total = total + distancia  # … y acumula la distancia
    return total  # devuelve la suma de todos los parámetros

tramo1 = 10
print(distancia(tramo1, 20, 30, 40))  # la función devuelve 100 
print(distancia())  # la función retornará el valor 0

print("""
Funciones con parámetros con valores por defecto 
------------------------------------------------
La función pagar tiene el parámetro dto_aplicado con el valor 5 asignado por omisión. Dicho valor se utilizará en la solución en el caso de omitirse este dato cuando sea llamada la función.
""")
def pagar(importe, dto_aplicado = 5):
    ''' La función aplica descuentos '''
    return importe - (importe * dto_aplicado / 100)

print(pagar(1000))  # 950
print(pagar(1000, 10))  # 900
print("""
Función con todos los parámetros con valores por defecto
--------------------------------------------------------
Todos los parámetros tienen un valor por defecto. Cuando se utiliza la función si se especifican los nombres de los parámetros éstos pueden estar en distinto orden.
""")
def repite_caracter(caracter="-", repite=3):
    return caracter * repite

print(repite_caracter())  # Se utilizan valores por omisión
print(repite_caracter('.',30))  # Muestra línea con 30 puntos
print(repite_caracter(repite=10, caracter='*'))  # Muestra: **********

print("""
Funciones con parámetros que contienen diccionarios
---------------------------------------------------
La función porc_aprobados tiene el parámetro **aulas que es un diccionario que contendrá las aulas de una escuela con el número alumnos de cada una. Cuando es llamada la función se pasa también el número de alumnos que aprobaron el curso. La función suma los alumnos de todas las aulas y calcula el porcentaje de aprobados.
""")
def porc_aprobados(aprobados, **aulas):
    ''' Calcula el % de aprobados '''
 
    total=0
    for alumnos in aulas.values():
        total += alumnos
 
    return aprobados * 100 / total

porcentaje_aprobados = porc_aprobados(48, A = 22, B = 25, C = 21)
print(porcentaje_aprobados)

print("""
Funciones que devuelven más de un valor
---------------------------------------
La función elemento_quimico recibe un símbolo químico y devuelve el número atómico del elemento correspondiente y su denominación. Para ello, utiliza un diccionario en el que las claves son los símbolos químicos y los valores son cadenas que contienen para cada elemento su número atómico y denominación, unidos por un guión. Mediante el símbolo se accede a la cadena que luego es dividida con split en dos partes (utilizando como separador el propio guión '-'). split devuelve una lista con las dos partes. En lista[0] queda el número atómico y en lista[1] la denominación, los dos valores que devuelve esta función.
""")
def elemento_quimico(simbolo):
    ''' Devuelve número atómico y denominación del elemento '''
 
    elementos = {'H':'1-Hidrógeno', 'He':'2-Helio', 'Li':'3-Litio'}
    elemento = elementos[simbolo]
    lista = elemento.split('-')
    return (lista[0], lista[1])

num_atomico, denomina = elemento_quimico('He')
print('Núm. Atómico:', num_atomico)
print('Denominación:', denomina)

print("""
Funciones sin return
--------------------
Una función sin return devuelve None si es asignada a una variable o llamada desde un print(). Por lo demás, funcionan igual que cualquier otra función.
""")
def repite(caracter='-', repite=3):
    print(caracter * repite)

repite('=', 20)
print("""
Funciones generadas a partir de otras
---------------------------------------
A partir de un función existente es posible generar una nueva. Después, ambas podrán usarse de igual forma.
""")
at = area_triangulo  # la función calcula área de un triángulo  
print (at(10,4)) # la nueva función usa los argumentos base y altura 

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
print (input("Fin ej 002_3_1 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 002_3_2
print("Inicio ej 002_3_2 ");
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
print (input("Fin ej 002_3_2 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 002_3_3
print("Inicio ej 002_3_3 ");
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
print (input("Fin ej 002_3_3 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 002_3_4
print("Inicio ej 002_3_4 ");
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
print (input("Fin ej 002_3_4 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 002_3_5
print("Inicio ej 002_3_5 ");
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
print (input("Fin ej 002_3_5 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 002_3_6
print("Inicio ej 002_3_6 ");
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
print (input("Fin ej 002_3_6 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 002_3_7
print("Inicio ej 002_3_7 ");
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
print (input("Fin ej 002_3_7 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 002_3_
#print("Inicio ej 002_3_8 ")
print("""TIP    http://www.maestrosdelweb.com/guia-python-primeros-pasos/
Definición de funciones en Python
def set_cliente(self):
    Una función (o método) es la forma de definir una determinada acción que realiza un objeto.

Definir Funciones
Para definir una función, se escribe:

def nombre_de_la_funcion(parámetros):
    # aquí escribimos el código que realiza la acción que definimos

Los parámetros son datos contenidos en variables (una o más), que la función necesitará para realizar la acción. No siempre son necesarios. En nuestro caso, el parámetro self indica que la función requerirá de los atributos contenidos en la clase (los que ya vimos recientemente).
Por ejemplo: self.empresa está llamando al atributo “empresa” de la clase.
Mientras que mediante: self.empresa = 'Maestros del Web', le estoy asignando el valor “Maestros del Web” al atributo empresa de la clase (recuerda que un atributo es una variable).

Referencia a propiedades
Cuando necesito recurrir a un atributo de la clase, dentro de una función, escribo self.nombre_del_atributo
Todo el código contenido dentro de una función (es decir, el que esté debajo de la definición de la función, con tabulado), se llama algoritmo, y es el que indicará a la función, qué es lo que debe hacer.
""")
