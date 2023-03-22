#include <stdio.h>

int main() {
	int i, N, T, decimal, soma;
	char ch;
	
	printf("Informe um valor inteiro N: ");
	scanf("%d", &N);
	printf("Informe um valor inteiro T: ");
	scanf("%d", &T);
	
	for (i = 1; i <= N; i++) {
		printf("\nInforme um caractere: ");
		scanf(" %c", &ch);
		
		if (ch >= '0' && ch <= '9') {
			decimal = ch - 48;
			printf("%d\n", decimal);
			printf("%d\n", decimal + T);
		} else if(ch >= 'A' && ch <= 'F') {
			decimal = ch - 55;
			printf("%d\n", decimal);
			printf("%d\n", decimal + T);
		} else {
			printf("Digito Invalido\n");
		}
	}
}
