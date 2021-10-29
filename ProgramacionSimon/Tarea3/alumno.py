"""Crear una clase Alumno en Python, la misma debe tener
lo siguiente:
    Un constructor con los siguientes atributos
    (cedula, nombre, apellido, telefono, ciudad, añoNacimiento)
    introducir los datos con la funcion input
    implementar una funcion para retornar la edad del alumno teniendo en cuenta el año de nacimiento.
    Crear un arreglo de personas, recorrer el arreglo e imprimir la cedula, nombre y edad de cada persona
"""

import datetime

class Alumno():
    """ Crear la clase alumno con los parametros necesarios para crear
    el objeto con los siguientes atributos
    """
    def __init__(self,cedula, nombre, apellido, telefono, ciudad, añoNacimiento):
        self.cedula = cedula
        self.nombre = nombre
        self.apellido = apellido
        self.telefono = telefono
        self.ciudad = ciudad
        self.añoNacimiento = añoNacimiento
        
    def calcularEdad(self):
        """Recibe como parametro el alumno, y teniendo en cuenta el año actual
        devuelve la edad del alumno
        """
        año = datetime.date.today().year
        edad = año - self.añoNacimiento
        return edad
        
        
alumnos = [] #Array de alumnos
while True:
    #Pide los datos necesarios para crear un nuevo alumno
    cedula = str(input("Ingrese cedula del alumno: "))
    nombre = str(input("Ingrese nombre del alumno: "))
    apellido = str(input("Ingrese apellido del alumno: "))
    telefono = str(input("Ingrese telefono del alumno: "))
    ciudad = str(input("Ingrese ciudad del alumno: "))
    añoNacimiento = int(input("Ingrese año de nacimiento del alumno: "))
    alumnos.append(Alumno(cedula, nombre, apellido, telefono, ciudad, añoNacimiento))
    #Pregunta sobre la continuidad del programa
    continua = input("Quiere agregar otro alumno? Si/No").lower()
    if continua == "no":
        #Si no hay alumnos que agregar cierrar el ciclo
        break
    

for alumno in alumnos:
    #Recorre el array de alumnos y muetra por pantalla cedula, nombre y edad del mismo
    print(f"Cedula: {alumno.cedula}")
    print(f"Nombre: {alumno.nombre}")
    print(f"Edad: {alumno.calcularEdad()}")