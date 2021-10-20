#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, c;
	
	printf("digite o primeiro numero: ");
    scanf("%d",&a);
    
    printf("digite o segundo numero: ");
    scanf("%d",&b);
    
    printf("digite o terceiro numero: ");
    scanf("%d",&c);
    
    if (a < b && a < c){
		printf("A é o menor numero");
	}else if (b < a && b < c){
		printf("B é o menor numero");
	}else{
		printf("C é o menor numero");
	}
	    
	return 0;
}