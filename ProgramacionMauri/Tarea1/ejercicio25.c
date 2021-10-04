/*Que lea una cadena y diga cuantas vocales hay.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 128

int isVowel(char letter);

int main()
{
	char string[MAX];
	int i = 0, lenght, vowels = 0;

	printf("Ingrese una cadena\n");
	gets(string);

	lenght = strlen(string);

	for (i = 0; i < lenght; ++i)
	{
		if (isVowel(string[i]))
		{
			vowels++;
		}
	}

	printf("Hay %d vocales\n", vowels);
	return 0;
}

int isVowel(char letter)
{
	char vowels[5] = "aeiou";
	letter = tolower(letter);
	int i; 
	for (i = 0; i < 5; ++i)
	{
		if (letter == vowels[i])
		{
			return 1;
		}
	}
	return 0;
}
