#include <stdio.h>

char leiaDigitoHexadecimal(void);
int valorDigitoHexadecimal(char digito);

int main() {
	int N, T, i;
	
	printf("Informe um valor: ");
	scanf("%d", &N);
	printf("Informe um valor para somar: ");
	scanf("%d", &T);
	
	for (i = 1; i <= N; i++) {
		int hexadecimal = leiaDigitoHexadecimal();
		if (hexadecimal != '@') {
			int decimal = valorDigitoHexadecimal(hexadecimal);
			int soma = T + decimal;
			printf("%d %d\n", decimal, soma);
		}
		else
			printf("Digito Invalido\n");
	}
}

char leiaDigitoHexadecimal(void) {
	char ch;
	
	printf("Informe um caractere: ");
	scanf(" %c", &ch);
	
	if (ch >= 'A' && ch <= 'F' || ch >= '0' && ch <= '9')
		return ch;
	else
		return '@';	
}

int valorDigitoHexadecimal(char digito) {
	int decimal;
	
	if (digito >= '0' && digito <= '9')
		decimal = digito - '0';
	else if (digito >= 'A' && digito <= 'F')
		decimal = digito - ('A' - 10);
	
	return decimal;
}
