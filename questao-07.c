#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int t=0, lista[t], i=0, n, aux, a;


    printf("Quantos numeros quer saber o par: ");
    scanf("%d", &t);

    for(i=0; i<t; i++){
        printf("Digite o numero: ");
        scanf("%d", &lista[i]);
	}

	for (i = 0; i < t; i++){
		for (a = i + 1; a < t; a++){
			if(lista[i] > lista[a]){
				aux = lista[i];
				lista[i] = lista[a];
				lista[a] = aux;
			}
		}
	}
	
    for(i=0; i<t; i++){
 	n = lista[i] %2;
 	
 	if (n == 0){
		 printf("%d", lista[i]);
    printf("\n");
	 }
    
    }

    system("PAUSE");
    return 0;
}
