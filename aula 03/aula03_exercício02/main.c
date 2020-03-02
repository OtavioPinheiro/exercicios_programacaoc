#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float sal_bruto = 0.0, sal_liq = 0.0, taxa = 0.0, impostos = 0.0;
    char civil;
    printf("Por favor, informe os dados a seguir:\n\nSalário bruto: R$");
    scanf("%f", &sal_bruto);
    printf("\nEstado Civil: Solteiro [s]; Casado [c]:");
    scanf(" %c", &civil);
    if(civil == 's')
    {
        taxa = 10.0/100;
    }
    else
    {
        taxa = 9.0/100;
    }
    impostos = taxa*sal_bruto;
    sal_liq = sal_bruto - impostos;
    printf("\nEstado Civil: %c\n\nSalário Bruto: R$%.2f\n\nSalário Líquido: R$%.2f\n\nTaxa cobrada: %.2f%%\n\nImpostos a pagar: R$%.2f\n", civil, sal_bruto, sal_liq, taxa*100, impostos);
    return 0;
}
