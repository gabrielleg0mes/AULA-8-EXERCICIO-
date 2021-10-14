#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese_Brazil");
	
	float media, N1, N2;
	
	printf("Calcular a Média do Aluno\n");
	
	printf("Nota da N1: ");
	scanf("%f", &N1);
	
	printf("Nota da N2: ");
	scanf("%f", &N2);
	
	media = (N1*2 + N2*3)/5;
	printf("A Média final do aluno é: %.2f\n", media);

	system("pause"); 
    return 0;
}


