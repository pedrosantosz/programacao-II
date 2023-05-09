#include <stdio.h>

int maiorNumero(int n1, int n2);

int main() {
	int N, i, n1, n2, maior;
	printf("Informe um valor: ");
	scanf("%d", &N);
	
	for(i = 1; i <= N; i++) {
		printf("Informe dois valores inteiros: ");
		scanf("%d %d", &n1, &n2);
		maior = maiorNumero(n1, n2);
		if (maior == -1)
			printf("Eles sao iguais\n");
		else
			printf("Maior: %d\n", maior);
	}
}

int maiorNumero(int n1, int n2) {
	if (n1 == n2)
		return -1;
	else if (n1 > n2)
		return n1;
	else
		return n2;
}
