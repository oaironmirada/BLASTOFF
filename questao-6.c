#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int h1, m1, s1, h2, m2, s2, hf, mf, sf, resto, seg = 3600, haux = 0, maux = 0;
	
	printf("Digite a hora inicial: ");
	scanf("%d", &h1);
	
	printf("Digite o minuto inicial: ");
	scanf("%d", &m1);
	
	s1 = ((h1 * 3600) + (m1 * 60));
	
	printf("Digite a hora final: ");
	scanf("%d", &h2);
	
	printf("Digite o minuto final: ");
	scanf("%d", &m2);
	
	s2 = ((h2 * 3600) + (m2 * 60));
	
	sf = (s2 - s1);
	
	hf = (sf/seg);
	resto = (sf % seg);
	mf = (resto / 60);
	
	if (hf < 0){
		haux = (hf * (-1));
		
	}
	if (mf < 0){
		maux = (mf * (-1));
	}
	
	
	printf("A duração foi de %dh:%dmin \n", haux, maux);
	
	return 0;
}