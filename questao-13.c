#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include<string.h>
#include <ctype.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int a = 0, b = 0;
	int i, j, ax, bx;
	
	printf("Defina a quantidade de linhas da matriz: ");
	scanf("%d", &a);
	ax = a;
	
	printf("Defina a quantidade de colunas da matriz: ");
	scanf("%d", &b);
	bx = b;
	
	int matriz[a][b];
	
	printf("\ndigite o valor para os elementos da matriz: ");
	
	for(i = 0; i <ax; i++){
		for(j = 0; j < bx; j++ ){
			printf ("\nElemento[%d][%d] = ", (i+1), (j+1));
			scanf ("%d", &matriz[ i ][ j ]);
		}
	}
	system("cls");
	printf("\n\n******************* Saida de Dados ********************* \n\n");
	
	for(i = 0; i <ax; i++){
		for(j = 0; j < bx; j++ ){
			printf ("\nElemento[%d][%d] = %d\n", (i+1), (j+1),matriz[ i ][ j ]);
		}
	}
	
	return 0;
}