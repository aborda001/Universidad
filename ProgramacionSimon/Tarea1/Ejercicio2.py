"""
Crear un programa en Python 
para sumar 10 números leídos por teclado
"""

suma = 0 

for i in range(10):
    #Itera 10 veces, y suma a la variable 'suma' el numero ingresado
    num = float(input("Ingrese un numero: "))
    suma = suma + num

print("La suma de los numeros ingresados es:    ", suma)
