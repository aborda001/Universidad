/*Que lea una cadena y la muestre al revés.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 128

int main()
{
	char string[MAX];
	int i = 0, lenght;

	printf("Ingrese una cadena\n");
	gets(string);

	lenght = strlen(string);

	printf("Invertida: ");
	for (i = lenght - 1; i >= 0; --i)
	{
		printf("%c", string[i]);
	}

	return 0;
}