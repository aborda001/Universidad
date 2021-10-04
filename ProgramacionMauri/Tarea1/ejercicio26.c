/*Que lea una cadena y diga cuantas no son vocales.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 128

int isVowel(char letter);

int main()
{
	char string[MAX];
	int i = 0, lenght, isNotVowels = 0;

	printf("Ingrese una cadena\n");
	gets(string);

	lenght = strlen(string);

	for (i = 0; i < lenght; ++i)
	{
		if (!isVowel(string[i])) //Compara si es una vocal o no
		{
			isNotVowels++;
		}
	}

	printf("%d no son vocales\n", isNotVowels);
	return 0;
}

int isVowel(char letter)
{
	char vowels[5] = "aeiou";
	letter = tolower(letter); //Convierte la letra ingresada en minuscula
	int i; 
	for (i = 0; i < 5; ++i)
	{
		if (letter == vowels[i]) //Compara si la letra se encuentra dentro de la lista de vocales
		{
			return 1;
		}
	}
	return 0;
}
