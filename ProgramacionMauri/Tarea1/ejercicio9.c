/*Que lea 5 números por teclado, 
*los copie a otro array multiplicados por 2 y muestre el segundo array.
*/

#include <stdlib.h>
#include <stdio.h>
# define MAX 5

int main()
{
	int arrayOne[MAX], arrayTwo[MAX],i;

	for (i = 0; i < MAX; ++i)
	{
		printf("Ingrese un numero\n");
		scanf(" %d", &arrayOne[i]);//Lee los numeros por teclado
		arrayTwo[i] = arrayOne[i] * 2;//Multiplica el numero por 2
	}

	printf("Segundo array: \n");
	for (i = 0; i < MAX; ++i)
	{
		printf("%d, ",arrayTwo[i]); //Imprime el arreglo con los numeros multiplicados
	}
	return 0;
}