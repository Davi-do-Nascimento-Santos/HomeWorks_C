#include <stdio.h>
#include <math.h>
int main(){
	double raio, altura, volume_esfera, volume_cone, volume_cilindro;
	printf("Digite o raio: \n");
	scanf("%lf", &raio);
	printf("Digite a altura: \n");
	scanf("%lf", &altura);
	volume_esfera = (4 * 3.14 * pow(raio, 3)) / 3;
	printf("O volume da esfera é %lf\n", volume_esfera);
	return 0;	
	
}
