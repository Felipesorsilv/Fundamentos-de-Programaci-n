#include<stdio.h>
#include<conio.h>
#define TAM 20

int main(void){
	char cadena[TAM];
	int contador;
	system("cls");
	system("color 71");
	printf("\n\t\t\t Ingresa una palabra: ");
	
	scanf("%s", cadena);
    printf("\n\n\t\t\t La palabra invertida es: ");
    for(contador=TAM; contador>=0; contador--){
	printf("%c", cadena[contador]);
}
	getch();
	return 0;
}
