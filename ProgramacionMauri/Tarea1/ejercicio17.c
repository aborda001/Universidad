/*Escribir un programa que lea un vector de 10 elementos. 
* Deberá imprimir el mismo vector por pantalla pero invertido. 
* Ejemplo: dado el vector 1 2 3 4 5 6 7 8 9 10 el programa debería imprimir 10 9 8 7 6 5 4 3 2 1.
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main()
{
	int array[MAX], i;

	for (i = 0; i < MAX; ++i)
	{
		printf("Ingrese un numero: ");
		scanf("%d", &array[i]);
	}


	printf("Invertida: ");
	for (i = MAX - 1; i >= 0; --i)
	{
		printf("%d, ", array[i]);
	}

	return 0;
}