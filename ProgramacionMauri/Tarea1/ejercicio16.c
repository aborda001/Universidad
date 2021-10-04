/*Escribir un programa que pida 10 números enteros por teclado 
*y que imprima por pantalla:
*Cuántos de esos números son pares.
*Cuál es el valor del número máximo.
*Cuál es el valor del número mínimo.
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main(int argc, char const *argv[])
{
	int number, evenNumbers = 0, largest, smaller,i;

	for (i = 0; i < MAX; ++i)
	{
		printf("Ingrese un numero: ");
		scanf("%d", &number); //Pedimos ingresar el numero

		largest = i == 0 ? number: largest; //Asiganmos el numero ingresado si este es el primero en ser ingresado
		smaller = i == 0 ? number : smaller; //Asiganmos el numero ingresado si este es el primero en ser ingresado
		evenNumbers = number % 2 == 0 ? ++evenNumbers: evenNumbers; //Incrementamos en uno si el numero es par

		largest = number > largest ? number: largest; //Si el numero es mayor, asignamos como nuevo numero mayor
		smaller = number  < smaller ? number : smaller; //Si el numero es menor, asignamos como nuevo numero menor
	}

	printf("Hay %d numeros pares",evenNumbers );
	printf("\nEl mayor es: %d", largest);
	printf("\nEl menor es: %d", smaller);
	return 0;
}