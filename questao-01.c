#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float i, j, k, x, y, media;

    printf ("Informe a primeira idade: ");
    scanf ("%f", &i);

    printf ("Informe a segunda idade: ");
    scanf ("%f", &j);

    printf ("Informe a terceira idade: ");
    scanf ("%f", &k);

    printf ("Informe a quarta idade: ");
    scanf ("%f", &x);

    printf ("Informe a quinta idade: ");
    scanf ("%f", &y);

    media = ((i + j + k + x + y) / 5);

    printf ("A média das idades é: %.2f\n", media);
    system ("pause");
    
	return 0;
}
