"""
    Crear un programa en Python en el que se almacenen
    3 números en 3 variables A, B y C. El diagrama debe 
    decidir cuál es el mayor y cual es el menor
"""

def mayor(a,b,c):
    #Recibe tres numero y devuelve el mayor
    if a > b and a > c:
        return a
    elif b > a and b > c:
        return b

    return c

def menor(a,b,c):
    #Recibe tres numero y devuelve el menor
    if a < b and a < c:
        return a
    elif b < a and b < c:
        return b

    return c

#Datos de entrada
n1 = float(input("Ingrese un numero:    "))
n2 = float(input("Ingrese otro numero:  "))
n3 = float(input("Ingrese otro numero:  "))

#Comprueba si todos los numeros son distintos
distintos = n1 != n2 and n2 != n3 and n1 != n3

if distintos:
    numMayor = mayor(n1,n2,n3)
    numMenor = menor(n1,n2,n3)
    print("El numero mayor es: ",int(numMayor))
    print("El numero menor es: ",int(numMenor))
else:
    print("Todos los numeros deben ser distintos")
