Claro, Zé! Sem problemas! O "Super Poder" está fora, e vou remover o `%9s` e `%49s` também, deixando os `scanf` mais simples, como nas suas primeiras bases.

Com essas alterações, o código ficará mais direto na leitura de strings, sem as limitações de tamanho explícitas no `scanf`. Lembre-se que para o **"Nome da Cidade"**, `scanf("%s", ...)` ainda vai parar a leitura no primeiro espaço.

---

## Super Trunfo - Países: Nível Aventureiro (Sem Super Poder e `%s` Simples)

Esta versão do Nível Aventureiro permite que você escolha qual atributo comparar entre as duas cartas, mas agora o "Super Poder" foi removido. A lógica de comparação e desempate permanece para os atributos tradicionais.

---

### Como Funciona

1.  **Cadastro das Cartas**: Você inserirá os dados das duas cidades. Os cálculos de Densidade Populacional e PIB per Capita serão feitos automaticamente.
2.  **Menu de Comparação**: Um menu aparecerá para você escolher o atributo de comparação (População, Área, PIB, Número de Pontos Turísticos, Densidade Populacional, ou PIB per Capita).
3.  **Comparação e Regras**:
    * **Maior valor vence**: Para População, Área, PIB, Número de Pontos Turísticos e PIB per Capita.
    * **Menor valor vence**: Para Densidade Populacional.
4.  **Exibição dos Resultados**: O sistema dirá qual carta ganhou e qual atributo foi usado. Em caso de empate no atributo principal, haverá uma tentativa de desempate por um atributo secundário predefinido.

---

### Código em C

```c
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    // Variáveis para a CARTA 1
    char estado1;
    char codigoCarta1[10]; // Mantém o tamanho para evitar overflow em entradas maiores
    char nomeCidade1[50];  // Mantém o tamanho para evitar overflow em entradas maiores
    unsigned long int populacao1;
    float area1;
    float pib1;
    int numPontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    // SuperPoder1 removido

    // Variáveis para a CARTA 2
    char estado2;
    char codigoCarta2[10]; // Mantém o tamanho para evitar overflow em entradas maiores
    char nomeCidade2[50];  // Mantém o tamanho para evitar overflow em entradas maiores
    unsigned long int populacao2;
    float area2;
    float pib2;
    int numPontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    // SuperPoder2 removido

    int escolhaAtributo; // Variável para armazenar a escolha do usuário no menu

    printf("*****************************************\n");
    printf("  SUPER TRUNFO DE CIDADES - NÍVEL AVENTUREIRO \n");
    printf("*****************************************\n\n");

    // ENTRADA DE DADOS DA CARTA 1
    printf("INFORME OS DADOS DA CARTA 1\n");

    printf("Estado (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado1); // Espaço antes de %c para consumir o '\n' pendente

    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigoCarta1); // %s simples

    printf("Nome da Cidade (sem espaços): ");
    scanf("%s", nomeCidade1); // %s simples

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
    // superPoder1 removido

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
    // superPoder2 removido

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

    // MENU INTERATIVO E COMPARAÇÃO
    printf("*****************************************\n");
    printf("  ESCOLHA O ATRIBUTO PARA A COMPARAÇÃO   \n");
    printf("*****************************************\n\n");

    printf("1. População (Maior vence)\n");
    printf("2. Área (Maior vence)\n");
    printf("3. PIB (Maior vence)\n");
    printf("4. Número de Pontos Turísticos (Maior vence)\n");
    printf("5. Densidade Populacional (Menor vence)\n");
    printf("6. PIB per Capita (Maior vence)\n");
    printf("Escolha sua opção: ");
    scanf("%d", &escolhaAtributo);
    printf("\n");

    printf("*****************************************\n");
    printf("  RESULTADO DA COMPARAÇÃO                \n");
    printf("*****************************************\n\n");

    switch (escolhaAtributo) {
        case 1: // População
            printf("Comparação pelo atributo: População\n");
            if (populacao1 > populacao2) {
                printf("Vencedor: Carta 1 - %s (População: %lu)\n", nomeCidade1, populacao1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: Carta 2 - %s (População: %lu)\n", nomeCidade2, populacao2);
            } else { // Empate em População, desempate pelo PIB
                printf("Empate em População! Desempate pelo PIB.\n");
                if (pib1 > pib2) {
                    printf("Vencedor: Carta 1 - %s (PIB: %.2f bilhões)\n", nomeCidade1, pib1);
                } else if (pib2 > pib1) {
                    printf("Vencedor: Carta 2 - %s (PIB: %.2f bilhões)\n", nomeCidade2, pib2);
                } else {
                    printf("Empate também no PIB! É um empate real entre as cartas.\n");
                }
            }
            break;

        case 2: // Área
            printf("Comparação pelo atributo: Área\n");
            if (area1 > area2) {
                printf("Vencedor: Carta 1 - %s (Área: %.2f km²)\n", nomeCidade1, area1);
            } else if (area2 > area1) {
                printf("Vencedor: Carta 2 - %s (Área: %.2f km²)\n", nomeCidade2, area2);
            } else { // Empate em Área, desempate pela População
                printf("Empate em Área! Desempate pela População.\n");
                if (populacao1 > populacao2) {
                    printf("Vencedor: Carta 1 - %s (População: %lu)\n", nomeCidade1, populacao1);
                } else if (populacao2 > populacao1) {
                    printf("Vencedor: Carta 2 - %s (População: %lu)\n", nomeCidade2, populacao2);
                } else {
                    printf("Empate também na População! É um empate real entre as cartas.\n");
                }
            }
            break;

        case 3: // PIB
            printf("Comparação pelo atributo: PIB\n");
            if (pib1 > pib2) {
                printf("Vencedor: Carta 1 - %s (PIB: %.2f bilhões)\n", nomeCidade1, pib1);
            } else if (pib2 > pib1) {
                printf("Vencedor: Carta 2 - %s (PIB: %.2f bilhões)\n", nomeCidade2, pib2);
            } else { // Empate em PIB, desempate por Pontos Turísticos
                printf("Empate em PIB! Desempate por Pontos Turísticos.\n");
                if (numPontosTuristicos1 > numPontosTuristicos2) {
                    printf("Vencedor: Carta 1 - %s (Pontos Turísticos: %d)\n", nomeCidade1, numPontosTuristicos1);
                } else if (numPontosTuristicos2 > numPontosTuristicos1) {
                    printf("Vencedor: Carta 2 - %s (Pontos Turísticos: %d)\n", nomeCidade2, numPontosTuristicos2);
                } else {
                    printf("Empate também em Pontos Turísticos! É um empate real entre as cartas.\n");
                }
            }
            break;

        case 4: // Número de Pontos Turísticos
            printf("Comparação pelo atributo: Número de Pontos Turísticos\n");
            if (numPontosTuristicos1 > numPontosTuristicos2) {
                printf("Vencedor: Carta 1 - %s (Pontos Turísticos: %d)\n", nomeCidade1, numPontosTuristicos1);
            } else if (numPontosTuristicos2 > numPontosTuristicos1) {
                printf("Vencedor: Carta 2 - %s (Pontos Turísticos: %d)\n", nomeCidade2, numPontosTuristicos2);
            } else { // Empate em Pontos Turísticos, desempate pela População
                printf("Empate em Pontos Turísticos! Desempate pela População.\n");
                if (populacao1 > populacao2) {
                    printf("Vencedor: Carta 1 - %s (População: %lu)\n", nomeCidade1, populacao1);
                } else if (populacao2 > populacao1) {
                    printf("Vencedor: Carta 2 - %s (População: %lu)\n", nomeCidade2, populacao2);
                } else {
                    printf("Empate também na População! É um empate real entre as cartas.\n");
                }
            }
            break;

        case 5: // Densidade Populacional (Menor vence)
            printf("Comparação pelo atributo: Densidade Populacional\n");
            if (densidadePopulacional1 < densidadePopulacional2) { // MENOR VALOR VENCE!
                printf("Vencedor: Carta 1 - %s (Densidade Populacional: %.2f hab/km²)\n", nomeCidade1, densidadePopulacional1);
            } else if (densidadePopulacional2 < densidadePopulacional1) {
                printf("Vencedor: Carta 2 - %s (Densidade Populacional: %.2f hab/km²)\n", nomeCidade2, densidadePopulacional2);
            } else { // Empate em Densidade, desempate pelo PIB per Capita
                printf("Empate em Densidade Populacional! Desempate pelo PIB per Capita.\n");
                if (pibPerCapita1 > pibPerCapita2) {
                    printf("Vencedor: Carta 1 - %s (PIB per Capita: %.2f)\n", nomeCidade1, pibPerCapita1);
                } else if (pibPerCapita2 > pibPerCapita1) {
                    printf("Vencedor: Carta 2 - %s (PIB per Capita: %.2f)\n", nomeCidade2, pibPerCapita2);
                } else {
                    printf("Empate também no PIB per Capita! É um empate real entre as cartas.\n");
                }
            }
            break;

        case 6: // PIB per Capita
            printf("Comparação pelo atributo: PIB per Capita\n");
            if (pibPerCapita1 > pibPerCapita2) {
                printf("Vencedor: Carta 1 - %s (PIB per Capita: %.2f)\n", nomeCidade1, pibPerCapita1);
            } else if (pibPerCapita2 > pibPerCapita1) {
                printf("Vencedor: Carta 2 - %s (PIB per Capita: %.2f)\n", nomeCidade2, pibPerCapita2);
            } else { // Empate em PIB per Capita, desempate pela Área
                printf("Empate em PIB per Capita! Desempate pela Área.\n");
                if (area1 > area2) {
                    printf("Vencedor: Carta 1 - %s (Área: %.2f km²)\n", nomeCidade1, area1);
                } else if (area2 > area1) {
                    printf("Vencedor: Carta 2 - %s (Área: %.2f km²)\n", nomeCidade2, area2);
                } else {
                    printf("Empate também na Área! É um empate real entre as cartas.\n");
                }
            }
            break;

        default:
            printf("Opção inválida! Por favor, escolha um número de 1 a 6.\n");
            break;
    }

    printf("\n");

    return 0;
}
```