/*Que lea una cadena y diga cuantas mayúsculas hay.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 128

int main()
{
	char string[MAX];
	int i = 0, lenght, isupper = 0;

	printf("Ingrese una cadena\n");
	gets(string);

	lenght = strlen(string);

	for (i = 0; i < lenght; ++i)
	{
		if (isupper(string[i])) //Compara si es una mayuscula o no
		{
			isupper++;
		}
	}

	printf("%d son mayusculas\n", isupper);
	return 0;
}
