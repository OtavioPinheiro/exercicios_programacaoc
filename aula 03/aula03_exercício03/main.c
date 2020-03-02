#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float sal_bruto = 0.0, sal_liq = 0.0, aumento = 0.0;
    printf("Por favor, informe o salário bruto: R$");
    scanf("%f", &sal_bruto);
    aumento = sal_bruto>1000 ? 1.05 : 1.07;
    sal_liq = sal_bruto*aumento;
    printf("\n*****INFORMAÇÕES*****\n\nSalário Bruto: R$%.2f\n\nSalário Líquido: R$%.2f\n\nAumento recebido: %.2f%%\t\tR$ %.2f\n", sal_bruto, sal_liq, (aumento-1)*100, sal_liq-sal_bruto);
    return 0;
}
