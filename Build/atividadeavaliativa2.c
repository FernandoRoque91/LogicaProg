#include <stdio.h>

///Fernando Roque Franca
/// RA 22504065

int main () {
    char nome_vendedor [50]; 
    double salario_fixo, total_vendas_mes, salario_total; 
    printf ("Escreva seu nome: ");
    scanf  ("%s" , nome_vendedor);
    printf ("Informe seu salário fixo: ");
    scanf ("%d" , salario_fixo);
    printf ("Informe seu total de vendas por mes: ");
    scanf ("%d" , total_vendas_mes);
    salario_total = salario_fixo + (total_vendas_mes * 0.15);

    printf ("Salario total = R$ %.2lf\n", salario_total);

    return 0;


}