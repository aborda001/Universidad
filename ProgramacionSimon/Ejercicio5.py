"""
Hacer un programa en Python que lea N números, 
calcule y escriba la suma de los pares 
y el producto de los impares
"""

sumaPares = 0
multiImpares = 1

N = int(input("Ingrese la cantidad de numeros:  "))

for i in range(N):
    num = float(input("Ingrese un numero:   "))

    if num % 2 == 0:
        sumaPares = sumaPares + num
    else:
        multiImpares = multiImpares * num

print("La suma de todos los pares es:   ", sumaPares)
print("La multiplicacion de todos los impares esL:  ", multiImpares)

