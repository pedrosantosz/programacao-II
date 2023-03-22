#include <stdio.h>

int main() {
	char ch;
	int position;
	
	do {
		printf("Informe um caractere: ");
		scanf(" %c", &ch);
		
		if (ch >= 'A' && ch <= 'Z') {
			position = ch - 64;
			printf("%d\n", position);
		}
	} while(ch != '$');
}
