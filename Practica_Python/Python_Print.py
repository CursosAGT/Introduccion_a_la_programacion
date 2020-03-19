#!/usr/bin/env python
# -*- coding: utf-8 -*-
# AGT
# Copyright 2019 Ariel H Garcia Traba <ariel.garcia.traba@gmail.com>
print("""
############################################################################
##                                                                        ##
##      Unidad 1 -¿Qué es Python?                                         ##
##            * Instalación y configuración                               ##
##            * Errores sintácticos y lógicos                             ##
##            * Programación secuencial                                   ##
##            * Estructuras condicionales simples, compuestas y anidadas  ##
##            * Estructuras repetitivas                                   ##
##                                                                        ##
##      Unidad 2 - Variables, Listas                                      ##
##            * Tipos de variables                                        ##
##            * Procesamiento de cadenas                                  ##
##            * Listas                                                    ##
##            * Diccionarios                                              ##
##                                                                        ##
##      Unidad 3 - Funciones                                              ##
##            * Parámetros                                                ##
##            * Retorno de datos                                          ##
##            * Return de listas                                          ##
##            * Parámetros con valor por defecto                          ##
##                                                                        ##
##      Unidad 4 - Listas, Tuplas y Diccionarios                          ##
##         Listas                                                         ##
##            * Índices                                                   ##
##            * Recorrer listas                                           ##
##         Tuplas                                                         ##
##            * Índices                                                   ##
##            * Recorrer Tuplas                                           ##
##         Diccionarios                                                   ##
##            * Funcionamiento de diccionarios                            ##
##            * Estructuras tipo JSON                                     ##
##                                                                        ##
##         Unidad 5 - MySQL, Parte 1                                      ##
##            * INSERT, UPDATE, DELETE, SELECT                            ##
##            * FECHAS Y HORAS                                            ##
##            * %LIKE%                                                    ##
##            * JOIN                                                      ##
##                                                                        ##
##         Unidad 6 - MySQL, Parte 2                                      ##
##            * MySQL en Python                                           ##
##            * Cursor y verificación de consultas                        ##
##            * Manejo de errores                                         ##
##                                                                        ##
##         Unidad 7 - Fechas, Horas, Archivos                             ##
##            * Modulo time, datetime                                     ##
##            * Manejo de fechas y horas                                  ##
##            * Operaciones con archivos                                  ##
##                                                                        ##
##         Unidad 8 - OPEN CV                                             ##
##            * Procesamiento de imágenes en OpenCV                       ##
##            * Detección y descripción de imágenes                       ##
##            * Detección de objetos                                      ##
##                                                                        ##
##         Unidad 9 - Programación de eventos                             ##
##            * Módulo sched                                              ##
##            * Declaración de programadores                              ##
##            * Programar eventos y poner en marcha el programador        ##
##            * Programación de eventos considerando prioridades          ##
##            * Cancelación de eventos                                    ##
##                                                                        ##
##         Unidad 10 - GIT Colaborativo -Pair Programming                 ##
##            * Introducción a CVS y comparativa con SVN                  ##
##            * Creando un repositorio con GIT, clonar, crear branches    ##
##            * Borrar, guardar (stash), recuperar (pop)                  ##
##            * Configuración de remote                                   ##
##            * Configuración de Git avanzada                             ##
##                                                                        ##
############################################################################
##                                                                        ##
##      Unidad 1 -¿Qué es Python?                                         ##
##            * Instalación y configuración                               ##
##            * Errores sintácticos y lógicos                             ##
##            * Programación secuencial                                   ##
##            * Estructuras condicionales simples, compuestas y anidadas  ##
##            * Estructuras repetitivas                                   ##
##                                                                        ##
############################################################################
##                                                                        ##
##                    Amigarse - nomenclatura                             ##
##                                                                        ##
##     Estilos*      Cod. ANSI     ||  Colores   Texto   Fondo            ##
##     Sin efecto      0           ||   Negro      30      40             ##
##     Negrita         1           ||   Blanco     37      47             ##
##     Débil           2           ||   Amarillo   33      43             ##
##     Cursiva         3           ||   Azul       34      44             ##
##     Subrayado       4           ||   Rojo       31      41             ##
##     Inverso         5           ||   Verde      32      42             ##
##     Oculto          6           ||   Morado     35      45             ##
##     Tachado         7           ||   Cian       36      46             ##
##                                                                        ##
############################################################################
‘\t’ – Horizontal tab
‘\n’ – Newline
‘\v’ – Vertical tab
‘\f’ – Feed
‘\r’ – Carriage return

""");
def limpiar():
    import os
    if os.name == 'nt':
        os.system('cls')
    else:
        os.system('clear')
#\033[cod_formato;cod_color_texto;cod_color_fondom
def visto():
	input("		continuar?");
	limpiar();
	print("https://python-para-impacientes.blogspot.com/2016/09/dar-color-las-salidas-en-la-consola.html")
	print(chr(27)+"[1;33m"+"Texto en negrita de color amarillo") 
	print("\x1b[1;33m"+"Texto en negrita de color amarillo") 
	print("\033[4;35m"+"Texto en negrita y subrayado de color morado") 
	print("\033[4;35m"+"Texto en negrita y subrayado de color morado")
	print ("Cambios de formato añadiendo uno nuevo al final de cada línea:")
	print("\033[2J\033[1;1f") # Borrar pantalla y situar cursor
	print("\033[1;33m"+"Texto en negrita color amarillo"+'\033[0;m') 
	print("\033[;36m"+"Texto normal de color cian")
	print("\033[4;35;47m"+"Texto subr morado sobre blanco"+'\033[0;m') 
	print("\033[4;35m"+"Texto normal subr color morado"+'\033[0;m')
	print ("\n\ntabla con todos los formatos posibles, recorriendo y cambiando estilos y colores:")
	def construye_tabla_formatos():
		for estilo in range(8):
			for color_texto    in range(30,38):
				cad_cod = ''
				for color_fondo    in range(40,48): 
					fmto = ';'.join([str(estilo), 
									 str(color_texto   ),
									 str(color_fondo   )]) 
					cad_cod+="\033["+fmto+"m "+fmto+" \033[0m" 
				print(cad_cod)
			print('\n')
	construye_tabla_formatos()

	input("		continuar?");
	limpiar();
	print("#########################################################");
	# Ej 001_1
	print("Inicio ej001_1");
	print ("linea 1");
	print ("linea 2");
	print ("linea 3");
	print ("--------");
	print ()
	print ("c:\nicolas");
	print (r"c:\nicolas");
	print ("c:\\nicolas");
	input("Fin ej001_1 \n		continuar?");
	limpiar();
	print("#########################################################");
	# Ej 001_2
	print("Inicio ej001_2");
	cadena = "es hora de trabajar grupo 2019-UTN"
	print ("La Cadena original es : ", cadena);
	input("continuar?");
	print(" print ('cadena',end=''); el, end=' ' genera que al final no se genere un final de linea por lo que siguiente printe sera seguido")
	print ("La Cadena original es : ", cadena, end="");
	print (cadena);
	input("continuar?");
	# multiples lineas 
	print ("# multiples lineas ")
	cadena2 = '''...Es hora
				de trabajar grupo 2019
				...UTN...'''
	print("Cadena 2 multilinea ", end="");
	print(cadena2);
	input("continuar?");
	print ("La Cadena original es : ", cadena, "");
	# Impresion del primir caracter 
	print("El primer caracter de la Cadena es: ", end="");
	print(cadena[0]);
	# Impresion del ultimo caracter 
	print("El ultimo caracter de la Cadena es: ", end="");
	print(cadena[-1]);
	# Impresion del 3er al 12do caracter 
	print("Sector de la cadena ubicada entre los caracteres 3-19: ", end="");
	print(cadena[3:19]);
	input("continuar?");
	print ("Rellena con 0 en un sector de 40 caracteres");
	print(cadena.zfill(40)) 
	# Impresion del Cadena alinecion centrada
	print ("Alinecion en un sector de 40 caracteres");
	print ("Alinecion centrada de la Cadena : ", end="");
	print (cadena.center(40), "");
	# Impresion del Cadena alinecion centrada con numerales
	print ("Alinecion centrada con agregando #: ", end="");
	print (cadena.center(40, '#'));
	input("continuar?");
	# Impresion del Cadena alinecion izquierda
	print ("Alinecion izquierda de la Cadena : ", end="");
	print (cadena.ljust(40), "");
	# Impresion del Cadena alinecion izquierda con numerales
	print ("Alinecion izquierda de la Cadena adregando #: ", end="");
	print (cadena.ljust(40, '#'));
	input("continuar?");
	# Impresion del Cadena alinecion derecha
	print ("Alinecion derecha de la Cadena : ", end="");
	print (cadena.rjust(40), "");
	# Impresion del Cadena alinecion derecha con numerales
	print ("Alinecion derecha de la Cadena adregando #: ", end="");
	print (cadena.rjust(40, '#'));
	input("Fin ej001_2 \n		continuar?");
	limpiar();
	print("#########################################################");
	# Ej 001_3
	def ej001_3(linea):
		print ("\n\t DATO A llamada desde linea :"+str(linea));
		print ("\t DATO B llamada desde linea :"+str(linea));
		print ("\t DATO C llamada desde linea :"+str(linea));
		print ("--------");
	print("Inicio ej001_3");
	ej001_3(1) #llamada a la funcion
	ej001_3(2) #llamada a la funcion
	ej001_3(3) #llamada a la funcion
	input("Fin ej001_3 \n		continuar?");
	limpiar();

	print("#########################################################");
	# Ej 001_4
	def ej001_4():
		var_entera_1 = 5
		var_entera_2 = 3
		var_entera_3 = 4
		print (var_entera_1);
		print (var_entera_2);
		print (var_entera_3);
		print (var_entera_1*var_entera_3-var_entera_2);
		print ((var_entera_1*var_entera_3+1)/var_entera_2);
	print("Inicio ej001_4");
	ej001_4() #llamada a la funcion
	input("Fin ej001_4 \n		continuar?");
	limpiar();
	print("#########################################################");
	# Ej 001_5
	print("Inicio ej001_5");
	def ej001_5(var_entera_1,var_entera_2,var_entera_3):
		print ("var_entera_1 = "+ str(var_entera_1));
		print ("var_entera_2 = "+ str(var_entera_2));
		print ("var_entera_3 = "+ str(var_entera_3));
		print ("operacion N 1 = "+ str(var_entera_1*var_entera_3-var_entera_2));
		print ("operacion N 2 = "+ str((var_entera_1*var_entera_3+1)/var_entera_2));
	ej001_5(4,5,6) #llamada a la funcion
	input("Fin ej001_5 \n		continuar?");
	limpiar();
	print("#########################################################");
	# Ej 001_6
	print("Inicio ej001_6");
	var_entera_1 = 4
	var_entera_2 = 5
	var_entera_3 = 6
	print ("var_entera_1 = "+ str(var_entera_1));
	print ("var_entera_2 = "+ str(var_entera_2));
	print ("var_entera_3 = "+ str(var_entera_3));

	def ej001_6(var_entera_1_2,var_entera_2_2,var_entera_3_2):
		respuesta1 =(var_entera_1_2*var_entera_3_2-var_entera_2_2);
		respuesta2 = ((var_entera_1_2*var_entera_3_2+1)/var_entera_2_2);
		return respuesta1

	operacion_N1 = ej001_6(var_entera_1,var_entera_2,var_entera_3) #llamada a la funcion 

	print ("operacion N 1 = "+ str(operacion_N1));
	input("Fin ej001_6 \n		continuar?");
	limpiar();
	print("#########################################################");
	# Ej 001_7
	print("Inicio ej001_7");
	var_entera_1 = 4.5
	var_entera_2 = 5.5
	var_entera_3 = 6.5
	print(f"var_entera_1 = {var_entera_1}");
	print(f"var_entera_2 = {var_entera_2}");
	print(f"var_entera_3 = {var_entera_3}");
	def ej001_7(var_entera_1_2,var_entera_2_2,var_entera_3_2):
		respuesta1 =(var_entera_1_2*var_entera_3_2-var_entera_2_2);
		respuesta2 = ((var_entera_1_2*var_entera_3_2+1)/var_entera_2_2);
		return respuesta1
	print ("llamo a una funcion que devuelve un resultado que imprimo")
	print ("operacion N 1 = "+ str(ej001_7(var_entera_1,var_entera_2,var_entera_3)))
	print ("operacion N 1 = "+ str(operacion_N1));
	print("largo de la cadena :"+str(len(str(operacion_N1))));
	input("Fin ej001_7 \n		continuar?");
	limpiar();
	print("#########################################################");
	# Ej 001_8
	print("Inicio ej001_8");
	print ("Solos");
	print ("llamada a la funcion cambiando el orden de las variables en el llamado luego en la definicion");
	input("Fin ej001_8 \n		continuar?");
	limpiar();
	print("#########################################################");
	# Ej 001_9
	print("Inicio ej001_9");
	print ("Solos");
	print ("llamada a la funcion para que la devolucion sea la respuesta 2");
	input("Fin ej001_9 \n		continuar?");
	limpiar();
	print("#########################################################");

	# Ej 001_10
	print("Inicio ej001_10");
	print("leer\nhttp://pyspanishdoc.sourceforge.net/lib/string-methods.html");
	texto_en_memoria="Un lenguaje interpretado es un lenguaje de programación para el que la mayoría de sus implementaciones ejecuta las instrucciones directamente, sin una previa compilación del programa a instrucciones en lenguaje máquina. El intérprete ejecuta el programa directamente, traduciendo cada sentencia en una secuencia de una o más subrutinas ya compiladas en código máquina."
	print(texto_en_memoria);

	print("---------------------------------------------------------------------");
	print("Upper : "+str(texto_en_memoria.upper()));
	print("---------------------------------------------------------------------");
	print("lower : "+str(texto_en_memoria.lower()));
	print("---------------------------------------------------------------------");
	print("capitalize : "+str(texto_en_memoria.capitalize()));
	print("---------------------------------------------------------------------");
	print("startswith 'Un lenguaje' <true / false> : "+str(texto_en_memoria.startswith('Un lenguaje')));
	print("startswith 'Dos lenguajes' <true / false> : "+str(texto_en_memoria.startswith('Dos lenguajes')));
	print("---------------------------------------------------------------------");
	print("endswith 'máquina.' <true / false> : "+str(texto_en_memoria.endswith('máquina.')));
	print("endswith 'máquinas.' <true / false> : "+str(texto_en_memoria.endswith('máquinas.')));
	print("---------------------------------------------------------------------");
	input("	continuar?");
	caracter_buscado="i"
	contador_caracter_buscado=texto_en_memoria.count(caracter_buscado);
	print("Cantidad de caracteres "+str(caracter_buscado)+" : "+str(contador_caracter_buscado));
	print("---------------------------------------------------------------------");
	print(texto_en_memoria);
	print("---------------------------------------------------------------------");
	print("split, busca el(los) caracter(es) buscados y genera una lista con los cortes");
	print("split ´ ´: "+str(texto_en_memoria.split(" ")));


	print("---------------------------------------------------------------------");
	print("strip() remueve los caracteres de ambos extremos");
	print(texto_en_memoria.strip())
	print("strip 'Un': "+str(texto_en_memoria.strip("Un")));
	print("---------------------------------------------------------------------");
	print("replace 'lenguaje' por 'l.de alto nivel' : "+str(texto_en_memoria.replace("lenguaje", "l.de alto nivel")));
	print("---------------------------------------------------------------------");
	texto_buscado="lenguaje"
	print("Texto buscado : '"+str(caracter_buscado)+"'"); 
	print("find: Texto ubicado desde la izquierda en cantidad de caracter : "+str(texto_en_memoria.find(texto_buscado)));
	print("rfind: Texto ubicado desde la derecha en cantidad de caracter : "+str(texto_en_memoria.rfind(texto_buscado)));
	print("index: Texto ubicado desde la izquierda en cantidad de caracter : "+str(texto_en_memoria.index(texto_buscado)));
	print("Continua en ej001_18");
	input("Fin ej001_10 \n		continuar?");
	limpiar();
	print("#########################################################");
	# Ej 001_11
	print("Inicio ej001_11");
	nombre = "Ariel";
	apellido=["Garcia","Traba"];
	edad = 45;

	print ("""Formateo de string con objetos dentro
			%s - String (or any object with a string representation, like numbers)
			%d - Integers
			%f - Floating point numbers
			%.<number of digits>f - Floating point numbers with a fixed amount of digits to the right of the dot.
			%x/%X - Integers in hex representation (lowercase/uppercase)
			""");
	print ("Hola {name} se que tenes {age} años.".format(name=nombre, age=edad));
	print ("Hola {} se que tenes {} años.".format(nombre, edad));
	print (f"Hola {nombre} se que tenes {edad} años.") ;
	print (f"Hola %s se que tenes %d años." % (nombre, edad)) ;

	cordenadas = (34.36, 58.26)
	print (f"eje X: {str(cordenadas[0])};  eje Y: {str(cordenadas[1])}");
	print (f"eje X: %f;  eje Y: %f" % (cordenadas[0],cordenadas[1]));
	print (f"eje X: %.2f;  eje Y: %.3f" % (cordenadas[0],cordenadas[1]));
	data = [nombre,apellido,edad];
	print ("Datos obtenidos : %s " % data)

	input("Fin ej001_11 \n		continuar?");
	limpiar();
	print("#########################################################");
	# Ej 001_13
	print("Inicio ej001_13 ");
	print ("Formateo de string con objetos y funciones dentro")
	nombre = "Ariel";
	apellido=["Garcia","Traba"];
	edad = 45;
	barrio="LOURDES"
	apellido1="Garcia"
	apellido2="Traba"

	print (" Uso de objeto.upper(), .lower() .capitalize() en un string ")
	print (f"Hola {nombre.upper()} se que vivis en {barrio.lower()}, que cumpliras {int(edad)+1} años.")
	print (f"{nombre.upper()} tus apellidos son {apellido[0].capitalize()} y {apellido[1].capitalize()} se que vivis en {barrio.lower()}")
	input("Fin ej001_13 \n		continuar?");
	limpiar();
	print("#########################################################");
	# Ej 001_14
	print("Inicio ej001_14");
	print (" Uso de objeto.swapcase(), .title() en un string ")
	cadena_de_datos=" Un lenguaje interpretado es un lenguaje de programación para el que la mayoría de sus implementaciones ejecuta las instrucciones directamente, sin una previa compilación del programa a instrucciones en lenguaje máquina. El intérprete ejecuta el programa directamente, traduciendo cada sentencia en una secuencia de una o más subrutinas ya compiladas en código máquina."
	print("swapcase() :- invierte minusculas por mayosculas y viceversa")
	# Coverting string into its swapped case 
	print("Cadena_de_datos :\n"+cadena_de_datos.swapcase()); 
	print("title() :- coloca cada letra despues de un espacio en mayuscula, el resto en minuscula")  
	print("Cadena_de_datos :\n"+cadena_de_datos.title()); 
	input("Fin ej001_14 \n		continuar?");
	limpiar();
	print("#########################################################");
	# Ej 001_15
	print("Inicio ej001_15");
	print ("uso de libreria # datetime ")
	import datetime 
	fecha = datetime.datetime.today() 
	print(f"hoy es {fecha:%d %B, %Y}") 
	print("\t\t\tSe continuara el tema en Python_Manejo_de_Fechas.py") 
	input("Fin ej001_15 \n		continuar?");
	limpiar();
	print("#########################################################");
	# Ej 001_16
	print("Inicio ej001_16");
	nombre = "shaka_zulu";
	print ("segun tabla de caracteres") ;
	print (f"En {nombre} el caracter mas bajo es :"+(min(nombre))); 
	print (f"En {nombre} el caracter mas alto es :"+(max(nombre))); 
	input("Fin ej001_16 \n		continuar?");
	limpiar();
	print("#########################################################");
	# Ej 001_17
	print("Inicio ej001_17");
	print (" Uso de objeto.split(), .rsplit() .join() .rstrip() .lstrip() en un string ")
	print ("split convierte una cadena de texto en una lista. Por defecto al separarse por espacios, los elementos de dicha lista serán las palabras de la cadena.")
	print ("join convierte una lista en una cadena formada por los elementos de la lista separados por comas.")
	gracia= "ariel garcia traba"
	print(gracia.casefold());
	print ("split divido-fracciono-separo una cadena dependiendo del caracter bucado")
	print(gracia.split( ))# divido en un espacios
	print ("split divido-fracciono-separo al encontrar 'a'")
	print(gracia.rsplit('a'))# divido despues 'a'
	print ("split divido-fracciono-separo al encontrar la 2da'a' ")
	print(gracia.split('a', 2))# divido despues del limite de 1 'a'
	print ("rsplit() divido-fracciono-separo una cadena dependiendo del caracter bucado de DERECHA a izq")
	print ("rsplit divido-fracciono-separo al encontrar la 2da'a' de derecha a iz")
	print(gracia.rsplit('a', 2))# divido despues del limite de 2 'a'
	resultado=gracia.split()# divido en un espacios
	print ("lista original :"+str(resultado))
	print ("Join - genero una cadena de caracteres a una lista' ")
	lista =",".join(resultado)
	print ("Join -"+lista)
	print ("rpartition convierte una lista en una cadena a partir de una cadena de corte.")
	busqueda="cia"
	print("Busqueda :"+busqueda+" en "+gracia+"  :",end= " ")
	print(gracia.rpartition(busqueda)) 
	print ("lstrip corta de una cadena la parte buscada de izquierda a derecha.")
	busqueda="Fac"
	print("Busqueda :"+busqueda+" en "+gracia+"  :",end= " ")
	print(gracia.lstrip('Fac')) 
	print ("rstrip corta de una cadena la parte buscada de derecha a izquierda.")
	busqueda="ti"
	print("Busqueda :"+busqueda+" en "+gracia+"  :",end= " ")
	print(gracia.rstrip('busqueda')) 
	input("Fin ej001_17 \n		continuar?");
	limpiar();
	print("#########################################################");
	# Ej 001_18
	print("Inicio ej001_18");
	print (" Uso de objeto.rfind(), .find()  en un string ")
	cadena_de_datos=" Un lenguaje interpretado es un lenguaje de programación para el que la mayoría de sus implementaciones ejecuta las instrucciones directamente, sin una previa compilación del programa a instrucciones en lenguaje máquina. El intérprete ejecuta el programa directamente, traduciendo cada sentencia en una secuencia de una o más subrutinas ya compiladas en código máquina."
	busqueda = "lenguaje"
	print("cadena_de_datos : \n"+cadena_de_datos);
	print("busqueda : "+busqueda);
	# using find() to find first occurrence of busqueda 
	print ("Primer encuentro (desde la izquierda) Caracter nº: ", end="") 
	print (cadena_de_datos.find( busqueda, 4) ) 
	# using rfind() to find last occurrence of busqueda 
	print ("Primer encuentro (desde la derecha) o ultimo Caracter nº: ", end="") 
	print ( cadena_de_datos.rfind( busqueda, 4) ) 
	input("Fin ej001_18 \n		continuar?");
	limpiar();
print("#########################################################");
# Ej 001_19
print("Inicio ej001_19");
def reintento():
	print (" Uso de objeto.isalpha(), .isupper(), .islower(), .isspace(), .isnumeric(), .isdigit()en un string ")
	string = input("Escriba una palabra o valor  :")
	
	
	if string.isalpha() == True:
		print ("fue escrita solos con caracteres alfabeticos")
		if string.isupper() == True:
			print ("fue escrita todo mayusculas")
		elif string.islower() == True:
			print ("fue escrita todo minusculas")
	elif string.isnumeric() == True:
		print ("fue escrito solo numeros en cualquier sistema [integers, fractions, subscript, superscript, roman numerals etc.(all written in unicode)]")
		if string.isdigit() == True:
			print ("fue escrita todo con digitos 0123456789")
	elif string.isspace() == True:
		print ("fue escrito espacio(s) en blanco")
	else:
		print ("fue escrita mezclado mayusculas y minusculas")
	fin = input("Reintento (S/N)");
	return (fin)
fin=reintento()
while fin.upper() !="N" :
	fin=reintento()

input("Fin ej001_19 \n		continuar?");
limpiar();
print("#########################################################");
# hacer que pase por un for x in string: y chequear cada char si es isnumeric o is alph contarla
# Ej 001_20###################################################################################################################################################################################################################################################################################
print("Inicio ej001_19");
print (" Uso de objeto.rstrip() .lstrip() en un string ")
cadena_de_datos="abcdefg1234567890hijk"
print("cadena_de_datos : "+cadena_de_datos);
print("isalnum - es alfanumerica :"+str(cadena_de_datos.isalnum()));

cadena_de_datos="ab cd efg123 456789 0hijk"
print("cadena_de_datos : "+cadena_de_datos);
print("isalnum - es alfanumerica :"+str(cadena_de_datos.isalnum()));
print (" Uso de objeto.isupper(), .islower() .isspace() .rstrip() .lstrip() en un string ")


input("Fin ej001_19 \n		continuar?");
limpiar();
print("#########################################################");
# string which is to be stripped 
string = "UTNssss"
  
# Removes given set of characters from 
# right. 
print(string.rstrip('s'))  
input("Fin ej001_19 \n		continuar?");
limpiar();
print("#########################################################");
"""
isprintable() in Python and its application

In Python, isprintable() is a built-in method used for string handling.
The isprintable() methods returns “True” if all characters in the string are printable or the string is empty, Otherwise, It returns “False”.
This function is used to check if the argument contains any printable characters such as :

    Digits ( 0123456789 )
    Uppercase letters ( ABCDEFGHIJKLMNOPQRSTUVWXYZ )
    Lowercase letters ( abcdefghijklmnopqrstuvwxyz )
    Punctuation characters ( !”#$%&'()*+, -./:;?@[\]^_`{ | }~ )
    Space ( )
"""
