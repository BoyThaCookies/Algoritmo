#include<stdio.h>
main(){
	float salario, aum, saum;
	printf("Digite seu salario: ");
	scanf("%f",&salario);
	aum = salario * 0.25;
	saum = salario + aum;
	printf("Seu salario com aumento: %f",saum);
}
