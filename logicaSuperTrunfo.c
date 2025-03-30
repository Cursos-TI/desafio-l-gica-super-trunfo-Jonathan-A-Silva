#include <stdio.h>
#include <locale.h>

const float calcularDensidadePopulacional(float populacao, float area)
{
    return populacao / area;
}

const float calcularPibCapita(float pib, float populacao)
{
    return pib / populacao;
}

const float calcularPoder(int populacao, float area, float pib, int pontos_turisticos, float pib_capita, float densidade_populacional)
{
    return populacao + area + pib + pontos_turisticos + pib_capita - densidade_populacional;
}

/*
poderia ter usado um void assim retirnaria o printf junto com o resultado.
agora retorna uma string de qual carta venceu.
*/
const char* compararAtributos(float comparacao1, float comparacao2)
{
    char* vencedor;
    if (comparacao1 > comparacao2)
    {
        vencedor = "O jogador 1 venceu.";
    }
    else if(comparacao1 < comparacao2)
    {
        vencedor = "O jogador 2 venceu.";
    }
    else
    {
        vencedor = "Empate";
    }

}

int main()
{

    // Para formatação de texto, como acentos.
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populaciona1, densidade_populaciona2;
    float pib_capita1, pib_capita2;
    float poder1, poder2;

    // Cadastro da primeira carta.
    printf("Cadastro da primeira carta\n");

    printf("Digite o estado da carta (uma letra de 'A' a 'H'):\n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (número de 01 a 04):\n");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nome1);

    printf("Digite a população da cidade:\n");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade (em km²):\n");
    scanf(" %f", &area1);

    printf("Digite o PIB da cidade:\n");
    scanf(" %f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf(" %d", &pontos_turisticos1);

    densidade_populaciona1 = calcularDensidadePopulacional(populacao1, area1);
    pib_capita1 = calcularPibCapita(pib1, populacao1);
    poder1 = calcularPoder(populacao1, area1, pib1, pontos_turisticos1, pib_capita1, densidade_populaciona1);

    printf("\n");

    // Cadastro da segunda carta.
    printf("Cadastro da segunda carta\n");

    printf("Digite o estado da carta (uma letra de 'A' a 'H'):\n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (número de 01 a 04):\n");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]", nome2);

    printf("Digite a população da cidade:\n");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade (em km²):\n");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade:\n");
    scanf(" %i", &pontos_turisticos2);

    densidade_populaciona2 = calcularDensidadePopulacional(populacao2, area2);
    pib_capita2 = calcularPibCapita(pib2, populacao2);
    poder2 = calcularPoder(populacao2, area2, pib2, pontos_turisticos2, pib_capita2, densidade_populaciona2);

    printf("\n");

    printf("Carta: 1 \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %c%s \n", estado1, codigo1);
    printf("Nome da Cidade: %s \n", nome1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de Pontos Turísticos:: %d \n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f \n", densidade_populaciona1);
    printf("PIB per Capita: %.2f \n", pib_capita1);
    printf("Poder: %.2f \n", poder1);

    printf("\n");

    printf("Carta: 2 \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %c%s \n", estado2, codigo2);
    printf("Nome da Cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Densidade Populacional: %.2f \n", densidade_populaciona2);
    printf("PIB per Capita: %.2f \n", pib_capita2);
    printf("Poder: %.2f \n", poder2);

    printf("\nComparação de Cartas \n");
    printf("População: %s\n", compararAtributos(populacao1, populacao2));
    printf("Área: %s\n", compararAtributos(area1, area2));
    printf("PIB: %s\n", compararAtributos(pib1, pib2));
    printf("Pontos Turísticos: %s\n", compararAtributos(pontos_turisticos1, pontos_turisticos2));
    printf("Densidade Populacional: %s\n", compararAtributos(densidade_populaciona1, densidade_populaciona2));
    printf("PIB: %s\n", compararAtributos(pib1, pib2));
    printf("PIB per Capita: %s\n", compararAtributos(pib_capita1, pib_capita2));
    printf("Super Poder: %s\n", compararAtributos(poder1, poder2));

    return 0;
}