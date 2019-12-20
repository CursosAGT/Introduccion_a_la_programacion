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
print("##                                CLASES                                  ##");
print("##                               --------                                 ##");
print("##                                                                        ##");
print("##     __init__(self, ...)                                                ##");
print("##         This method is called just before the newly created object is  ##");
print("##         returned for usage.                                            ##");
print("##                                                                        ##");
print("##     __del__(self)                                                      ##");
print("##         Called just before the object is destroyed (which has          ##");
print("##         unpredictable timing, so avoid using this)                     ##");
print("##                                                                        ##");
print("##     __str__(self)                                                      ##");
print("##         Called when we use the print function or when str() is used.   ##");
print("##                                                                        ##");
print("##     __lt__(self, other)                                                ##");
print("##         Called when the less than operator (<) is used. Similarly,     ##");
print("##          there are special methods for all the operators (+, >, etc.)  ##");
print("##                                                                        ##");
print("##     __getitem__(self, key)                                             ##");
print("##         Called when x[key] indexing operation is used.                 ##");
print("##                                                                        ##");
print("##     __len__(self)                                                      ##");
print("##         Called when the built-in len() function is used for            ##");
print("##         the sequence object.                                           ##");
print("##                                                                        ##");
print("############################################################################");
print("##                                                                        ##");
print("##                      Clases                                            ##");
print("##                                                                        ##");
print("##                      Class (object) Padre                              ##");
print("##                                                                        ##");
print("##                      Objetos                  	                     ##");
print("##                             estado                                     ##");
print("##                             propiedades                                ##");
print("##                             comportamiento                             ##");
print("##                                                                        ##");
print("##                      Instancia                                         ##");
print("##                                                                        ##");
print("##                      Modularizacion                                    ##");
print("##                                                                        ##");
print("##                      Encapsulado                                       ##");
print("##                                                                        ##");
print("##                      Herencia                                          ##");
print("##                                                                        ##");
print("##                      Polimorfismo                                      ##");
print("##                                                                        ##");
print("##                      def funcion (general)                             ##");
print("##                      def metodo (clase)                                ##");
print("##                                                                        ##");
print("##                                                                        ##");
print("############################################################################");
print("Inicio ej010_1 - clase ");
print("https://python-para-impacientes.blogspot.com/2014/02/programacion-orientada-objetos.html");
print("https://www.youtube.com/watch?v=2UNrSiKEI8w");
print("https://www.youtube.com/watch?v=Y_SiIgxc-xI");
print("""TIPS
Un espacio de nombres es una relación de nombres a objetos.
Cualquier cosa después de un punto es un atributo
Las referencias a nombres en módulos son referencias a atributos:
Ej en la expresión modulo.funcion, modulo es un "objeto módulo" y funcion es un "atributo" de este objeto
Un ámbito es una región textual de un programa en Python donde un espacio de nombres es accesible directamente.
Cuando se ingresa una definición de clase, se crea un nuevo espacio de nombres, el cual se usa como ámbito local;
por lo tanto, todas las asignaciones a variables locales van a este nuevo espacio de nombres. 
En particular, las definiciones de funciones asocian el nombre de las funciones nuevas allí.
Una clase se finaliza normalmente se crea un objeto clase que envuelve los contenidos del espacio de nombres creado por la definición de la clase en el ambito
Este objeto clase se asocia al ambito logal original bajo el nombre que se le puso a la clase en el encabezado de su definición (Class Clases_ejemplo).
Los objetos clase soportan dos tipos de operaciones: hacer referencia a atributos e instanciación.

class Clases_ejemplo:
    atributos = 1973
    def instancia(self):
        return 'UTN 2019'

Clases_ejemplo.atributos (numero entero) y Clases_ejemplo.instancia (Función o Metodo).
Asignarcion exterior
	Clases_ejemplo.atributos = 2020
variable = Clases_ejemplo()

...crea una nueva instancia de la clase y asigna este objeto a la variable local "variable".

""")
class Clases_ejemplo:
    atributos = 1973
    def instancia(self):
        return 'UTN 2019'
variable = Clases_ejemplo() 
print (variable.atributos)
print (Clases_ejemplo.atributos)
print (variable.instancia())
print (Clases_ejemplo.instancia(0))
vi = variable.instancia
print(vi())
print("""
La única operación que es entendida por los objetos instancia es la referencia de atributos.
Hay dos tipos de nombres de atributos válidos, atributos de datos y métodos.
Los atributos de datos son creados la primera vez que se les asigna algo. 
Los atributos de método son funciones que “pertenecen a” un objeto instancia de clase.

class Clases_ejemplo:
    atributos = 1973
    def instancia(self):
        return 'UTN 2019'
variable = Clases_ejemplo()
print (variable.atributos) 
print (variable.instancia)
print (input("		continuar?"));
een nuestro ejemplo, variable.instancia es una referencia a un método válido, dado que Clases_ejemplo.instancia es una función, pero variable.atributos no lo es, dado que Clases_ejemplo.atributos no lo es. 
Pero variable.instancia no es la misma cosa que Clases_ejemplo.instancia; es un objeto método, no un objeto función.
""")
class Complejo:
	def __init__(self, parte_real, parte_imaginaria):
		self.real = parte_real
		self.imag = parte_imaginaria

variable = Complejo(3.0, -4.5)
print (variable.real, variable.imag)
print("""
Si aún no comprendés como funcionan los métodos, un vistazo a la implementación puede ayudar a clarificar este tema. Cuando se hace referencia un atributo de instancia y no es un atributo de datos, se busca dentro de su clase. Si el nombre denota un atributo de clase válido que es un objeto función, se crea un objeto método juntando (punteros a) el objeto instancia y el objeto función que ha sido encontrado. Este objeto abstracto creado de esta unión es el objeto método. Cuando el objeto método es llamado con una lista de argumentos, una lista de argumentos nueva es construida a partir del objeto instancia y la lista de argumentos original, y el objeto función es llamado con esta nueva lista de argumentos.
""")

class Bolsa:
    def __init__(self):
        self.datos = []
    def agregar(self, x):
        self.datos.append(x)
    def dobleagregar(self, x):
        self.agregar(x)
        self.agregar(x)
print("""

El método __init__ crea el objeto y luego lo inicializa, no es el constructor como tal,
El método __new__ sólo construye el objeto.
""")
  
print (input("		continuar?"));
print("Inicio ej010_1 - clase ");
class Piel(): 
    color = "verde" 
    textura = "pinchuda" 

class Pelo(): 
    color = "azul" 
    largo = 100

class Ojo(): 
    forma = "oblicua" 
    color = "purpura" 

class Objeto_prog(): 
    altura = 170 
    peso = 80
    edad = 40 
    piel_o = Piel() 	# propiedad compuesta por el objeto Objeto_prog piel
    ojo_o = Ojo()       # propiedad compuesta por el objeto Objeto_prog Ojo
    pelo_o = Pelo();
obj_desde_clase = Objeto_prog();
print (obj_desde_clase.edad);
print (obj_desde_clase.altura);
print (obj_desde_clase.pelo_o);
print (obj_desde_clase.pelo_o.color);
print (obj_desde_clase.pelo_o.largo);
obj_desde_clase.pelo_o = "rosa" 
print (obj_desde_clase.pelo_o);
print (input("Fin ej010_1 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 010_2
print("Inicio ej010_2 - clase ");
print ("""
__init__ is called when ever an object of the class is constructed. 
That means when ever we will create a student object we will see the message “A student object is created” in the prompt. 
You can see the first argument to the method is self. It is a special variable which points to the current object (like this in C++). 
The object is passed implicitly to every method available in it, but we have to get it explicitly in every method while writing the methods. 
Example shown below. Remember to declare all the possible attributes in the __init__ method itself.
Even if you are not using them right away, you can always assign them as None.""")
class Alumno():
#    'Clase para alumnos'
	numalumnos = 0
	sumanotas = 0
    
#	print("__init__ is a special method in Python classes, it is the constructor method for a class.")
	def __init__(self, nombre, nota):
		self.nombre = nombre
		self.nota = nota
		Alumno.numalumnos += 1
		Alumno.sumanotas += nota

	def mostrarNombreNota(self):
		return(self.nombre, self.nota);

	def mostrarNumAlumnos(self):
		return(Alumno.numalumnos);

	def mostrarSumaNotas(self):
		return(Alumno.sumanotas);

	def mostrarNotaMedia(self):
		if Alumno.numalumnos > 0:
			return(Alumno.sumanotas/Alumno.numalumnos);
		else:
			return("Sin alumnos");
			
print("Crear objetos (instancias) de una clase");
print("#Para crear instancias de una clase se llama a la clase por su propio nombre pasando los argumentos que requiera el método constructor __init__ si existe.");
alumno1 = Alumno("Maria", 8);
alumno2 = Alumno("Carlos", 6);
print("Todos los argumentos se pasan escribiéndolos entre paréntesis y separados por comas ('',''). El primer argumento self se omite porque su valor es una referencia al objeto y es implícito para todos los métodos.");
print("Accediendo a los atributos y llamando a los métodos");
print("Para acceder a la variable de un objeto se indica el nombre del objeto, seguido de un punto y el nombre de la variable:");
print(alumno1.nombre)  # María
print(alumno1.nota)  # 8
print("Para modificar la variable de un objeto se utiliza la misma notación para referirse al atributo y después del signo igual (=) se indica la nueva asignación:");
alumno1.nombre = "Carmela"
print("Para acceder a las variables de la clase se sigue la misma notación pero en vez de indicar el nombre del objeto se indica el nombre de la clase instanciada.");
print(Alumno.numalumnos)  # 2
print(Alumno.sumanotas)  # 14
print("Para llamar a un método se indica el nombre de objeto, seguido de un punto y el nombre del método. Si se requieren varios argumentos se pasan escribiéndolos entre paréntesis, separados por comas (","). Si no es necesario pasar argumentos se añaden los paréntesis vacíos '()' al nombre del método.");
print(alumno1.mostrarNombreNota())  # ('Carmen', 8);
print(alumno2.mostrarNombreNota())  # ('Carlos', 6);
print("Para suprimir un atributo:");
del alumno1.nombre
print("Si a continuación, se intenta acceder al valor del atributo borrado o se llama a algún método que lo utilice, se producirá la siguiente excepción:");
print("print(alumno1.mostrarNombreNota())");
print ("se generara el siguiente error 'AttributeError: 'Alumno' object has no attribute 'nombre'");
print("Pare crear nuevamente el atributo realizar una nueva asignación:");
alumno1.nombre = "Carmen"
print (input("Fin ej010_2 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 010_3
print("Inicio ej010_3 - clase ");

class Padre(object): 									#Creamos la clase Padre
	def __init__(self, ojos, cejas): 					#Definimos los Atributos
		self.ojos = ojos
		self.cejas = cejas
 
		
class Hijo(Padre): 										#Creamos clase hija que hereda de Padre
	def __init__(self, ojos, cejas, cara): 				#creamos el constructor de la clase especificando atributos
		Padre.__init__(self, ojos, cejas) 				#Especificamos la clase y llamamos a su constructor + Atributos
		self.cara = cara 								#Especificamos el nuevo atributo para Hijo
 
		
Tomas = Hijo('Marrones', 'Negras', 'Larga')
print (Tomas.ojos, Tomas.cejas, Tomas.cara)

print ("""De estas ultimas dos formas llamamos al Padre de la clase Hijo para no perder su código y ademas agregamos un atributo nuevo “cara” para la clase Hija. 
Recomiendo en caso de herencia simple utilizar Super()""")

print (input("Fin ej010_3 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 010_4
print("Inicio ej010_4 - clase ");


#https://www.youtube.com/watch?v=2UNrSiKEI8w
#https://www.youtube.com/watch?v=Y_SiIgxc-xI
class Humanoide(object):#										 		clases padre
	def __init__(self):#		Constructor de estado inicial
		self.__cabeza=1#           			estado inicial en la clase padre
		self.__piernas=2#           		estado inicial en la clase padre
		self.__brazos=2#           			estado inicial en la clase padre
		self.__ojos=2#           			estado inicial en la clase padre
		self.__orejas=2#           			estado inicial en la clase padre
		self.vigilia_reposo=False#          estado inicial en la clase padre
		self.hiberna=False#           		estado inicial en la clase padre
		self.simbionte=False#           	estado inicial en la clase padre
		self.emociones=True#           		estado inicial en la clase padre
		self.comerciantes=False#           	estado inicial en la clase padre
		self.luchadores=False#           	estado inicial en la clase padre
		self.logicos=False#           		estado inicial en la clase padre
		self.reproduccion_sexual=True#      estado inicial en la clase padre
		self.pelo=True#           			estado inicial en la clase padre
	def despertar(self,llamado):
		self.vigilia_reposo=llamado
		if (self.vigilia_reposo):
			return "Estado para audiencia: disponible"
		else:
			return "durmiendo, comunicacion pendiente"
	def estados(self,tipo,llamado):
		print ("Propiedad humanoide -"+(tipo));
		print ("	cabeza :",self.__cabeza);
		print ("	piernas :",self.__piernas);
		print ("	brazos :",self.__brazos);
		print ("	ojos :",self.__ojos);
		print ("	orejas :",self.__orejas);
		print ("	vigilia_reposo :",self.vigilia_reposo);
		print ("	hiberna :",self.hiberna);
		print ("	simbionte :",self.simbionte);
		print ("	emociones :",self.emociones);
		print ("	comerciantes :",self.comerciantes);
		print ("	luchadores :",self.luchadores);
		print ("	logicos :",self.logicos);
		print ("	reproduccion_sexual :",self.reproduccion_sexual);
		print ("	pelo :",self.pelo);
		print ("		comportamiento humanoide -terraqueo reunion :",self.despertar(llamado)) #Accion despertar
class Terraqueo(Humanoide):#									 		clases hija
	def __init__(self):#								Constructor de estado inicial
		super(Terraqueo,self).__init__(vigilia_reposo)#			se define a partir del constructor padre
		super(Terraqueo,self).__init__(hiberna)#				se define a partir del constructor padre
		super(Terraqueo,self).__init__(simbionte)#				se define a partir del constructor padre
		super(Terraqueo,self).__init__(emociones)#				se define a partir del constructor padre
		super(Terraqueo,self).__init__(comerciantes)#			se define a partir del constructor padre
		super(Terraqueo,self).__init__(luchadores)#				se define a partir del constructor padre
		super(Terraqueo,self).__init__(logicos)#				se define a partir del constructor padre
		super(Terraqueo,self).__init__(reproduccion_sexual)#	se define a partir del constructor padre
		super(Terraqueo,self).__init__(pelo)#					se define a partir del constructor padre
		self.continente_origen="Africa"#        				estado inicial en la clase hija
		self.pais_origen="Egipto"#       						estado inicial en la clase hija
		self.ciudad_origen="El Cairo"#       					estado inicial en la clase hija
		self.ano_origen=3500#       							estado inicial en la clase hija
class Europeo(Terraqueo):#									 		clases nieta
	def __init__(self):#								Constructor de estado inicial
		super(Europeo,self).__init__(vigilia_reposo)#			se define a partir del padre e hija
		self.continente_origen="Europa"
		Europeo,self.__init__(pais_origen)#						se define a partir del hijo
		Europeo,self.__init__(ciudad_origen)#					se define a partir del hijo
		Europeo,self.__init__(ano_origen)#						se define a partir del hijo	
	pass
class Americano(Terraqueo):#									 	clases nieta
	pass
class Asiatico(Terraqueo):#									 		clases nieta
	pass
terraqueo=Humanoide() #instancia desde clases
klingon=Humanoide() #instancia desde clases
vulcano=Humanoide() #instancia desde clases
bajoriano=Humanoide() #instancia desde clases
ferengi=Humanoide() #instancia desde clases
trill=Humanoide() #instancia desde clases
romuliano=Humanoide() #instancia desde clases

#genero impresion
terraqueo.estados("terraqueo",True);
klingon.estados("klingon",False);
vulcano.estados("vulcano",True);
bajoriano.estados("bajoriano",False);
ferengi.estados("ferengi",True);
trill.estados("trill",False);
romuliano.estados("romuliano",True);
var=input("enter para hacer cambios");

terraqueo.emociones=True#           Cambio estado inicial
klingon.luchadores=True#           Cambio estado inicial
klingon.emociones=True#           Cambio estado inicial
vulcano.emociones=False#           Cambio estado inicial
vulcano.logicos=False#           Cambio estado inicial
bajoriano.emociones=True#           Cambio estado inicial
ferengi.comerciantes=False#           Cambio estado inicial
trill.simbionte=True#           Cambio estado inicial
romuliano.luchadores=True#           Cambio estado inicial
terraqueo.__cabeza=4#           estado inicial
klingon.__cabeza=2#           estado inicial
vulcano.__piernas=6#           estado inicial
bajoriano.__brazos=9#           estado inicial
trill.__ojos=4#           estado inicial
romuliano.__orejas=3#           estado inicial

terraqueo.estados("terraqueo",True);
klingon.estados("klingon",False);
vulcano.estados("vulcano",True);
bajoriano.estados("bajoriano",False);
ferengi.estados("ferengi",True);
trill.estados("trill",False);
romuliano.estados("romuliano",True);
print (input("Fin ej010_4 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 010_5
