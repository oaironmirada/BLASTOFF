#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int n, i, r, p;
	
	printf("DIGITE 1 PARA ADI��O\nDIGITE 2 PARA SUBTRA��O\nDIGITE 3 PARA MULTIPLICA��O\nDIGITE 4 PARA DIVIS�O\n ");
	scanf("%d", &p);
	
	printf("Qual numero voc� quer saber a tabuada: ");
	scanf("%d", &n);
	
	switch(p){
	case 1:
		for (i = 0; i <= 10; i = i+1){
		r = (n + i);
		printf("%d + %d  %d\n", n, i, r);
	}
		break;
	
	case 2:
		for (i = 0; i <= 10; i = i+1){
		r = (n - i);
		printf("%d - %d = %d\n", n, i, r);
	}
		break;
	
	case 3:
		for (i = 0; i <= 10; i = i+1){
		r = (n * i);
		printf("%d * %d = %d\n", n, i, r);
	}
		break;
	
	case 4:
		for (i = 1; i <= 10; i = i+1){
		r = (n / i);
		printf("%d / %d = %d\n", n, i, r);
	}
		break;
	
	default:
		printf ("Valor invalido!\n");
		break;
	}

	return 0;
}