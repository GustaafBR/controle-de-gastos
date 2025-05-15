#include <stdio.h>

int main(){
    float salario, cinquentaporc, vinteporc, trintaporc;

    printf("Digite o quanto você recebeu no mês, em R$:\n");
    scanf("%f", &salario);
    printf("\n");

    vinteporc = salario * 0.2;
    trintaporc = salario * 0.3;
    cinquentaporc = salario * 0.5;


    printf("-----------------------------------------------------\n");
    printf("\n");
    printf("Controle de gastos:\n");
    printf("\n");
    printf("Dinheiro para gastos essenciais (ex.: dívidas mensais): R$ %.2f\n", cinquentaporc);
    printf("\n");
    printf("Dinheiro para gastos não essenciais (ex.: jantar em restaurantes): R$ %.2f\n", trintaporc);
    printf("\n");
    printf("Dinheiro para investimentos e reserva de emergência: R$ %.2f\n", vinteporc);

}
