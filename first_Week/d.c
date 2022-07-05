#include <stdio.h>
int main(){
	float compr, larg, area, totW;
	printf("Digite o comprimento: ");
	scanf("%f", &compr);
	printf("Digite a largura: ");
	scanf("%f", &larg);
	area = larg * compr;
	totW = 18 * area;
	printf("A quantidade de Wates necessários para iluminar o cômodo é de %.2f Watts", totW);
	return 0;
}
