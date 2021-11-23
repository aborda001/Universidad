/**Ejercicio Pr�ctico
Realizar un programa en lenguaje C, (Pseudoc�digo PSeInt o programa
fuente) que solicite al usuario el ingreso de una frase.
El usuario deber� elegir las opciones mostrada por el men�:

A. Imprimir la frase todo en may�scula.
B. Imprimir la frase intercambiando las may�sculas por min�sculas y
viceversa.
C. Imprimir la cantidad de vocales ingresadas
D. Solicitar el ingreso de una palabra e informar si hay coincidencia.
E. Si no hay coincidencia concatenar la palabra buscada con la
palabra ingresada al final de la cadena.
F. Subir el archivo en PSeInt o c�digo fuente .cpp en el formulario.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

void uperAll(char const *string);
void mixedLetters(char const *string);
void vowelsCount(char const *string);
void searchWord(char const *string, char const *word);
int isVowel(char letter);

int main()
{
	char string[MAX], word[MAX];
	int option;

	printf("Ingrese una frase: \n");
	fflush(stdin);
	gets(string);

	printf("Escoga una de las opciones: (1-4) \n");
	printf("1) Imprimir en mayusculas\n");
	printf("2) Imprimir la frasde intercambiando las mayusculas y minusculas y viceversa\n");
	printf("3) Cantidad de vocales\n");
	printf("4) Bucar una palabra\n");

	scanf("%d", &option);

	switch (option)
	{
	case 1:
		uperAll(string);
		break;
	case 2:
		mixedLetters(string);
		break;
	case 3:
		vowelsCount(string);
		break;
	case 4:
		printf("Ingrese una palabra: ");
		scanf("%s", &word);
		searchWord(string, word);
		break;
	}
	return 0;
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

void mixedLetters(char const *string)
{
	int lenght = strlen(string), i;
	char letter;

	for (i = 0; i < lenght; ++i)
	{
		if (string[i] < 91 && string[i] > 64)
		{
			letter = tolower(string[i]);
		}
		else
		{
			letter = toupper(string[i]);
		}

		printf("%c", letter);
	}

	printf("\n");
}

void vowelsCount(char const *string)
{
	int lenght, i, vowels = 0;
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

void searchWord(char const *string, char const *word)
{
	char buffer[MAX];

	if (strstr(string, word))
	{
		printf("La palabra si existe");
	}
	else 
	{
		strcat(strcpy(buffer, string), word);
		printf("La nueva cadena es: %s", buffer);
	}

}

int isVowel(char letter)
{
	char vowels[] = "aeiou";
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
