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
print("##         Unidad 5 - MySQL, Parte 1                                      ##");
print("##            * INSERT, UPDATE, DELETE, SELECT                            ##");
print("##            * FECHAS Y HORAS                                            ##");
print("##            * %LIKE%                                                    ##");
print("##            * JOIN                                                      ##");
print("##                                                                        ##");
print("############################################################################");
print("##                                                                        ##");
print("##                      Python List/Array Methods                         ##");
print("##                     ---------------------------                        ##");
print("##                                                                        ##");
print("##  Operator     Description                                              ##");
print("##                                                                        ##");
print("##  Button       The Button widget is used to display buttons in          ##");
print("##               your application.                                        ##");
print("##         Option   Description                                           ##");
print("##         activebackground-                                              ##");
print("##            Background color when the button is under the cursor        ##");
print("##         activeforeground-                                              ##");
print("##            Foreground color when the button is under the cursor        ##");
print("##         bd     -                                                       ##");
print("##            Border width in pixels. Default is 2.                       ##");
print("##         bg     -                                                       ##");
print("##            Normal background color.                                    ##");
print("##         command-                                                       ##");
print("##            Function or method to be called when the button is clicked. ##");
print("##         fg     -                                                       ##");
print("##            Normal foreground (text) color.                             ##");
print("##         font   -                                                       ##");
print("##            Text font to be used for the button's label.                ##");
print("##         height -                                                       ##");
print("##            Height of the button in text lines (for textual buttons)    ##");
print("##            or pixels (for images).                                     ##");
print("##         highlightcolor-                                                ##");
print("##            The color of the focus highlight when the widget has        ##");
print("##            focus.                                                      ##");
print("##         image  -                                                       ##");
print("##            Image to be displayed on the button (instead of text).      ##");
print("##         justify-                                                       ##");
print("##            How to show multiple text lines: LEFT to left-justify each  ##");
print("##            line; CENTER to center them; or RIGHT to right-justify.     ##");
print("##         padx   -                                                       ##");
print("##            Additional padding left and right of the text.              ##");
print("##         pady   -                                                       ##");
print("##            Additional padding above and below the text.                ##");
print("##         relief -                                                       ##");
print("##            Relief specifies the type of the border. Some of the values ##");
print("##                                                                        ##");
print("##            are SUNKEN, RAISED, GROOVE, and RIDGE.                      ##");
print("##         state  -                                                       ##");
print("##            Set this option to DISABLED to gray out the button and make ##");
print("##            it unresponsive. Has the value ACTIVE when the mouse        ##");
print("##            is over it. Default is NORMAL.                              ##");
print("##         underline-                                                     ##");
print("##            Default is -1, meaning that no character of the text on     ##");
print("##            the button will be underlined. If nonnegative,              ##");
print("##            the corresponding text character will be underlined.        ##");
print("##         width  -                                                       ##");
print("##            Width of the button in letters (if displaying text)         ##");
print("##            or pixels (if displaying an image).                         ##");
print("##         wraplength-                                                    ##");
print("##            If this value is set to a positive number, the text         ##");
print("##            lines will be wrapped to fit within this length.            ##");
print("##                                                                        ##");
print("##         Medthod-     Description                                       ##");
print("##         flash() -                                                      ##");
print("##            Causes the button to flash several times between active     ##");
print("##            and normal colors. Leaves the button in the state it was    ##");
print("##            in originally. Ignored if the button is disabled.           ##");
print("##         invoke()-                                                      ##");
print("##            Calls the button's callback, and returns what that function ##");
print("##            returns. Has no effect if the button is disabled or there   ##");
print("##            is no callback.                                             ##");
print("##  --------------------------------------------------------------------  ##");
print("##                                                                        ##");
print("##  Canvas       The Canvas widget is used to draw shapes, such as lines, ##");
print("##               ovals, polygons and rectangles, in your application.     ##");
print("##                                                                        ##");
print("##  Checkbutton  The Checkbutton widget is used to display a number of    ##");
print("##               options as checkboxes. The user can select multiple      ##");
print("##               options at a time.                                       ##");
print("##                                                                        ##");
print("##  Entry        The Label widget is used to provide a single-line caption##");
print("##               field for accepting values from a user.                  ##");
print("##                                                                        ##");
print("##  Frame        The Frame widget is used as a container widget to        ##");
print("##               organize other widgets.                                  ##");
print("##                                                                        ##");
print("##  Label        Returns the index of the first element with the specified##");
print("##               for other widgets. It can also contain images.           ##");
print("##                                                                        ##");
print("##  Listbox      The Listbox widget is used to provide a list of options  ##");
print("##               to a user.                                               ##");
print("##                                                                        ##");
print("##  Menubutton   The Menubutton widget is used to display menus in your   ##");
print("##               application.                                             ##");
print("##                                                                        ##");
print("##  Menu         The Menu widget is used to provide various commands to   ##");
print("##               a user. These commands are contained inside Menubutton.  ##");
print("##                                                                        ##");
print("##  Message      The Message widget is used to display multiline text     ##");
print("##               fields for accepting values from a user.                 ##");
print("##                                                                        ##");
print("##  Radiobutton  The Radiobutton widget is used to display a number of    ##");
print("##               options as radio buttons. The user can select only one   ##"); 
print("##               option at a time.                                        ##");
print("##                                                                        ##");
print("##  Scale        The Scale widget is used to provide a slider widget.     ##");
print("##                                                                        ##");
print("##  Scrollbar    The Scrollbar widget is used to add scrolling capability ##");
print("##                to various widgets, such as list boxes.                 ##");
print("##                                                                        ##");
print("##  Text         The Text widget is used to display text in multiple lines##");
print("##                                                                        ##");
print("##  Toplevel     The Toplevel widget is used to provide a separate window ##");
print("##                container.                                              ##");
print("##                                                                        ##");
print("##  Spinbox      The Spinbox widget is a variant of the standard Tkinter  ##");
print("##               Entry widget, which can be used to select from a fixed   ##");
print("##               number of values.                                        ##");
print("##                                                                        ##");
print("##  PanedWindow  A PanedWindow is a container widget that may contain any ##");
print("##                number of panes, arranged horizontally or vertically.   ##");
print("##                                                                        ##");
print("##  LabelFrame   A labelframe is a simple container widget. Its primary   ##");
print("##                purpose is to act as a spacer or container for complex  ##");
print("##                window layouts.                                         ##");
print("##                                                                        ##");
print("##  tkMessageBox This module is used to display message boxes in you      ##");
print("##                applications.                                           ##");
print("##                                                                        ##");
print("############################################################################");
print("##                                                                        ##");
print("##         Unidad 8,0                                                     ##");
print("##                                                                        ##");
print("############################################################################");
print ("https://docs.opencv.org/3.0-beta/doc/py_tutorials/py_tutorials.html")
print ("https://www.youtube.com/watch?v=CppgV8inf7g&pbjreload=10")
print("#########################################################")
print("Inicio ej 012_1 -  ")
from tkinter import *
print ("https://python-para-impacientes.blogspot.com/2015/12/tkinter-interfaces-graficas-en-python-i.html")
print ("http://pharalax.com/blog/python-desarrollo-de-interfaces-graficas-con-tkinter-labelsbuttonsentrys/")
print ("https://www.w3resource.com/python/python-tutorial.php/")
print ("https://www.w3schools.in/python-tutorial/")
print ("https://www.w3schools.com/python/default.asp")
print ("https://www.w3schools.com/python/python_examples.asp")
print ("https://www.tutorialspoint.com/python3/python_gui_programming.htm")
print ("https://www.pythondiario.com")
print ("https://www.tutorialspoint.com/python3/tk_button.htm")
print ("/")

 
def iniciar_pantalla_raiz():
	pantalla_raiz=Tk()
	pantalla_raiz.title("Mi primer pantalla")
	pantalla_raiz.geometry("640x480")
	btn4 = Button(pantalla_raiz, text= "Salir", bg= "Black", fg= "red", command=pantalla_raiz.destroy)
	btn4.grid(column=1, row=7)
	pantalla_raiz.mainloop
var = input ("inicio pantalla grafica '1'(S/N)")
if var.upper() =="S":
	iniciar_pantalla_raiz()
print (input("Fin ej 012_1 \n		continuar?"));
limpiar();
print("#########################################################");
# Ej 000_2
print("Inicio ej 0012_2");
from tkinter import *    # Carga módulo tk (widgets estándar)
from tkinter import ttk  # Carga ttk (para widgets nuevos 8.5+)
def iniciar2_pantalla_raiz():

	# Define la frame_pantalla_raiz principal de la aplicación

	pantalla_raiz = Tk()

	# Define las dimensiones de la frame_pantalla_raiz, que se ubicará en 
	# el centro de la pantalla. Si se omite esta línea la
	# frame_pantalla_raiz se adaptará a los widgets que se coloquen en
	# ella. 

	pantalla_raiz.geometry('300x200') # anchura x altura

	# Asigna un color de fondo a la frame_pantalla_raiz. Si se omite
	# esta línea el fondo será gris

	pantalla_raiz.configure(bg = 'beige')

	# Asigna un título a la frame_pantalla_raiz

	pantalla_raiz.title('Aplicación')

	# Define un botón en la parte inferior de la frame_pantalla_raiz
	# que cuando sea presionado hará que termine el programa.
	# El primer parámetro indica el nombre de la frame_pantalla_raiz 'raiz'
	# donde se ubicará el botón
	ttk.Button(pantalla_raiz, text='Salir', command=pantalla_raiz.destroy).pack(side=BOTTOM)
	ttk.Button(pantalla_raiz, text='terminar programa', command=quit).pack(side=BOTTOM)

	# Después de definir la frame_pantalla_raiz principal y un widget botón
	# la siguiente línea hará que cuando se ejecute el programa
	# construya y muestre la frame_pantalla_raiz, quedando a la espera de 
	# que alguna persona interactúe con ella.

	# Si la persona presiona sobre el botón Cerrar 'X', o bien,
	# sobre el botón 'Salir' el programa llegará a su fin.

	pantalla_raiz.mainloop()
var = input ("inicio pantalla grafica '2'(S/N)")
if var.upper() =="S":
	iniciar2_pantalla_raiz()
print (input("ej 012_2        continuar?"));
limpiar();
print("#########################################################");
# Ej 012_3
print("Inicio ej 012_3");
from tkinter import *    # Carga módulo tk (widgets estándar)
from tkinter import ttk  # Carga ttk (para widgets nuevos 8.5+)
def iniciar3_pantalla_raiz():

	pantalla_raiz=Tk()
	frame_pantalla_raiz=Frame(pantalla_raiz)
	frame_pantalla_raiz.pack()
	pantalla_raiz.geometry("300x200")
	pantalla_raiz.configure(bg = "#ff55ff")
	pantalla_raiz.title("UTN 2019 app")
	frame_pantalla_raiz = Frame(pantalla_raiz, width=640,height=480)
	frame_pantalla_raiz.pack(fill="both", expand="True")

	operacion=""
	reset_pantalla=False
	resultado=0
	password_personal=StringVar()
	Label(frame_pantalla_raiz, text="Usuario",font="15",fg="blue").grid(column=0, row=3, padx=5,pady=5, sticky="e")#este weste noth sour
	usuario_personal=StringVar()
	Cuadro_text_usuario=Entry(frame_pantalla_raiz, textvariable=usuario_personal)
	Cuadro_text_usuario.grid(column=1, row=3, padx=5,pady=5)
	Cuadro_text_usuario.config(background="black", fg="#03f943", justify="right")

	Label(frame_pantalla_raiz, text="password",font="15",fg="blue").grid(column=0, row=4, padx=5,pady=5, sticky="e")

	Cuadro_text_password=Entry(frame_pantalla_raiz, textvariable=password_personal)
	Cuadro_text_password.grid(column=1, row=4, padx=5,pady=5)
	Cuadro_text_password.config(background="black", fg="#03f943", justify="right")


	def codigo_btn0():
		print("envio un dato desde programa a un cuadro de texto")
		usuario_personal.set("mi_nombre_y_edad")
		password_personal.set("mi perro")
		
	def codigo_btn1(usuario_,password_):
		print("envio un dato desde un cuadro de texto a pantalla")
		print ("Username: " + str(usuario_))
		print ("Password: " + str(password_))
		usuario_personal.set("ok")
		password_personal.set("_*_")
		
	def codigo_btn2():
		print("envio un dato desde archivo a un cuadro de texto")
		archivo_de_texto=open("datos_pantalla.txt","r")# abre el archivo text.txt para lectura en bloque
		linea_texto_a_memoria=archivo_de_texto.readlines();
		print ("Username: " + str(linea_texto_a_memoria[0]))
		print ("Password: " + str(linea_texto_a_memoria[1]))
		usuario_personal.set(linea_texto_a_memoria[0])
		password_personal.set(linea_texto_a_memoria[1])
		archivo_de_texto.close();
		
	def codigo_btn3(usuario_,password_):
		datos_a_guardar = {}
		print("envio un dato desde un cuadro de texto a archivo")
		print ("Username: " + str(usuario_))
		print ("Password: " + str(password_))
		datos_a_guardar = {usuario_:password_}
		archivo_de_texto=open("datos_pantalla.txt","w")# abre el archivo datos_pantalla.txt para agregar datos
		archivo_de_texto.write(str(usuario_)+"\n");
		archivo_de_texto.write(str(password_));
		archivo_de_texto.close();
		usuario_personal.set("ok")
		password_personal.set("_*_")
			
	btn0 = Button(frame_pantalla_raiz,text="recuerdame", bg="black", fg="red", command=codigo_btn0)
	btn0.grid(column=0, row=0)
	btn1 = Button(frame_pantalla_raiz,text="mandar a pantalla", bg="white", fg="red", command=lambda:codigo_btn1(usuario_personal.get(),password_personal.get()))
	btn1.grid(column=1, row=0)
	btn2 = Button(frame_pantalla_raiz,text="desde archivo", bg="yellow", fg="red", command=lambda:codigo_btn2())
	btn2.grid(column=0, row=1)
	btn2 = Button(frame_pantalla_raiz,text="a archivo", bg="orange", fg="yellow", command=lambda:codigo_btn3(usuario_personal.get(),password_personal.get()))
	btn2.grid(column=1, row=1)
	btn4 = Button(frame_pantalla_raiz, text= "QUIT", bg="orange", fg= "black", command=pantalla_raiz.destroy)
	btn4.grid(column=1, row=7)
	frame_pantalla_raiz.mainloop()
var = input ("inicio pantalla grafica '3'(S/N)")
if var.upper() =="S":
	iniciar3_pantalla_raiz()
print (input("ej 012_3        continuar?"));
limpiar();
print("#########################################################");
# Ej 012_4
print("Inicio ej 012_4");
from tkinter import *    # Carga módulo tk (widgets estándar)
def iniciar4_pantalla_raiz():
	pantalla_raiz=Tk()
	pantalla_raiz.geometry("300x200")
	pantalla_raiz.configure(bg = "#ff55ff")
	pantalla_raiz.title("UTN 2019 app")

	pantalla_raiz.title("Aplicacion grafica en python")
	etiqueta_pantalla_raiz = Label(pantalla_raiz, text=etiquieta)
	boton_pantalla_raiz = Button(pantalla_raiz, text="OK!!", command=pantalla_raiz.destroy)

	etiqueta_pantalla_raiz.pack()
	boton_pantalla_raiz.pack()
	pantalla_raiz.mainloop()
var = input ("inicio pantalla grafica '4'(S/N)")
if var.upper() =="S":
	etiquieta= input ("ingrese su nombre:")
	iniciar4_pantalla_raiz()
print (input("ej 012-4        continuar?"));
limpiar();
print("#########################################################");
# Ej 012_5
print("Inicio ej 012_5");
from tkinter import *
from tkinter import ttk

# Crea una clase Python para definir el interfaz de usuario de
# la aplicación. Cuando se cree un objeto del tipo 'Aplicacion'
# se ejecutará automáticamente el método __init__() qué 
# construye y muestra la frame_pantalla_raiz con todos sus widgets: 

class C5_pantalla_raiz():


	def __init__(self):
		def ok_dato():
			nombre=ingreso.get()
			etiqueta.config(text="hola "+str(nombre)+" ingresa tu usuario")
		texto_ingreso =""
		pantalla_raiz = Tk()
		pantalla_raiz.config(width="600", height="650")
		pantalla_raiz.configure(bg = 'beige')
		pantalla_raiz.title('Aplicación')
		frame_pantalla_raiz=Frame(pantalla_raiz)
		frame_pantalla_raiz = Frame(pantalla_raiz, width=640,height=480)
		frame_pantalla_raiz.grid(column=0, row=0,padx=(5,5),pady=(10,10))
		frame_pantalla_raiz.columnconfigure(0,weight=1)
		frame_pantalla_raiz.rowconfigure(0,weight=1)
		frame_pantalla_raiz.config(bg = 'red')
		frame_pantalla_raiz.pack(fill="both", expand="True", anchor="center")
		etiqueta = Label(frame_pantalla_raiz,text="Ingrese su nombre : ")
		etiqueta.grid(column=1,row=2)
		ingreso=Entry(frame_pantalla_raiz,width=15,textvariable=texto_ingreso)
		ingreso.grid(column=3,row=2)
		btn0=Button(frame_pantalla_raiz, text='ok',command=ok_dato)	
		btn0.grid(column=3,row=4)
		btn1=Button(frame_pantalla_raiz, text='salir',command=pantalla_raiz.destroy)
		btn1.grid(column=2,row=4)

		pantalla_raiz.mainloop()
def iniciar5_pantalla_raiz():
	llamar=C5_pantalla_raiz()

	return 0

# Mediante el atributo __name__ tenemos acceso al nombre de un
# un módulo. Python utiliza este atributo cuando se ejecuta
# un programa para conocer si el módulo es ejecutado de forma
# independiente (en ese caso __name__ = '__main__') o es 
# importado:

if __name__ == '__main__':
	var = input ("inicio pantalla grafica '5'(S/N)")
	if var.upper() =="S":
		iniciar5_pantalla_raiz()


print (input("ej 012_5        continuar?"));
limpiar();
print("#########################################################");
# Ej 012_6
print("Inicio ej 012_6");
import time
import tkinter

def iniciar6_pantalla_raiz():
	def funcion():
		print("Espere por favor")
		pantalla_raiz.iconify()
		time.sleep(5)
		print("listo")
		pantalla_raiz.deiconify()
	pantalla_raiz = Tk()
	pantalla_raiz.geometry('300x200')
	pantalla_raiz.configure(bg = 'beige')
	pantalla_raiz.title('Aplicación')
	etiqueta_pantalla_raiz = Label(pantalla_raiz, text="Gracias por esperar")
	etiqueta_pantalla_raiz.pack()
	boton_pantalla_raiz = Button(pantalla_raiz, text='Minimizar', bg="orange", fg="red", command=funcion())
	boton_pantalla_2_raiz = Button(pantalla_raiz, text="SALIR", bg="orange", fg="red", command=pantalla_raiz.destroy).pack(side=BOTTOM)
	pantalla_raiz.mainloop
var = input ("inicio pantalla grafica '6'(S/N)")
if var.upper() =="S":
	iniciar6_pantalla_raiz()
print (input("ej 012-6        continuar?"));
limpiar();
print("#########################################################");
# Ej 012_7
print("Inicio ej 012_7");
import tkinter as tk
from tkinter import *
from tkinter import ttk
""" 
class iniciar7_pantalla_raiz( Frame ):
    def __init__( self ):
        tk.Frame.__init__(self)
        self.pack()
        self.master.title("Hola UTN")

        self.button1 = Button( self, text = "crear", width = 25, command = self.windows_crear)
        self.button1.grid( row = 2, column = 0, columnspan = 1, sticky = W+E+N+S )
        self.button2 = Button( self, text = "cerrar", width = 25, command=lambda:  self.windows_cerrar )
        self.button2.grid( row = 3, column = 0, columnspan = 1, sticky = W+E+N+S )
    def windows_crear(self):
        self.newWindow = funcion_2()
    def windows_cerrar(self):
        self.destroy()
        return (0)
class funcion_2(Frame): 
    def __init__(self):
        new =tk.Frame.__init__(self)
        new = Toplevel(self)
        new.title("Agrego mas pantallas")
        new.button = tk.Button(  text = "Cierro", width = 25,command=lambda:windows_cerrar )
        new.button.pack()
	def windows_cerrar(self):
		self.destroy()
        return (0)
 
def main():
	var = input ("inicio pantalla grafica '7'(S/N)")
	if var.upper() =="S":
		iniciar7_pantalla_raiz().mainloop()
if __name__ == '__main__':
    main()
print (input("ej 012-7        continuar?"));
       """
limpiar();
print("#########################################################");
# Ej 012_8
print("Inicio ej 012_8");
from tkinter import *
from tkinter import messagebox
def iniciar8_pantalla_raiz():
	pantalla_raiz = Tk()
	pantalla_raiz.geometry("200x100")
	def Saludar_Hola():
	   messagebox.showinfo("Buen dia", "Como va la vida")
	Boton1 = Button(pantalla_raiz, text = "Todo bien?", command = Saludar_Hola)
	Boton1.place(x = 35,y = 50)
	boton_pantalla_raiz = Button(pantalla_raiz, text="SALIR", bg="brown", fg="red", command=pantalla_raiz.destroy).pack(side=BOTTOM)
	pantalla_raiz.mainloop()
var = input ("inicio pantalla grafica '8'(S/N)")
if var.upper() =="S":iniciar8_pantalla_raiz()
print (input("ej 012-8        continuar?"));
limpiar();
print("#########################################################");
# Ej 012_9
print("Inicio ej 012_9");
from tkinter import *
from tkinter import messagebox
def iniciar9_pantalla_raiz():
	pantalla_raiz = Tk()
	text = Text(pantalla_raiz)
	text.insert(INSERT, "Hola.....")
	text.insert(END, "Chau.....")
	text.pack()
	text.tag_add("Aqui", "1.0", "1.4")
	text.tag_add("Inicio", "1.8", "1.13")
	text.tag_config("Aqui", background = "yellow", foreground = "blue")
	text.tag_config("Inicio", background = "black", foreground = "green")
	boton_pantalla_raiz = Button(pantalla_raiz, text="SALIR", bg="orange", fg="red", command=pantalla_raiz.destroy).pack(side=BOTTOM)
	pantalla_raiz.mainloop()
var = input ("inicio pantalla grafica '9'(S/N)")
if var.upper() =="S":iniciar9_pantalla_raiz()
print (input("ej 012-9        continuar?"));
limpiar();
print("#########################################################")
# Ej 012_10
print("Inicio ej 012_10");
from tkinter import *
from tkinter import messagebox
def iniciar10_pantalla_raiz():
	pantalla_raiz = Tk()
	frame_pantalla_raiz = Frame(pantalla_raiz)
	frame_pantalla_raiz.pack()
	bottomframe = Frame(pantalla_raiz)
	bottomframe.pack( side = BOTTOM )
	redbutton = Button(frame_pantalla_raiz, text = "Red", fg = "red")
	redbutton.pack( side = LEFT)
	greenbutton = Button(frame_pantalla_raiz, text = "brown", fg="brown")
	greenbutton.pack( side = LEFT )
	bluebutton = Button(frame_pantalla_raiz, text = "Blue", fg = "Blue")
	bluebutton.pack( side = LEFT )
	blackbutton = Button(bottomframe, text = "red", fg = "red")
	blackbutton.pack( side = BOTTOM)
	boton_pantalla_raiz = Button(bottomframe, text="SALIR", bg="brown", fg="red", command=pantalla_raiz.destroy).pack(side=BOTTOM)
	pantalla_raiz.mainloop()
var = input ("inicio pantalla grafica '10'(S/N)")
if var.upper() =="S":iniciar10_pantalla_raiz()
print (input("ej 012-10        continuar?"));
limpiar();
print("#########################################################")
# Ej 012_11
print("Inicio ej 012_11");
from tkinter import *
from tkinter import messagebox
def iniciar11_pantalla_raiz():

	pantalla_raiz = Tk()
	pantalla_raiz.geometry("200x100")
	mb =  Menubutton ( pantalla_raiz, text = "Contenedor", relief = RAISED )
	mb.grid()
	mb.menu  =  Menu ( mb, tearoff = 0 )
	mb["menu"]  =  mb.menu
		
	elemento_1  = IntVar()
	elemento_2 = IntVar()

	mb.menu.add_checkbutton ( label = "1er elemento",
							  variable = elemento_1 )
	mb.menu.add_checkbutton ( label = "2do elemento",
							  variable = elemento_2 )

	mb.pack()
	boton_pantalla_raiz = Button(pantalla_raiz, text="SALIR", bg="brown", fg="red", command=pantalla_raiz.destroy).pack(side=BOTTOM)
	pantalla_raiz.mainloop()
var = input ("inicio pantalla grafica '11'(S/N)")
if var.upper() =="S":iniciar11_pantalla_raiz()
print (input("ej 012-11        continuar?"));
limpiar();
print("#########################################################")
# Ej 012_12
print("Inicio ej 012_12");
from tkinter import *
from tkinter import messagebox
def iniciar12_pantalla_raiz():

	pantalla_raiz = Tk()
	Lb1 = Listbox(pantalla_raiz)
	Lb1.insert(1, "Python")
	Lb1.insert(2, "Perl")
	Lb1.insert(3, "C")
	Lb1.insert(4, "PHP")
	Lb1.insert(5, "JSP")
	Lb1.insert(6, "Ruby")
	Lb1.pack()
	var = StringVar()
	label = Label( pantalla_raiz, textvariable = var, relief = RAISED )
	var.set("Hola. Como va todo?")
	label.pack()
	boton_pantalla_raiz = Button(pantalla_raiz, text="SALIR", bg="brown", fg="red", command=pantalla_raiz.destroy).pack(side=BOTTOM)
	pantalla_raiz.mainloop()
var = input ("inicio pantalla grafica '12'(S/N)")
if var.upper() =="S":iniciar12_pantalla_raiz()
print (input("ej 012-12        continuar?"));
limpiar();
print("#########################################################")
# Ej 013_13
print("Inicio ej 013_13");
from tkinter import *
from tkinter import messagebox
def iniciar13_pantalla_raiz():

	pantalla_raiz = Tk()
	def eleccion():
	   seleccionado = "eleccioneccione su oipcion " + str(var.get())
	   label.config(text = seleccionado)
	var = IntVar()
	R1 = Radiobutton(pantalla_raiz, text = "Option 1", variable = var, value = 1,  command = eleccion)
	R1.pack( anchor = W )

	R2 = Radiobutton(pantalla_raiz, text = "Option 2", variable = var, value = 2,  command = eleccion)
	R2.pack( anchor = W )

	R3 = Radiobutton(pantalla_raiz, text = "Option 3", variable = var, value = 3,	  command = eleccion)
	R3.pack( anchor = W)

	label = Label(pantalla_raiz)
	label.pack()
	boton_pantalla_raiz = Button(pantalla_raiz, text="SALIR", bg="brown", fg="red", command=pantalla_raiz.destroy).pack(side=BOTTOM)
	pantalla_raiz.mainloop()
var = input ("inicio pantalla grafica '13'(S/N)")
if var.upper() =="S":iniciar13_pantalla_raiz()
print (input("ej 013-13        continuar?"));
limpiar();
print("#########################################################")
# Ej 014_14
print("Inicio ej 014_14");
from tkinter import *
from tkinter import messagebox
def iniciar14_pantalla_raiz():

	pantalla_raiz = Tk()
	def donothing():
	   filewin = Toplevel(pantalla_raiz)
	   button = Button(filewin, text="Luego se definiran los comandos")
	   button.pack()

	Barra_menu = Menu(pantalla_raiz)
	Item_Menu = Menu(Barra_menu, tearoff = 0)
	Item_Menu.add_command(label = "Recargar", command = donothing)
	Item_Menu.add_command(label = "Abrir", command = donothing)
	Item_Menu.add_command(label = "Grabar", command = donothing)
	Item_Menu.add_command(label = "Grabar como", command = donothing)
	Item_Menu.add_command(label = "Cerrar", command = donothing)
	Item_Menu.add_separator()
	Item_Menu.add_command(label = "Salir", command = pantalla_raiz.destroy)
	Barra_menu.add_cascade(label = "Archivo", menu = Item_Menu)
	
	Edit_Menu = Menu(Barra_menu, tearoff=0)
	Edit_Menu.add_command(label = "Deshacer", command = donothing)
	Edit_Menu.add_separator()

	Edit_Menu.add_command(label = "Copiar", command = donothing)
	Edit_Menu.add_command(label = "Cortar", command = donothing)
	Edit_Menu.add_command(label = "Pegar", command = donothing)
	Edit_Menu.add_command(label = "Borrar", command = donothing)
	Edit_Menu.add_command(label = "Seleccionar todo", command = donothing)
	Barra_menu.add_cascade(label = "Editar", menu = Edit_Menu)

	Help_Menu = Menu(Barra_menu, tearoff=0)
	Help_Menu.add_command(label = "Help Index", command = donothing)
	Help_Menu.add_command(label = "About...", command = donothing)
	Barra_menu.add_cascade(label = "Help", menu = Help_Menu)

	pantalla_raiz.config(menu = Barra_menu)
	pantalla_raiz.mainloop()
var = input ("inicio pantalla grafica '14'(S/N)")
if var.upper() =="S":iniciar14_pantalla_raiz()
print (input("ej 014-14        continuar?"));
limpiar();
print("#########################################################")
print("https://python-para-impacientes.blogspot.com/2015/12/tkinter-interfaces-graficas-en-python-i.html")
print("https://python-para-impacientes.blogspot.com/2015/12/tkinter-disenando-frame_pantalla_raizs-graficas.html")
