#include <stdio.h>
#include <math.h>

float areaCircunferencia(float r);
float compCircunferencia(float r);

int main(){
	float raio, area, comp;
	
	do {
		printf("Informe o valor do raio: ");
		scanf("%f", &raio);
		
		if (raio <= 0) break;
		
		area = areaCircunferencia(raio);
		comp = compCircunferencia(raio);
		
		printf("Area: %.3f\nComprimento: %.3f\n", area, comp);
	} while (1);
}

float areaCircunferencia(float r) {
	return M_PI * pow(r, 2);
}

float compCircunferencia(float r) {
	return 2 * M_PI * r;
}
