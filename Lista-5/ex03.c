#include <stdio.h>

float resistenciaEq(int op, float R1, float R2, float R3);

int main(){
	int op;
	float Req, R1, R2, R3;
	
	do {
		printf("Informe a operacao (1. Serie, 2. Paralelo, 3. Fim)\n");
		scanf("%d", &op);
		
		if (op == 3) break;
		
		printf("Informe os valores e R1, R2 e R3 respectivamente\n");
		scanf("%f %f %f", &R1, &R2, &R3);
			
		Req = resistenciaEq(op, R1, R2, R3);
		printf("%.3f\n", Req);
	} while(1);
}

float resistenciaEq(int op, float R1, float R2, float R3) {
	float req;
	switch (op) {
		case 1: {
			req = R1 + R2 + R3;
			break;
		}
		case 2: {
			req = 1 / (1 / R1 + 1 / R2 + 1 / R3);
			break;
		}
	}
	return req;
}
