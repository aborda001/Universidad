/*Que rellene de forma aleatoria un array de 10 elementos, 
* con los números primos comprendidos entre 1 y 100 
* y los muestre en pantalla en orden ascendente.
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
	int array[MAX],i,number,sortedArray[MAX],j,aux;
	//Array con los numeros primos del 1 al 100
	int arrayPrimos[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

	/*Inicializando los arreglos con indices aleatorios para obtener los numeros, 
	* se obtienen de otro arreglo que contiene los numeros primos
	* y mostramos por pantalla el numero
	*/
	printf("Original:  ");
	for (i = 0; i < MAX; ++i)
	{
		number = arrayPrimos[rand() % 25]; //Se obtiene el indice aleatorio
		array[i] = number;
		sortedArray[i] = number;

		printf("%d, ", number );
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
    //Mostramso por pantalla el arreglo ordenado de forma ascendente
	for ( i = 0; i < MAX; ++i)
	{
		printf("%d, ",sortedArray[i]);
	}
	printf("\n");
	return 0;
}