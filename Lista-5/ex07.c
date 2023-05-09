#include <stdio.h>

int somaDivisoresProprios(int num);
int saoAmigos(int n1, int n2);

int main() {
	int valor1, valor2, qtdAmigos = 0;
	
	do {
		printf("Informe dois valores inteiros: ");
		scanf("%d %d", &valor1, &valor2);
		
		if (valor1 == valor2) break;
		
		int amigos = saoAmigos(valor1, valor2);
		if (amigos == 1) {
			printf("Sao amigos\n");
			qtdAmigos++;
		}
		else
			printf("Nao sao amigos\n");
	} while (1);
	
	printf("%d", qtdAmigos);
	
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

int saoAmigos(int n1, int n2) {
	int soma1 = somaDivisoresProprios(n1);
	int soma2 = somaDivisoresProprios(n2);
	
	if (n1 == soma2 && n2 == soma1)
		return 1;
	else
		return 0;
}
