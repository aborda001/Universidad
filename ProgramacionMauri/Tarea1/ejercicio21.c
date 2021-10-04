/*Escribir un programa que lea una matriz de números enteros 
* y que devuelva la suma de los elementos positivos de la matriz 
* y la suma de los elementos negativos.
*/

#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLUMNS 3

int main()
{
	int array[ROWS][COLUMNS], negativeSum = 0, positiveSum = 0, number, i,j;
	for (i = 0; i < ROWS; ++i)
	{
		for (j = 0; j < COLUMNS; ++j)
		{
			printf("Ingrese el valor de la posicion [%d][%d]: ",i,j);
			scanf("%d", &array[i][j]);
			number = array[i][j];
			if ( number > 0 )
			{
				positiveSum += number;
			}
			else
			{
				negativeSum += number;
			}

		}
	}

	printf("La suma de los postivos es:	%d\n", positiveSum);
	printf("La suma de los negativos es: %d\n", negativeSum);

	return 0;
}