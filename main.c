#include <stdio.h>	

int main()
{
	char Produto[50];	
	float preço_anterior, preço_atual, variacao;	
	int i;	

	for (i = 1; i<= 3; i++) {
		printf("Digite o nome do Produto: ");	
		scanf(" %[^\n]", Produto);	

		printf("Digite o preço do mês anterior (R$): ");	
		scanf("%f", &preço_anterior);	

		printf("Digite o preço do mês atual (R$): ");	
		scanf("%f", &preço_atual);	

		variacao = ((preço_atual - preço_anterior) / preço_anterior) * 100;	

		printf("\n=======================================\n");
        printf("Produto: %s\n", Produto);
        printf("Preco anterior: R$ %.2f\n", preço_anterior);
        printf("Preco atual: R$ %.2f\n", preço_atual);
        printf("Variacao: %.2f%%\n", variacao);

        if (variacao > 0) {
            printf("Situacao: AUMENTO\n");
            if (variacao > 10) {
                printf("*** ALERTA: AUMENTO ABUSIVO DETECTADO ***\n");
            }
        } else if (variacao < 0) {
            printf("Situacao: QUEDA\n");
        } else {
            printf("Situacao: ESTAVEL\n");
        }

        printf("=======================================\n\n");
    }

    return 0;
}
