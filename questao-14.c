#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<string.h>
#include <ctype.h>

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
		printf("A palavra %s � pal�ndroma\n", pal);
	}else{
		printf("A palavra %s n�o � pal�ndroma\n", pal);
	}
   
	return 0;
}