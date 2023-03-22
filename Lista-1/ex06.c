#include <stdio.h>

int main() {
	int i, N;
	char ch, sucessor;
	printf("Informe um valor inteiro N: ");
	scanf("%d", &N);
	
	for (i = 1; i <= N; i++) {
		printf("Digite um caractere: ");
		scanf(" %c", &ch);
		
		if(ch == 'Z')
			sucessor = 'A';
		else
			sucessor = ch + 1;
		
		printf("%c\n", sucessor);
	}
}
