#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<string.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int i, valor = 0;
	char pal[225], inv[225];

	printf("Digite uma palavra: ");
	gets(pal);

	for(i = 0; pal[i]; i++){
		pal[i] = tolower(pal[i]);
	}

	strcpy(inv, pal);

	strrev(inv);

	valor = strcmp(pal, inv);

	if (valor == 0){
		printf("A palavra %s é palíndroma\n", pal);
	}else{
		printf("A palavra %s não é palíndroma\n", pal);
	}
   
	return 0;
}
