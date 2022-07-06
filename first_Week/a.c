#include <stdio.h>

int main(){
	double raio, altura, volume_esfera, volume_cone, volume_cilindro;
	printf("Digite o raio: ");
	scanf("%lf", &raio);
	printf("Digite a altura: ");
	scanf("%lf", &altura);
	volume_esfera = (4 * 3.14 * (raio * raio * raio)) / 3;
	printf("O volume da esfera é %lf\n", volume_esfera);
	volume_cone = (3.14 * (raio * raio) * altura) / 3;
	printf("O volume do cone é %lf\n", volume_cone);
	volume_cilindro = 3.14 * (raio * raio) * altura;
	printf("O volume do cilindro é %lf\n", volume_cilindro);
	return 0;	
	
}
