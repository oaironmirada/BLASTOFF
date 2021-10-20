#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float c, f;
	
	printf("Informe a temperatura em ºC: ");
	scanf("%f", &c);
	
	f = (c * 1.8 +32);
	
	printf("A temperatura em F é: %.1f F \n", f);
	
	return 0;
}