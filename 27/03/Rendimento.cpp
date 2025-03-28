#include<stdio.h>
main(){
	float vd, tj, vr, vdt;
	printf("Digite o valor a ser depositado: ");
	scanf("%f",&vd);
	printf("Digite a taxa de juros: ");
	scanf("%f",&tj);
	vr = vd * tj/100;
	vdt = vr + vd;
	printf("Rendeu: R$ %.2f de juros",vr);
	printf("\nO valor total de rendimento: R$ %.2f",vdt);
}
