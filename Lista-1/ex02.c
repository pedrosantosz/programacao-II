#include <stdio.h>

int main() {
	int minusculas = 0;
	char ch;
	
	do {
		printf("Informe um caractere: ");
		scanf(" %c", &ch);
		
		if (ch >= 'a' && ch <= 'z')
			minusculas++;
	} while (ch != 'F');
	
	if (minusculas == 0)
		printf("Nenhuma letra minuscula");
	else
		printf("%d letra(s) minuscula(s)", minusculas);
}
