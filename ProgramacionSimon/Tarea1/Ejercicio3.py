"""
Modificar el programa de la Tarea 6 (Tarea 2)
para que permita sumar N números. 
El valor de N se debe leer previamente por teclado
"""

suma = 0
N = int(input("Ingrese la cantidad de numeros:  "))

for i in range(N):
    num = float(input("Ingrese un numero:   "))
    suma = suma + num

print("La suma de todos los numeros es: ", suma)
