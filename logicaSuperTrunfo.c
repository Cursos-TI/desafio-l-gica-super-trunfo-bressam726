#include <stdio.h>
#include <string.h>

typedef struct {
    char codigo[20];
    int populacao;
    float area;
    float pib;
} Cidade;

int main() {
    
    Cidade cidade1, cidade2;

    printf("Digite o código da cidade 1: ");
    scanf("%s", cidade1.codigo);
    printf("Digite a população da cidade 1: ");
    scanf("%d", &cidade1.populacao);
    printf("Digite a área da cidade 1 (em km²): ");
    scanf("%f", &cidade1.area);
    printf("Digite o PIB da cidade 1: ");
    scanf("%f", &cidade1.pib);

    
    printf("\nDigite o código da cidade 2: ");
    scanf("%s", cidade2.codigo);
    printf("Digite a população da cidade 2: ");
    scanf("%d", &cidade2.populacao);
    printf("Digite a área da cidade 2 (em km²): ");
    scanf("%f", &cidade2.area);
    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &cidade2.pib);

    
    int atributoEscolhido;
    printf("\nEscolha um atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("Digite o número do atributo escolhido: ");
    scanf("%d", &atributoEscolhido);

    if (atributoEscolhido == 1) {
        if (cidade1.populacao > cidade2.populacao) {
            printf("A cidade %s tem maior população.\n", cidade1.codigo);
        } else if (cidade1.populacao < cidade2.populacao) {
            printf("A cidade %s tem maior população.\n", cidade2.codigo);
        } else {
            printf("As cidades têm a mesma população.\n");
        }
    } else if (atributoEscolhido == 2) {
        if (cidade1.area > cidade2.area) {
            printf("A cidade %s tem maior área.\n", cidade1.codigo);
        } else if (cidade1.area < cidade2.area) {
            printf("A cidade %s tem maior área.\n", cidade2.codigo);
        } else {
            printf("As cidades têm a mesma área.\n");
        }
    } else if (atributoEscolhido == 3) {
        if (cidade1.pib > cidade2.pib) {
            printf("A cidade %s tem maior PIB.\n", cidade1.codigo);
        } else if (cidade1.pib < cidade2.pib) {
            printf("A cidade %s tem maior PIB.\n", cidade2.codigo);
        } else {
            printf("As cidades têm o mesmo PIB.\n");
        }
    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}

