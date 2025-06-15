#include <stdio.h>

int main() {
    // Variáveis para a CARTA 1
    char estado1;
    char codigoCarta1[10];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int numPontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // Variáveis para a CARTA 2
    char estado2;
    char codigoCarta2[10];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numPontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    printf("*****************************************\n");
    printf("  SUPER TRUNFO DE CIDADES - NÍVEL NOVATO \n");
    printf("*****************************************\n\n");

    // Cadastro das Cartas:
    // Implementa a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.

    // ENTRADA DE DADOS DA CARTA 1
    printf("INFORME OS DADOS DA CARTA 1\n");

    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01, B03): ");
    scanf("%9s", codigoCarta1);

    printf("Nome da Cidade (sem espaços): ");
    scanf("%49s", nomeCidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numPontosTuristicos1);

    // CÁLCULOS PARA A CARTA 1
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)numPontosTuristicos1 +
                  pibPerCapita1 + (1.0f / densidadePopulacional1);

    printf("\n");

    // ENTRADA DE DADOS DA CARTA 2
    printf("INFORME OS DADOS DA CARTA 2\n");

    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A01, B03): ");
    scanf("%9s", codigoCarta2);

    printf("Nome da Cidade (sem espaços): ");
    scanf("%49s", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numPontosTuristicos2);

    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)numPontosTuristicos2 +
                  pibPerCapita2 + (1.0f / densidadePopulacional2);

    printf("\n*****************************************\n");
    printf("  DADOS DAS CARTAS CADASTRADAS E CALCULADAS \n");
    printf("*****************************************\n\n");

    // Exibição dos Resultados:
    // Após realizar as comparações, exibe os resultados para o usuário.

    // EXIBIÇÃO DE DADOS DA CARTA 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    printf("\n");

    // EXIBIÇÃO DE DADOS DA CARTA 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);
    printf("\n");

    // Comparação de Cartas:
    // Desenvolve a lógica de comparação entre duas cartas.
    // Utiliza estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    printf("*****************************************\n");
    printf("  COMPARAÇÃO DE CARTAS                   \n");
    printf("*****************************************\n\n");

    // Comparação pela Densidade Populacional (MENOR valor vence)
    printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
    printf("Carta 1 - %s (%c): %.2f hab/km²\n", nomeCidade1, estado1, densidadePopulacional1);
    printf("Carta 2 - %s (%c): %.2f hab/km²\n", nomeCidade2, estado2, densidadePopulacional2);

    if (densidadePopulacional1 < densidadePopulacional2) { // MENOR VALOR VENCE!
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (densidadePopulacional2 < densidadePopulacional1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    printf("\n");

    return 0;
}