#include <stdio.h>
int main(){
	/* Faça um programa para converter uma quantidade de horas digitadas pelo usuário em minutos.
	*/
	int horas, minutos;
	printf("Digite a quantidade de horas: ");
	scanf("%d", &horas);
	minutos = horas * 60;
	printf("%d Horas = %d Minutos\n", horas, minutos);
	return 0;
}
