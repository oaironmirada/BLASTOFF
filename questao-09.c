#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int n, i, r;
	
	printf("Qual numero voc� quer saber a tabuada: ");
	scanf("%d", &n);
	
	printf("\n-----------------------------------------------------------------\n");
	printf("ADI��O\n");
	for (i = 0; i <= 10; i = i+1){
		r = (n + i);
		printf("%d + %d = %d\n", n, i, r);
	}
	printf("-----------------------------------------------------------------\n");
	printf("SUBTRA��O\n");
	for (i = 0; i <= 10; i = i+1){
		r = (n - i);
		printf("%d - %d = %d\n", n, i, r);
	}
	printf("-----------------------------------------------------------------\n");
	printf("MULTIPLICA��O\n");
	for (i = 0; i <= 10; i = i+1){
		r = (n * i);
		printf("%d * %d = %d\n", n, i, r);
	}
	printf("-----------------------------------------------------------------\n");
	printf("DIVIS�O\n");
	for (i = 1; i <= 10; i = i+1){
		r = (n / i);
		printf("%d / %d = %d\n", n, i, r);
	}
	
	return 0;
}