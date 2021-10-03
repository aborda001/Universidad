/*Que rellene una matriz de 3x3 y muestre su traspuesta 
*(la traspuesta se consigue intercambiando 
*filas por columnas y viceversa).
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define COLUMNS 3
#define ROWS 3

int main()
{
	/*Se utiliza el tiempo en segundos como semilla y 
	 * de esa forma genera numeros aleatorios en cada ejecucion
	 */
	srand(time(NULL));

	int array[ROWS][COLUMNS], transposeArray[COLUMNS][ROWS], i, j;

	printf("Original: \n");
	for (i = 0; i < ROWS; ++i)
	{
		for (j = 0; j < COLUMNS; ++j)
		{
			array[i][j] = rand() % 10;
			transposeArray[j][i] = array[i][j];
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