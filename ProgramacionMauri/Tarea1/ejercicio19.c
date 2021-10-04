/*Escribir un programa que lea una matriz de 3 filas y 
* 3 columnas de valores enteros. A continuación, el programa debe pedir el número de una fila. 
* El programa deberá devolver el máximo de esa fila.
*/

#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLUMNS 3

int main()
{
	int array[ROWS][COLUMNS], row, largest, number, i,j;

	//Cargamos los datos al array de 2 dimensiones
	for (i = 0; i < ROWS; ++i)
	{
		for (j = 0; j < COLUMNS; ++j)
		{
			printf("Ingrese el valor de la posicion [%d][%d]: ",i,j);
			scanf("%d", &array[i][j]);
		}
	}

	printf("Ingrese la fila: ");
	scanf("%d", &row);//Se ingrese la fila

	for (i = 0; i < COLUMNS; ++i)
	{
		number = array[row][i];
		largest = i == 0 ? number: largest;
		largest = number > largest ? number: largest; //Si el numero es mayor, asignamos como nuevo numero mayor
	}

	printf("El mayor de la fila [%d] es: %d\n",row, largest);
	return 0;
}