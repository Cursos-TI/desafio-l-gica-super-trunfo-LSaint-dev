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

    int escolhaAtributo1;
    int escolhaAtributo2; 

    printf("*****************************************\n");
    printf("  SUPER TRUNFO DE CIDADES - NÍVEL MESTRE \n");
    printf("*****************************************\n\n");

    // ENTRADA DE DADOS DA CARTA 1
    printf("INFORME OS DADOS DA CARTA 1\n");

    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado1); // Espaço antes de %c para consumir o '\n' pendente

    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigoCarta1); 

    printf("Nome da Cidade (sem espaços): ");
    scanf("%s", nomeCidade1); 

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

    printf("\n");

    // ENTRADA DE DADOS DA CARTA 2
    printf("INFORME OS DADOS DA CARTA 2\n");

    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigoCarta2);

    printf("Nome da Cidade (sem espaços): ");
    scanf("%s", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numPontosTuristicos2);

    // CÁLCULOS PARA A CARTA 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    printf("\n*****************************************\n");
    printf("  DADOS DAS CARTAS CADASTRADAS E CALCULADAS \n");
    printf("*****************************************\n\n");

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
    printf("\n");

    // MENU INTERATIVO E COMPARAÇÃO DE DOIS ATRIBUTOS
    printf("*****************************************\n");
    printf("  ESCOLHA DOIS ATRIBUTOS PARA A COMPARAÇÃO\n");
    printf("*****************************************\n\n");

    printf("Opções de Atributos:\n");
    printf("1. População (Maior vence)\n");
    printf("2. Área (Maior vence)\n");
    printf("3. PIB (Maior vence)\n");
    printf("4. Número de Pontos Turísticos (Maior vence)\n");
    printf("5. Densidade Populacional (Menor vence)\n");
    printf("6. PIB per Capita (Maior vence)\n");

    printf("Escolha o PRIMEIRO atributo (1-6): ");
    scanf("%d", &escolhaAtributo1);

    // Validação básica para evitar que o segundo atributo seja o mesmo
    do {
        printf("Escolha o SEGUNDO atributo (1-6, diferente do primeiro): ");
        scanf("%d", &escolhaAtributo2);
        if (escolhaAtributo1 == escolhaAtributo2) {
            printf("Os atributos devem ser diferentes. Por favor, escolha novamente.\n");
        }
    } while (escolhaAtributo1 == escolhaAtributo2);

    printf("\n*****************************************\n");
    printf("  RESULTADO DA COMPARAÇÃO AVANÇADA       \n");
    printf("*****************************************\n\n");

    // Variáveis para armazenar os valores dos atributos escolhidos
    float valor1_atrib1, valor2_atrib1;
    float valor1_atrib2, valor2_atrib2;

    // Determina os valores do primeiro atributo
    switch (escolhaAtributo1) {
        case 1: // População
            valor1_atrib1 = (float)populacao1;
            valor2_atrib1 = (float)populacao2;
            printf("Comparação principal: População\n");
            break;
        case 2: // Área
            valor1_atrib1 = area1;
            valor2_atrib1 = area2;
            printf("Comparação principal: Área\n");
            break;
        case 3: // PIB
            valor1_atrib1 = pib1;
            valor2_atrib1 = pib2;
            printf("Comparação principal: PIB\n");
            break;
        case 4: // Número de Pontos Turísticos
            valor1_atrib1 = (float)numPontosTuristicos1;
            valor2_atrib1 = (float)numPontosTuristicos2;
            printf("Comparação principal: Número de Pontos Turísticos\n");
            break;
        case 5: // Densidade Populacional
            valor1_atrib1 = densidadePopulacional1;
            valor2_atrib1 = densidadePopulacional2;
            printf("Comparação principal: Densidade Populacional\n");
            break;
        case 6: // PIB per Capita
            valor1_atrib1 = pibPerCapita1;
            valor2_atrib1 = pibPerCapita2;
            printf("Comparação principal: PIB per Capita\n");
            break;
        default:
            printf("Erro: Primeiro atributo inválido.\n");
            return 1; // Sai do programa com erro
    }

    // Determina os valores do segundo atributo (para desempate)
    switch (escolhaAtributo2) {
        case 1: // População
            valor1_atrib2 = (float)populacao1;
            valor2_atrib2 = (float)populacao2;
            printf("Desempate: População\n");
            break;
        case 2: // Área
            valor1_atrib2 = area1;
            valor2_atrib2 = area2;
            printf("Desempate: Área\n");
            break;
        case 3: // PIB
            valor1_atrib2 = pib1;
            valor2_atrib2 = pib2;
            printf("Desempate: PIB\n");
            break;
        case 4: // Número de Pontos Turísticos
            valor1_atrib2 = (float)numPontosTuristicos1;
            valor2_atrib2 = (float)numPontosTuristicos2;
            printf("Desempate: Número de Pontos Turísticos\n");
            break;
        case 5: // Densidade Populacional
            valor1_atrib2 = densidadePopulacional1;
            valor2_atrib2 = densidadePopulacional2;
            printf("Desempate: Densidade Populacional\n");
            break;
        case 6: // PIB per Capita
            valor1_atrib2 = pibPerCapita1;
            valor2_atrib2 = pibPerCapita2;
            printf("Desempate: PIB per Capita\n");
            break;
        default:
            printf("Erro: Segundo atributo inválido.\n");
            return 1; // Sai do programa com erro
    }

    printf("\n");

    // Lógica de Comparação com Operadores Ternários
    // maior valor vence, exceto Densidade Populacional (menor valor vence)

    int carta1VenceAtrib1 = 0;
    int carta2VenceAtrib1 = 0;
    int empateAtrib1 = 0;

    // Avalia o primeiro atributo
    if (escolhaAtributo1 == 5) { // Densidade Populacional (menor vence)
        carta1VenceAtrib1 = (valor1_atrib1 < valor2_atrib1);
        carta2VenceAtrib1 = (valor2_atrib1 < valor1_atrib1);
        empateAtrib1 = (valor1_atrib1 == valor2_atrib1);
    } else { // Demais atributos (maior vence)
        carta1VenceAtrib1 = (valor1_atrib1 > valor2_atrib1);
        carta2VenceAtrib1 = (valor2_atrib1 > valor1_atrib1);
        empateAtrib1 = (valor1_atrib1 == valor2_atrib1);
    }

    // Determina o vencedor com base no primeiro e, se necessário, no segundo atributo
    if (carta1VenceAtrib1) {
        printf("Vencedor: Carta 1 - %s (pelo primeiro atributo).\n", nomeCidade1);
    } else if (carta2VenceAtrib1) {
        printf("Vencedor: Carta 2 - %s (pelo primeiro atributo).\n", nomeCidade2);
    } else { // Empate no primeiro atributo, usa o segundo
        printf("Empate no primeiro atributo! Comparando pelo segundo atributo...\n");
        // Avalia o segundo atributo
        if (escolhaAtributo2 == 5) { // Densidade Populacional (menor vence)
            if (valor1_atrib2 < valor2_atrib2) {
                printf("Vencedor: Carta 1 - %s (pelo segundo atributo).\n", nomeCidade1);
            } else if (valor2_atrib2 < valor1_atrib2) {
                printf("Vencedor: Carta 2 - %s (pelo segundo atributo).\n", nomeCidade2);
            } else {
                printf("Empate nos dois atributos! Nenhuma carta venceu.\n");
            }
        } else { // Demais atributos (maior vence)
            if (valor1_atrib2 > valor2_atrib2) {
                printf("Vencedor: Carta 1 - %s (pelo segundo atributo).\n", nomeCidade1);
            } else if (valor2_atrib2 > valor1_atrib2) {
                printf("Vencedor: Carta 2 - %s (pelo segundo atributo).\n", nomeCidade2);
            } else {
                printf("Empate nos dois atributos! Nenhuma carta venceu.\n");
            }
        }
    }

    printf("\n");;

    return 0;
}