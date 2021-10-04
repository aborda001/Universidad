/*Escribir un programa que lea un matriz de enteros 
*de 2 filas y 4 columnas y 
*muestre por pantalla la traspuesta a dicha matriz.
*/

#include <stdio.h>
#include <stdlib.h>
#define COLUMNS 4
#define ROWS 2

int main()
{

	int array[ROWS][COLUMNS], transposeArray[COLUMNS][ROWS], i, j;

	for (i = 0; i < ROWS; ++i)
	{
		for (j = 0; j < COLUMNS; ++j)
		{
			printf("Ingrese el valor de la posicion [%d][%d]: ",i,j);
			scanf("%d", &array[i][j]);
			transposeArray[j][i] = array[i][j];
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

	printf("Transpuesta:	\n");
	for (i = 0; i < COLUMNS; ++i)
	{
		for (j = 0; j < ROWS; ++j)
		{
			printf("%d, ",transposeArray[i][j] );
		}	
		printf("\n");
	}

	return 0;
}