#include <stdio.h>

int main() {
	int i, N;
	char ch, maiuscula;
	
	printf("Informe um valor inteiro N: ");
	scanf("%d", &N);
	
	for (i = 1; i <= N; i++) {
		printf("\nInforme um caractere: ");
		scanf(" %c", &ch);
		
		if (ch >= 'a' && ch <= 'z') {
			maiuscula = ch - 32;
			printf("%c\n", maiuscula);
		}			
		else {
			printf("Nao eh minuscula\n");
		}
	}
}
