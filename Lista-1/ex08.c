#include <stdio.h>

int main() {
	int sequencia = 0;
	char ch1, ch2;
	
	do {
		printf("Informe uma dupla de letras: ");
		scanf(" %c %c", &ch1, &ch2);
		
		if (ch1 + 1 == ch2)
			sequencia++;
			
		
	} while (ch1 != ch2);
	
	printf("\nSequencias crescentes: %d", sequencia);
}
