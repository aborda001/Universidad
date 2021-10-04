/*Escribir un programa que lea una matriz de 4 filas y 3 columnas, 
* la visualice por pantalla y a continuación encuentre el mayor 
* y el menor elemento de la matriz y sus posiciones.
*/

#include <stdio.h>
#include <stdlib.h>
#define ROWS 4
#define COLUMNS 3

int main()
{
	int array[ROWS][COLUMNS], number, largest, smaller, largestPosition[2], smallerPosition[2], i, j;
	
	for (i = 0; i < ROWS; ++i)
	{
		for (j = 0; j < COLUMNS; ++j)
		{
			printf("Ingrese el valor de la posicion [%d][%d]: ",i,j);
			scanf("%d", &array[i][j]);

			number = array[i][j];

			largest = i == 0 ? number: largest; 
			smaller = i == 0 ? number : smaller;

			if (number > largest)
			{
				largest = number;
				largestPosition[0] = i;
				largestPosition[1] = j;
			}
			if (number < smaller)
			{
				smaller = number;
				smallerPosition[0] = i;
				smallerPosition[1] = j;
			}
		}
	}

	printf("Original: \n");
	for (i = 0; i < ROWS; ++i)
	{
		for (j = 0; j < COLUMNS; ++j)
		{
			printf("%d, ",array[i][j] );
		}	
		printf("\n");
	}

	printf("El mayor es: %d \n", largest);
	printf("La posicion del mayor es [%d][%d]\n", largestPosition[0],largestPosition[1]);
	printf("El menor es: %d \n", smaller);
	printf("La posicion del menor es [%d][%d]\n", smallerPosition[0],smallerPosition[1]);
	return 0;
}