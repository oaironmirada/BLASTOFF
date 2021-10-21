#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int f, n, i;
	
	printf("Insira um numero para descobrir o fatorial: ");
	scanf("%d", &n);
 
    i = n;
    
    for (f = 1; n > 1; n = n - 1){
		f = f * n;
	}
 
	printf("Fatorial de %d é : %d", i, f);

	return 0;
}