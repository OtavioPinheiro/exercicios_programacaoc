#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float sal_bruto = 0.0, sal_liq = 0.0, taxa = 0.0, impostos = 0.0;
    char sexo;
    printf("Por favor, informe o sal�rio bruto: R$");
    scanf("%f", &sal_bruto);
    printf("\nCom qual g�nero voc� se identifica: Masculino [m] | Feminino [f]: ");
    scanf(" %c", &sexo);
    switch(sexo)
    {
        case 'f':
            taxa = 10.0/100;
            impostos = sal_bruto*taxa;
            sal_liq = sal_bruto - impostos;
            break;

        case 'm':
            taxa = 15.0/100;
            impostos = sal_bruto*taxa;
            sal_liq = sal_bruto - impostos;
            break;

        default:
            printf("\nPor favor, digite ou f para feminino ou m para masculino");
    }
    printf("\n***** INFORMA��ES*****\n\nSexo: %c\n\nSal�rio Bruto: R$%.2f\n\nSal�rio L�quido: R$%.2f\n\nTaxa cobrada: %.2f%%\n\nImpostos: R$%.2f\n", sexo, sal_bruto, sal_liq, taxa*100, impostos);
    return 0;
}
