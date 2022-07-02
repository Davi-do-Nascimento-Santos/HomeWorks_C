#include <stdio.h>
int main(){
	/* Faça um programa que informa a comissão de um garçom pelo atendimento a um cliente, sabendo que o
garçom sempre recebe 10% de comissão sobre o valor de consumo de um cliente no restaurante.
	*/
	float comissao, total;
	printf("Digite o valor de consumo do cliente: R$");
	scanf("%f", &total);
	comissao = total * (10.0/100);
	printf("A comissão do garçon é  R$%.2f\n", comissao);
	return 0;
}

