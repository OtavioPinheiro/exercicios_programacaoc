#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float sal_bruto = 0.0, sal_liq = 0.0, taxa = 0.0, impostos = 0.0;
    printf("Por favor, digite o salário bruto: R$");
    scanf("%f", &sal_bruto);
    if(sal_bruto < 1000)
    {
        taxa = 5.0/100;
    }
    else if(sal_bruto >=1000 && sal_bruto < 5000)
    {
        taxa = 11.0/100;
    }
    else
    {
        taxa = 35.0/100;
    }
    impostos = sal_bruto*taxa;
    sal_liq = sal_bruto - impostos;
    printf("\nO salário bruto é de R$%.2f\n\nO salário líquido é de R$%.2f\n\nA taxa cobrada é %.2f%%\n\nOs Impostos a pagar são R$%.2f\n", sal_bruto, sal_liq, taxa*100, impostos);
    return 0;
}
