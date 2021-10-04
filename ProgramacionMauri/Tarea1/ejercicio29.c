/*Que lea una cadena y 
*la encripte sumando 3 al código ASCII de cada carácter. 
*Mostrar por pantalla.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 128

int main()
{
	char string[MAX];
	int i, lenght;

	printf("Ingrese una cadena:");
	gets(string);

	lenght = strlen(string);

	for (i = 0; i < lenght; ++i)
	{
		string[i] = string[i] + 3; //Intercambia la letra por otra que esta a 3 posiciones de esta
	}

	printf("La cadena encriptada es: %s\n", string);

	return 0;
}