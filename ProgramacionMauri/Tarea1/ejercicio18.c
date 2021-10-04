/*Escribir un programa que lea 10 números por teclado. 
*Luego lea dos más e indique si éstos números están entre los anteriores.
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 4

int main()
{
	int array[MAX], i, numberOne, numberTwo, findOne = 0, findTwo = 0;

	for (i = 0; i < MAX; ++i)
	{
		printf("Ingrese un numero: ");
		scanf("%d", &array[i]);
	}

	printf("Ingrese numero a buscar: ");
	scanf("%d", &numberOne);
	printf("Ingrese numero a buscar: ");
	scanf("%d", &numberTwo);

	for (i = 0; i < MAX; ++i)
	{
		findOne = numberOne == array[i] ? ++findOne : findOne;
		findTwo = numberTwo == array[i] ? ++findTwo : findTwo; 
	}

	if ( (findOne == 0) && (findTwo == 0) )
	{
		printf("No se encuentran en la lista \n");
	}
	else
	{
		if (findOne > 0)
		{
			printf("EL numero '%d' se encuentra en la lista\n", numberOne );
		}

		if (findTwo > 0)
		{
			printf("EL numero '%d' se encuentra en la lista\n", numberTwo);
		}
	}
}