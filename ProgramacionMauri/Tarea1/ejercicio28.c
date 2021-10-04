/*Que lea una cadena y convierta las minúsculas en mayúsculas y viceversa.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 128

int main()
{
	char string[MAX];
	int i = 0, lenght = 0;

	printf("Ingrese una cadena\n");
	gets(string);

	lenght = strlen(string);

	for (i = 0; i < lenght; ++i)
	{
		if (isupper(string[i])) //Compara si es una mayuscula o no
		{
			string[i] = tolower(string[i]);
		}
		else
		{
			string[i] = toupper(string[i]);
		}
	}

	printf("%s\n",string );
	return 0;
}