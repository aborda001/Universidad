/*Que lea 10 números aleatorios, 5 para un array y 
*5 para otro array distinto. 
*Mostrar los 10 números en pantalla mediante un solo array.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

int main()
{
	/*Se utiliza el tiempo en segundos como semilla y 
	 * de esa forma genera numeros aleatorios en cada ejecucion
	 */
	srand(time(NULL));

	int arrayOne[MAX / 2], arrayTwo[MAX/2], arrayAll[MAX], i;

	printf("Primer array:");
	for (i = 0; i < MAX/2; i++)
	{
		//Agrega numeros de forma aleatoria a 'arrayOne' y hace una copia del arreglo en 'sortedArray'
		arrayOne[i] = rand();
		printf("%d, ",arrayOne[i] );

		arrayAll[i] = arrayOne[i];
	}

	printf("\nSegundo array:");
	for (i = 0; i < MAX/2; i++)
	{
		//Agrega numeros de forma aleatoria a 'arrayTwo' y hace una copia del arreglo en 'sortedArray'
		arrayTwo[i] = rand();
		printf("%d, ",arrayTwo[i] );
		
		arrayAll[i + (MAX/2)] = arrayTwo[i];
	}

	printf("\nArray completo:");

	for (i = 0; i < MAX; i++)
	{
		//Imprime el arreglo completo
		printf("%d ,",arrayAll[i] );
	}
	printf("\n\n");
	return 0;
}
