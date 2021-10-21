#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int a[] = {1, 2, 3, 4};
	int b[] = {1, 2, 5, 8};
	int c[8];
	int i, j, x;
	
	for(i=0; i<4; i++){
    	c[i] = a[i];
	}
	
	for (j=0; j<4; j++){
    	c[i] = b[j];
    	i++;
	}
	
	for (x=0; x<8; x++){
    	printf("%d, ", c[x]);
	}
	
	system("pause");
	return 0;
}