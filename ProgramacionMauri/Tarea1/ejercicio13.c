/*Que mediante un array de 10 elementos,
 *almacene números tanto positivos como negativos 
 *y los muestre ordenados.
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main()
{
	int array[MAX], sortedArray[MAX], i,aux,j;

	for (i = 0; i < MAX; ++i)
	{
		printf("Ingrese un  numero cualquiera:");
		scanf("%d", &array[i]);//Ingresando los numeros
		sortedArray[i] = array[i];//Cargando en otro array para ordenar
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

	printf("Ordenada: ");
	//Mostrando el array ordenado
	for (i = 0; i < MAX; ++i)
	{
		printf("%d, ", sortedArray[i]);
	}
	return 0;
}