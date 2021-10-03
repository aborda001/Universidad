/*Que lea 10 números por teclado, los almacene en un array 
*y muestre el promedio.
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main()
{
	int array[MAX], i, sum;

	float  average;

	for (i = 0; i < MAX; ++i)
	{
		printf("Ingrese un numero: ");
		scanf("%d",&array[i]);
		sum += array[i];
	}

	average = sum / MAX;

	printf("El promedio es: %d",average);

	return 0;
}