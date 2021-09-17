/*
*Que rellene de forma aleatoria un array de 10 elementos, 
*con los 100 primeros números enteros 
*y los muestre en pantalla en orden ascendente.
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

	int array[MAX], sortedArray[MAX], i, j,aux;
	printf("Original:\n");

	for (i = 0; i < MAX; i++)
	{
		//Agrega numeros de forma aleatoria a 'array' y hace una copia del arreglo en 'sortedArray'
		array[i] = rand() % 101;
		sortedArray[i] = array[i];
		printf("%d ,",array[i] );
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

	printf("\nOrdenada:\n");

	for (i = 0; i < MAX; i++)
	{
		//Imprime el arreglo ordenado
		printf("%d ,",sortedArray[i] );
	}
	printf("\n\n");
	return 0;
}
