#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int t=0, lista[t], i=0, n, aux, a;

	printf("10 numeros aleatorios de 1 a 100: ");
	
  
	srand(time(NULL));
  
  	  for (i=0; i < 10; i++){
    // gerando valores aleatórios na faixa de 0 a 100
    	lista[i] = rand() % 100;
    	printf("%d ", lista[i]);
	}
	printf("\n");
	
	for (i = 0; i < 10; i++){
		for (a = i + 1; a < 10; a++){
			if(lista[i] > lista[a]){
				aux = lista[i];
				lista[i] = lista[a];
				lista[a] = aux;
			}
		}
	}
	
	printf("\n");
	
	printf("Em ordem crescente os pares são: ");
    for(i=0; i<10; i++){
 	n = lista[i] %2;
 	
 	if (n == 0){
		 printf("%d ", lista[i]);
	 }
    
    }
    printf("\n");
    system("PAUSE");
    return 0;
}