#include <stdio.h>

int main() {
	int i, j, L, C;
	char ch;
	
	printf("Informe um valor inteiro L: ");
	scanf("%d", &L);
	printf("Informe um valor inteiro C: ");
	scanf("%d", &C);
	printf("Informe um caractere: ");
	scanf(" %c", &ch);
	
	for (i = 1; i <= L; i++) {
		printf("\n");
		for (j = 1; j <= C; j++) {
			printf("%c", ch);
		}
	}
}
