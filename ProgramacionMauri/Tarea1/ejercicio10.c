/*Que lea 5 números por teclado, los copie a otro array multiplicados por 2 
*y los muestre todos ordenados usando un tercer array.
*/

#include <stdlib.h>
#include <stdio.h>
# define MAX 5

int main()
{
	int arrayOne[MAX], arrayTwo[MAX], sortedArray[MAX], i, j, aux;

	for (i = 0; i < MAX; ++i)
	{
		printf("Ingrese un numero\n");
		scanf(" %d", &arrayOne[i]);//Lee los numeros por teclado
		arrayTwo[i] = arrayOne[i] * 2;//Multiplica el numero por 2
		sortedArray[i] = arrayTwo[i]; //Carga el tercer array para luego ordenarlo
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

	printf("Ordenado: \n");
	for (i = 0; i < MAX; ++i)
	{
		printf("%d, ",sortedArray[i]); //Imprime el arreglo con los numeros multiplicados
	}
	return 0;
}