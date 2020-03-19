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
print("""
Generadores
------------
Los generadores son una forma sencilla y potente de iterador.
Un generador es una función especial que produce secuencias completas de resultados en lugar de ofrecer un único valor. 
n apariencia es como una función típica pero en lugar de devolver los valores con return lo hace con la declaración yield.
Hay que precisar que el término generador define tanto a la propia función como al resultado que produce.
Una característica importante de los generadores es que tanto las variables locales como el punto de inicio de la ejecución se guardan automáticamente
entre las llamadas sucesivas que se hagan al generador, es decir, a diferencia de una función común, una nueva llamada a un generador no inicia la ejecución al principio de la función,
sino que la reanuda inmediatamente después del punto donde se encuentre la última declaración yield (que es donde terminó la función en la última llamada). 
""")
print("Inicio ej007_1 - yield")

def numeros(max):
    contador=0
    while contador < max:
            yield contador
            contador+=1
resultados = numeros(5)
for variable in resultados:
    print(variable)
print("#########################################################");


def numeros_pares(maximo):
	contador = 1
	while contador<maximo:
		yield contador*2
		contador=contador+1
resultados = numeros_pares(10)
for variable in resultados:
	print (variable)

print (input("Fin ej007_1 \n		continuar?"));
limpiar();
print("#########################################################");
# Declara generador

def gen_basico():
    yield "uno"   
    yield "dos"
    yield "tres"
   
for valor in gen_basico():
    print(valor)  # uno, dos, tres

# Crea objeto generador y muestra tipo de objeto

generador = gen_basico()
print(generador)  # generator object gen_basico at 0x7f75ffad55e8
print(type(generador))  # class 'generator'

# Convierte a lista el objeto generador y muestra elementos

lista = list(generador)
print(lista)  # ['uno', 'dos', 'tres']
print(type(lista))  # class 'list'
print("#########################################################");
def gen_diez_numeros(inicio):
	fin = inicio + 10    
	while inicio < fin:
		inicio+=1
		yield inicio, fin
		print("sigo")
for inicio, fin in gen_diez_numeros(14):
    print(inicio, fin)
print("#########################################################");
print ("""TIP
Que es todo lo *contrarío* a usar listas.

Una lista tienes todos los elementos en memoria y vas iterando sobre cada elemento.
En cambio un generador cada elemento se va *generando* en cada iteracion. Y obviamente al ser generado no puedes usar indices.
Otra diferencia es que una lista es finita, pero un generador no. Ademas es mas eficiente en términos de memoria y de I/O un generador que una lista.
""")
