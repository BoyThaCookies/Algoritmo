#include<stdio.h>
main(){
	float peso, pmn, pma, s, m;
	printf("Digite o seu peso: ");
	scanf("%f",&peso);
	s = peso * 0.15;
	m = peso * 0.25;
	pmn = s + peso;
	pma = peso - m;
	printf("Se voce engordar 15 ficara com: %.2fkg",pmn);
	printf("\nSe vc emagrecer 25 ficara com: %.2fkg",pma);
}
