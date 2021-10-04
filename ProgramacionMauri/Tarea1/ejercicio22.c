/*Escribir un programa que lea una matriz de enteros de 4 filas y 4 columnas y 
* a continuación intercambie la fila i con la fila j, 
* siendo i y j dos valores introducidos por teclado.
*/

#include <stdio.h>
#include <stdlib.h>
#define ROWS 4
#define COLUMNS 4

int main()
{
	int array[ROWS][COLUMNS], i, j, firstRow, secondRow, aux;
	for (i = 0; i < ROWS; ++i)
	{
		for (j = 0; j < COLUMNS; ++j)
		{
			printf("Ingrese el valor de la posicion [%d][%d]: ",i,j);
			scanf("%d", &array[i][j]);
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

	printf("Ingrese las filas para intercambiar\n");
	scanf("%d", &firstRow);
	scanf("%d", &secondRow);

	for (i = 0; i < COLUMNS; ++i)
	{
		aux = array[firstRow][i];
		array[firstRow][i] = array[secondRow][i];
		array[secondRow][i] = aux;
	}

	printf("Intercambiado: \n");
	for (i = 0; i < ROWS; ++i)
	{
		for (j = 0; j < COLUMNS; ++j)
		{
			printf("%d, ",array[i][j] );
		}	
		printf("\n");
	}

	return 0;
}