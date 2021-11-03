/*Realizar un programa que solicite al usuario el ingreso de una frase 
*(que no supere los 100 caracteres).
*	Se debe imprimir la frase original ingresada.
*	La cantidad de vocales
*	a, e, i, o, u diferenciando mayúsculas y minúsculas.
*	Imprimir todo en mayúsculas.
*	Imprimir todo en minúsculas.
*	Tipo inverso.
*	Tipo frase.
*Pueden utilizar un menú para seleccionar la función deseada.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

void originalPhrase(char const *string);
void vowelsCount(char const *string);
void independentVowels(char const *string);
void uperAll(char const *string);
void lowerAll(char const *string);
void inverseString(char const *string);
void capitalizeString(char const *string);
int isVowel(char letter);

int main()
{	
	char string[MAX];
	int option;

	printf("Ingrese una frase: \n");
	gets(string);

	printf("Escoga una de las opciones: (1-7) \n");
	printf("1)Frase original\n");
	printf("2)Cantidad de vocales\n");
	printf("3)Cantidad de vocales por separado\n");
	printf("4)Todo en mayusculas\n");
	printf("5)Todo en minusculas\n");
	printf("6)Frase inversa\n");
	printf("7)Frase capitalizada\n");

	scanf("%d",&option);

	switch (option) {
		case 1:
			originalPhrase(string);
			break;
		case 2:
			vowelsCount(string);
			break;
		case 3:
			independentVowels(string);
			break;
		case 4:
			uperAll(string);
			break;
		case 5:
			lowerAll(string);
			break;
		case 6:
			inverseString(string);
			break;
		case 7:
			capitalizeString(string);
			break;
	}

	return 0;
}

void originalPhrase(char const *string) 
{
	printf("%s\n",string);
}

void vowelsCount(char const *string)
{
	int lenght, i, vowels;
	lenght = strlen(string);

	for (i = 0; i < lenght; ++i)
	{
		if (isVowel(string[i])) //Comara si es vocal o no
		{
			vowels++;
		}
	}

	printf("La frase tiene: %d vocales\n", vowels);
}

void independentVowels(char const *string) 
{
	int lenght, i, vowelA =0, vowelE =0, vowelI =0, vowelO =0, vowelU =0;
	char  letter;
	lenght = strlen(string);

	for (i = 0; i < lenght; ++i)
	{
		letter = tolower(string[i]);

		switch (letter)
		{
			case 'a':
				vowelA ++;
				break;
			case 'e':
				vowelE ++;
				break;
			case 'i':
				vowelI ++;
				break;
			case 'o':
				vowelO ++;
				break;
			case 'u':
				vowelU ++;
				break;
		}

	}

	printf("La frase tiene: %d a-A\n", vowelA);
	printf("La frase tiene: %d e-E\n", vowelE);
	printf("La frase tiene: %d i-I\n", vowelI);
	printf("La frase tiene: %d o-O\n", vowelO);
	printf("La frase tiene: %d u-U\n", vowelU);
}

void uperAll(char const *string)
{
	int lenght = strlen(string), i;
	char letter;

	for (i = 0; i < lenght; ++i)
	{
		letter = toupper(string[i]);
		printf("%c", letter);
	}

	printf("\n");
}

void lowerAll(char const *string)
{
	int lenght = strlen(string), i;
	char letter;

	for (i = 0; i < lenght; ++i)
	{
		letter = tolower(string[i]);
		printf("%c", letter);
	}

	printf("\n");
}

void inverseString(char const *string)
{
	int lenght = strlen(string), i;

	for (i = lenght; i >= 0; --i)
	{
		printf("%c", string[i]);
	}

	printf("\n");

}

void capitalizeString(char const *string)
{
	int lenght = strlen(string), i;
	char letter;

	for (i = 0; i < lenght; ++i)
	{
		if(i == 0)
		{
			printf("%c",toupper(string[i]));
		}
		else
		{
			printf("%c", string[i]);	
		}
	}

	printf("\n");

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
