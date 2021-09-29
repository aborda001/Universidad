/*Que lea 10 números por teclado, los almacene en un array 
*y muestre la suma y la multiplicación de todos.
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main()
{
	int array[MAX], sum = 0,i ;
	long int  multiply = 1;
	for (i = 0; i < MAX; ++i)
	{
		printf("Ingrese un numero:	\n");
		scanf(" %d", &array[i]);
		sum += array[i];
		multiply *= array[i];
	}

	printf("La suma de los numeros es: %d\n", sum );
	printf("La multiplicacion de los numeros es: %d\n", multiply );
	return 0;
}