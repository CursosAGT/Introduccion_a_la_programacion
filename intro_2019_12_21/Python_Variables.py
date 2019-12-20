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
print("##      Unidad 2 - Variables, Listas                                      ##");
print("##            * Tipos de variables                                        ##");
print("##            * Procesamiento de cadenas                                  ##");
print("##                                                                        ##");
print("############################################################################");
print("##                                                                        ##");
print("##                                                                        ##");
print("##                                Objetos                                 ##");
print("##                                                                        ##");
print("##                               Variables                                ##");
print("##                       -----------------------                          ##");
print("##                                                                        ##");
print("##                       Crear archivos con extencion                     ##");
print("##                                                   .py                  ##");
print("##                                                   .pyc                 ##");
print("##                                                   .c                   ##");
print("##                                                                        ##");
print("##               and, as, assert, break, class, continue                  ##");
print("##               def, del, elif, else, except, exec                       ##");
print("##               finally, for, from, global, if, import                   ##");
print("##               in, is, lambda, nonlocal, not, or                        ##");
print("##               pass, raise, return, try, while, with                    ##");
print("##               yield, True, False, None                                 ##");
print("##                                                                        ##");
print("##                      tipos de variables                                ##");
print("##                                          Mutable                       ##");
print("##                                          Inmutable                     ##");
print("##                                                                        ##");
print("##                                          string                        ##");
print("##                                          float                         ##");
print("##                                          Intenger                      ##");
print("##                                          long...                       ##");
print("##                                                                        ##");
print("##            espacio en memoria                                          ##");
print("##                                                                        ##");
print("##            limites de entrega del valor                                ##");
print("##                                locales                                 ##");
print("##                                nonlocal                                ##");
print("##                                globales                                ##");
print("##                                                                        ##");
print("##            escribir un texto                                           ##");
print("##                                                                        ##");
print("##            texto desde una variable                                    ##");
print("##                                                                        ##");
print("##                                                                        ##");
print("############################################################################");
def limpiar():
    import os
    if os.name == 'nt':
        os.system('cls')
    else:
        os.system('clear')
print(input("continuar?"));
print("\n");
print("Mutable: su contenido (o dicho valor) puede cambiarse en tiempo de ejecución.");
print("Inmutable: su contenido (o dicho valor) no puede cambiarse en tiempo de ejecución.\n");
print("\n");
print("Categoría de tipo________Nombre______Descripción");
print("Números inmutables_______int_________entero");
print("_________________________long________entero largo");
print("_________________________float_______coma flotante");
print("_________________________complex_____complejo");
print("_________________________bool________booleano True / False");
print("Secuencias inmutables____str_________cadena de caracteres");
print("_________________________unicode_____cadena de caracteres Unicode");
print("_________________________tuple_______tupla");
print("_________________________xrange______rango inmutable");
print("Secuencias mutables______list________lista");
print("_________________________range_______rango mutable");
print("Mapeosprint______________dict________diccionario");
print("Conjuntos mutables_______set_________conjunto mutable");
print("Conjuntos inmutables_____frozenset___Conjunto inmutable");
print("\n");
print("\nhttp://docs.python.org.ar/tutorial/3/classes.html");
print("\n Objeto, es su materialización de algo incluso un dato");
print("\n Clase, es el razonamiento abstracto de un objeto");
print("\n Instanciar, es crear objetos desde una clase");
print("\n Las clases en este contexto permiten definir los atributos y el comportamiento, mediante métodos, de los objetos de un programa. Una clase es una especie de plantilla o prototipo que se utiliza para crear instancias individuales del mismo tipo de objeto.");
print("\n Los atributos definen las características propias del objeto y modifican su estado. Son datos asociados a las clases y a los objetos creados a partir de ellas.");
print("\n De ello, se deducen los dos tipos de atributos o de variables existentes: variables de clase y variables de instancia (objetos).");
print("\n Los métodos son bloques de código (o funciones) de una clase que se utilizan para definir el comportamiento de los objetos.");
print("\n Tanto para acceder a los atributos como para llamar a los métodos se utiliza el método denominado de notación de punto que se basa en escribir el nombre del objeto o de la clase seguido de un punto y el nombre del atributo o del método con los argumentos que procedan: clase.atributo, objeto.atributo, objeto.método([argumentos]).");
print("\n ");
print("\n Una variable de clase es compartida por todas las instancias de una clase. Se definen dentro de la clase (después del encabezado de la clase) pero nunca dentro de un método. Este tipo de variables no se utilizan con tanta frecuencia como las variables de instancia.");
print("\n Una variable de instancia se define dentro de un método y pertenece a un objeto determinado de la clase instanciada. ");
print("\n ");
print(input("continuar?"));
limpiar();
print("#########################################################");
# Ej 000_V_1
print("Inicio ej000_V_1");
print("http://docs.python.org.ar/tutorial/3/classes.html")
print ("https://www.python.org/downloads/");
print ("https://pythones.net/instalando-python-3-que-es-un-ide/");
print ("https://python-para-impacientes.blogspot.com/2016/02/variables-de-control-en-tkinter.html");
print ("https://pythones.net/instalando-python-3-que-es-un-ide/\n\n")
print("############################################################################");
print("##                                                                        ##");
print("##      Unidad 2 - Variables, Listas                                      ##");
print("##            * Tipos de variables                                        ##");
print("##            * Procesamiento de cadenas                                  ##");
print("##                                                                        ##");
print("############################################################################");     
print("  *String - Cadenas puede incorporar en cualquiera de los dos comillas simples (') o comillas dobles (\") o para multiplas lineas se usan comillas triples de cada una (''' o """);
cadena=('''"http://docs.python.org.ar/tutorial/3/classes.html"
"https://www.python.org/downloads/"
"https://pythones.net/instalando-python-3-que-es-un-ide/"
"https://python-para-impacientes.blogspot.com/2016/02/variables-de-control-en-tkinter.html"
"https://pythones.net/instalando-python-3-que-es-un-ide/")''');
print (cadena);
cadena=("Hola, todo el mundo!");print (type(cadena));
cadena=('Hola, todo el mundo!');print (type(cadena));
cadena=("17");print (type(cadena));
cadena=(17);print (type(cadena));
cadena=(3.2);print (type(cadena));
print (input("Fin continuar?"));
print("  *String - Cadenas con doble comillas pueden incluir  comilla simple dentro o viceversa");
cadena='UTN\n 2019'
print (cadena);
cadena=("UTN 2019")
print (cadena);
cadena='"hola" como va todo'
print (cadena);
cadena="'hola' como va todo"
print (cadena);
cadena='"hola" como va todo'
print (cadena);
print("  *String - Cadenas pueden tener (en ingles por ejemplo) 'detras de una letra por lo que hay que salbarla con '\'");
cadena='Cat\'s plate'
print (cadena);
cadena='It s\'nt a problem'
print (cadena);
print (3*"UTN 2019")
variable="UTN 2019"
print (variable)
print (variable[2])
print (variable[:4])
print (variable[4:])
print (variable[2:6])
variable1,variable2="UTN "," 2019"
a, b, c = 1, 2, 3
print ("a, b, c = 1, 2, 3")
print ("a = "+str(a))
print ("b = "+str(b))
print ("c = "+str(c))
print ("#--------------------------------")
print (variable1+variable2)
print (variable2)
print (variable1)
print (input("Fin Fin ej000_V_1 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 000_V_2
print("Inicio ej000_V_2");
var = "xxx"
def ej_000_V_3():
    var = "yyy"
    print(var);
ej_000_V_3();
print(var);
#--------------------------------
print("Ingrese datos alfa, numericos y mixtos")
for i in range (3):
	print("#--------------------------------");
	var_a = input("variable A:")
	var_b = input("variable B:")
	print ("variable a: "+var_a)
	print ("variable b: "+var_b)
	print ("variable a+b"+(var_a+var_b))
	print ("variable a+b"+(var_a*2+var_b))
#--------------------------------
print (input("Fin Fin ej000_V_2 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 000_V_3
print("Inicio ej000_V_3");
radio = input("¿Cuál es su radio?")
radio = float(radio)
area = 3.14159 * radio**2
print("El area es ", area)
#--------------------------------

nombre = "Facundo"
Nombre = "Joaquin"
print("nombre : "+nombre);
print("Nombre : "+Nombre);
print (input("Fin Fin ej000_V_3 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 000_V_4
print("Inicio ej000_V_4");
print("############################");
print("## a += b 	a = a + b    ##");
print("## a -= b 	a = a - b    ##");
print("## a *= b 	a = a * b    ##");
print("## a /= b 	a = a / b    ##");
print("## a **= b 	a = a ** b   ##");
print("## a //= b 	a = a // b   ##");
print("## a %= b 	a = a % b    ##");
print("############################");
a=8
b=5
print ("a = "+str(a));
print ("b = "+str(b));
a += b;print ("a += b");
print ("a = "+str(a));
a -= b;print ("a -= b");
print ("a = "+str(a));
a *= b;print ("a *= b");
print ("a = "+str(a));
a /= b;print ("a /= b");
print ("a = "+str(a));
a **= b;print ("a **= b");
print ("a = "+str(a));
a //= b;print ("a //= b");
print ("a = "+str(a));
a %= b;print ("a %= b");
print ("a = "+str(a));

print (input("Fin Fin ej000_V_4 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 000_V_5
print("Inicio ej000_V_5");


variable = "variable original"
def variable_global():
	print ("INGERSO A LA FUNCION")
	global variable1
	variable = "variable global modificada desde dentro de una funcion"

print ("variable original: ",end=(""))
print (variable)
variable_global()
print ("variable global modificada: ",end=(""))
print (variable)

print (input("Fin Fin ej000_V_5 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 000_V_6
print("Inicio ej000_V_6");


cadena='"hola" como va todo AHORA DARE UN ERROR'
print (cadena);
del cadena
print (cadena);

print("\n por favor cargue 'AGT_Ej_000_Ambitos.py' ");
