/*Que rellene un array con 10 números aleatorios 
*y luego busque un número concreto.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 5

int main()
{
	/*Se utiliza el tiempo en segundos como semilla y 
	 * de esa forma genera numeros aleatorios en cada ejecucion
	 */
	srand(time(NULL));
	long int array[MAX], searching;
	int i;

	printf("Numeros: ");
	for (i = 0; i < MAX; ++i)
	{
		array[i] = rand();
		printf("%d, ", array[i]);
	}

	printf("\nIngrese el numero a buscar: ");
	scanf("%d", &searching);

	for (i = 0; i < MAX; ++i)
	{
		if(array[i] == searching)
		{
			printf("El numero se encuentra en la posicion '%d'", i );
			break;
		}
		else
		{
			if (i == MAX - 1)
			{
				printf("El numero no se encuentra en el array\n");
			}
		}
	}
	return 0;
}