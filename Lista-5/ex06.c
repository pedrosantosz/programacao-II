#include <stdio.h>

int main() {
	int N, i, valor, teste = somaDivisoresProprios(64);
	printf("Informe um valor N: ");
	scanf("%d", &N);
	
	for (i = 1; i <= N; i++) {
		printf("Informe um valor inteiro: ");
		scanf("%d", &valor);
		int soma = somaDivisoresProprios(valor);
		printf("%d\n", soma);
	}
}

int somaDivisoresProprios(int num) {
	int i, divisor, soma = 0;
	for (i = 1; i < num; i++) {
		divisor = num % i;
		if (divisor == 0)
			soma = soma + i;
	}
	return soma;
}
