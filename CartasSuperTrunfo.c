#include <stdio.h>

    int main(){
        // Variáveis Carta 1
        char estado1, codigo1[4], cidade1[20];
        int populacao1, pontosturisticos1;
        float area1, pib1;

        // Variáveis Carta 2
        char estado2, codigo2[4], cidade2[20];
        int populacao2, pontosturisticos2;
        float area2, pib2;

        // --- Cadastro da Carta 1 ---
        printf("-Cadastro Carta 1-\n");

        printf("Estado uma letra(A-H):");
        scanf(" %c", &estado1);

        printf("Código da Carta (ex:A01):");
        scanf(" %s", &codigo1);

        printf("Nome da Cidade:");
        scanf(" %s", &cidade1);

        printf("População:");
        scanf( "%d", &populacao1);

        printf("Área em km²:");
        scanf(" %f", &area1);

        printf("PIB:");
        scanf(" %f", &pib1);

        printf("Numero de Pontos Turísticos:");
        scanf(" %d", &pontosturisticos1);

        // --- Cadastro da Carta 2 ---
        
        printf("-Cadastro Carta 2-\n");

        printf("Estado uma letra(A-H):");
        scanf(" %c", &estado2);

        printf("Código da Carta (ex:A02):");
        scanf(" %s", &codigo2);

        printf("Nome da Cidade:");
        scanf(" %s", &cidade2);

        printf("População:");
        scanf( "%d", &populacao2);

        printf("Área em km²:");
        scanf(" %f", &area2);

        printf("PIB:");
        scanf(" %f", &pib2);

        printf("Numero de Pontos Turísticos:");
        scanf(" %d", &pontosturisticos2);

        // --- Exibição dos Dados ---
        printf("---CARTAS CADASTRADAS---\n");

        // Exibição Carta 1
        printf("Carta 1:\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Nome da Cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f bilhões de reais\n", pib1);
        printf("Pontos Turísticos: %d\n", pontosturisticos1);

        printf("\n");

        // Exibição Carta 2
        printf("Carta 2:\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Nome da Cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Pontos Turísticos: %d\n", pontosturisticos2);

        return 0;
    }
