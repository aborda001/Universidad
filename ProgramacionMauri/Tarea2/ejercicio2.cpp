/*Realizar un programa que mediante un menú permita al usuario poder graficar diferentes formas.
*El programa debe solicitar el color de impresión de la figura.
*Utilizar la biblioteca graphics.h
*/
#include <graphics.h>
#include <stdio.h>


int main() {
	int gd = DETECT, gm, option;
	
	
	printf("Escoga  una de las opciones (1-3)\n");
	printf("1) Circulo\n");
	printf("2) Elipse\n");
	printf("3) Rectangulo\n");
	scanf("%d", &option);
	
	switch (option) {
		case 1:
			initgraph(&gd,&gm,(char*)"");
			circle(320, 240,100);
			break;
		case 2:
			initgraph(&gd,&gm,(char*)"");
			ellipse(320, 240, 0, 360, 50, 100);
			break;
		case 3:
			initgraph(&gd,&gm,(char*)"");
			rectangle(0, 0, 100, 200);
			break;
	}
	
	getch();
	closegraph();
	return 0;
}	



