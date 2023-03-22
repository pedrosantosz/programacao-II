#include <stdio.h>

int main() {
	int i, N;
	char ch;
	
	printf("Quantos caracteres vc quer digitar? ");
	scanf("%d", &N);
	
	for (i = 1; i <= N; i++) {
		printf("digite um caractere: ");
		scanf(" %c", &ch);
		
		if(ch >= 'A' && ch <= 'Z')
			printf("Sim!\n");
		else
			printf("Nao!\n");
	}
}
