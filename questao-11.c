#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int a[] = {1, 2, 3, 4}, b[] = {1, 2, 5, 8};
	int i, j;
	
	for (i = 0; i < 4; i++){
		for (j = 0; j < 4; j++){
			if (a[i] == b[j]){
				printf("A interseccão é: %d\n", a[i]);
			}
		}
	}
	
	system("pause");
	
	return 0;
}