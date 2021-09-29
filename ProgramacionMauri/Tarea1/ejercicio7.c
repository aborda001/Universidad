/*Que lea 10 números aleatorios, los almacene en un array 
*y los ordene de forma ascendente.
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

	int sortedArray[MAX], i, j,aux;
	
	for (i = 0; i < MAX; i++)
	{
		//Agrega numeros de forma aleatoria a 'sortedArray' y hace una copia del arreglo en 'sortedArray'
		sortedArray[i] = rand();
	}

	//Ordenamiento burbuja de forma ascendente
	for (j=1; j<MAX ;j++)
	{
	    for (i=0; i<MAX-1; i++)
	    {
        	if (sortedArray[i] > sortedArray[i+1])
            {
                aux=sortedArray[i]; 
                sortedArray[i] = sortedArray[i+1]; 
                sortedArray[i+1] = aux;
            }
        }
    }

	printf("Ordenada:\n");

	for (i = 0; i < MAX; i++)
	{
		//Imprime el arreglo ordenado
		printf("%d ,",sortedArray[i] );
	}
	printf("\n\n");
	return 0;
}
