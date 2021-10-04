/*Que solicite al usuario apellido y nombre 
*y lo concatene para formar un nombre de usuario.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 64

int main(int argc, char const *argv[])
{
	char name[MAX], surname[MAX];

	printf("Ingrese su nombre y su apellido: ");
	scanf("%s", &name);
	scanf("%s", &surname);

	strcat(name, surname);
	printf("El nombre de usuario es: %s\n",name);
	return 0;
}