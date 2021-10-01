/*Que rellene un array de 10 elementos con los 100 primeros 
*números pares aleatorios 
*y muestre su suma.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
#define NUMBERS 200 //Maximo iterador en la busqueda de numeros pares

int main()
{
	/*Se utiliza el tiempo en segundos como semilla y 
	 * de esa forma genera numeros aleatorios en cada ejecucion
	 */
	srand(time(NULL));
	int evenNumbers[NUMBERS / 2], array[MAX], i, number, sum = 0, j = 0;

	//Cargando el array con los numeros pares
	for (i = 1; i <= NUMBERS; ++i)
	{
		if (i % 2 == 0)
		{
			evenNumbers[j++] = i;
		}
	}

	printf("Array:	");
	/*Inicializando los arreglos con indices aleatorios para obtener los numeros, 
	* se obtienen de otro arreglo que contiene los numeros pares
	* y mostramos por pantalla el numero
	*/
	for (i = 0; i < MAX; ++i)
	{
		number = rand() % (( NUMBERS / 2 ) - 1 ); //Se obtiene el indice aleatorio
		array[i] = evenNumbers[number];
		sum += array[i];
		printf("%d, ", array[i] );
	}

	printf("\nSuma total:	%d",sum);
	return 0;
}
