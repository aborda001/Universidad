/*Que rellene de forma aleatoria un array de 10 elementos, 
* con los números impares comprendidos entre 1 y 100 
* y los muestre en pantalla en orden ascendente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
#define NUMBERS 100 //Maximo iterador en la busqueda de numeros impares

int main()
{
	/*Se utiliza el tiempo en segundos como semilla y 
	 * de esa forma genera numeros aleatorios en cada ejecucion
	 */
	srand(time(NULL));
	int evenNumbers[NUMBERS / 2], array[MAX], sortedArray[MAX], i, number, aux, j=0;

	//Cargando el array con los numeros impares
	for (i = 1; i <= NUMBERS; ++i)
	{
		if (i % 2 != 0)
		{
			evenNumbers[j++] = i;
		}
	}

	printf("Original: ");
	/*Inicializando los arreglos con indices aleatorios para obtener los numeros, 
	* se obtienen de otro arreglo que contiene los numeros impares
	* y mostramos por pantalla el numero
	*/
	for (i = 0; i < MAX; ++i)
	{
		number = rand() % (( NUMBERS / 2 ) - 1 ); //Se obtiene el indice aleatorio
		array[i] = evenNumbers[number];
		sortedArray[i] = evenNumbers[number];
		printf("%d, ", array[i] );
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

	printf("\nOrdenada: ");
	for (i = 0; i < MAX; ++i)
	{
		printf("%d, ", sortedArray[i] );
	}
	printf("\n");
	return 0;
}