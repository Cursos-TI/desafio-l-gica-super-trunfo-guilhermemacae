#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    printf("Desafio SuperTrunfo!\n");
    printf("\n");
    
    // Criação das variáveis

    char letra1, letra2;
    char codigo1[10], codigo2[10];
    char cidade1[10], cidade2[10];
    float populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;
    float densidade1, densidade2;
    float percap1, percap2;
    int escolhaJogador, escolhaComputador;
    srand(time(0));

    // Entrada de dados da primeira carta
    
    printf("Insira as informações da Primeira Carta:\n");
    printf("\n");
    
    printf("Digite a letra de A a H: ");
    scanf(" %c", &letra1);

    printf("Digite o código: ");
    scanf("%s", codigo1);

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população (milhões): ");
    scanf("%f", &populacao1);
    
    printf("Digite a Área (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turistico1);

    populacao1 *= 1000000;
    // Calculando a densidade da primeira cidade
    densidade1 = (float) populacao1 / area1;
    
    pib1 *= 1000000000;
    // Calculando o percapta da primeira cidade
    percap1 = (float) pib1 / populacao1;

    printf("\n");

    // Entrada de dados da segunda carta

    printf("Insira as informações da Segunda Carta:\n");
    printf("\n");
    
    printf("Digite a letra de A a H: ");
    scanf(" %c", &letra2);

    printf("Digite o código: ");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população (milhões): ");
    scanf("%f", &populacao2);
  
    printf("Digite a Área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &turistico2);

    populacao2 *= 1000000;
    // Calculando a densidade da segunda cidade
    densidade2 = (float) populacao2 / area2;                           
        
    pib2 *= 1000000000;
    // Calculando o percapta da segunda cidade
    percap2 = (float) pib2 / populacao2;
    printf("\n");
    
    // Menu interativo

    printf("\n");
    printf("1. População \n");
    printf("2. Área \n");
    printf("3. PIB \n");
    printf("4. Pontos Turísticos \n");
    printf("5. Densidade \n");
    printf("6. PIB Per Capta \n");
    printf("\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 6 + 1;
    printf("\n");
    switch (escolhaJogador)
    {
    case 1:
    if (populacao1 > populacao2) {
        printf("A cidade %s tem a maior população.\n", cidade1);
    } else if (populacao1 < populacao2) {
        printf("A cidade %s tem a maior população.\n", cidade2);
    } else {
        printf("Ambas as cidades têm a mesma população.\n");
    }
    break;

    case 2:
    if (area1 > area2) {
        printf("A cidade %s tem a maior área.\n", cidade1);
    } else if (area1 < area2) {
        printf("A cidade %s tem a maior área.\n", cidade2);
    } else {
        printf("Ambas as cidades têm a mesma área.\n");
    }
    break;
    
    case 3:
    if (pib1 > pib2) {
        printf("A cidade %s tem o maior PIB.\n", cidade1);
    } else if (pib1 < pib2) {
        printf("A cidade %s tem o maior PIB.\n", cidade2);
    } else {
        printf("Ambas as cidades têm o mesmo PIB.\n");
    }
    break;

    case 4:
    if (turistico1 > turistico2) {
        printf("A cidade %s tem mais pontos turísticos.\n", cidade1);
    } else if (turistico1 < turistico2) {
        printf("A cidade %s tem mais pontos turísticos.\n", cidade2);
    } else {
       printf("Ambas as cidades têm o mesmo número de pontos turísticos.\n");
    }
    break;

    case 5:
    if (densidade1 < densidade2) {
        printf("A cidade %s tem menor densidade demográfica.\n", cidade1);
    } else if (densidade1 < densidade2) {
        printf("A cidade %s tem menor densidade demográfica.\n", cidade2);
    } else {
        printf("Ambas as cidades têm a mesma densidade demográfica.\n");
    }
    break;
    
    case 6:
    if (percap1 > percap2) {
        printf("A cidade %s tem o maior PIB per capta.\n", cidade1);
    } else if (percap1 < percap2) {
        printf("A cidade %s tem o maior PIB per capta.\n", cidade2);
    } else {
        printf("Ambas as cidades têm o mesmo PIB per capta.\n");
    }
    break;
    default:
        printf("Opção inválida! Por favor, escolha um número de 1 a 6.\n");
    break;
    }

    /*
    // Exibição dos dados da primeira carta 
    
    printf("Carta 1: \n");
    printf("Codigo da Carta 1: %c%s \n", letra1, codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %.0f Milhões\n", populacao1 / 1000000);
    printf("Área: %.1f km2\n", area1);
    printf("PIB: %.0f Bilhões de reais\n", pib1 / 1000000000);
    printf("Pontos turísticos: %d \n", turistico1);
    printf("PIB per Capita: R$%.2f reais\n", percap1);
    printf("Densidade demográfica: %.2f hab/km²\n", densidade1);
    printf("\n");
    
    // Exibição dos dados da segunda carta 

    printf("Carta 2: \n");
    printf("Codigo da Carta 2: %c%s \n", letra2, codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %.0f Milhões\n", populacao2 / 1000000);
    printf("Área: %.1f km2\n", area2);
    printf("PIB: %.0f Bilhões de reais\n", pib2 / 1000000000);
    printf("Pontos turísticos: %d \n", turistico2);
    printf("PIB per Capita: R$%.2f reais\n", percap2);
    printf("Densidade demográfica: %.2f hab/km²\n", densidade2);
    printf("\n");
    

    // Exibição da comparação
    
    printf("Comparação dos resultados: \n");
    printf("\n");

    if (populacao1 > populacao2) {
        printf("A cidade %s tem a maior população.\n", cidade1);
        } else {
        printf("A cidade %s tem a maior população.\n", cidade2);
    }

    if (area1 > area2) {
        printf("A cidade %s tem a maior área.\n", cidade1);
        } else {
        printf("A cidade %s tem a maior área.\n", cidade2);
        }

    if (pib1 > pib2) {
        printf("A cidade %s tem o maior PIB.\n", cidade1);
        } else {
        printf("A cidade %s tem o maior PIB.\n", cidade2);
        }

    if (turistico1 > turistico2) {
        printf("A cidade %s tem mais pontos turísticos.\n", cidade1);
        } else {
        printf("A cidade %s tem mais pontos turísticos.\n", cidade2);
        }

    if (densidade1 < densidade2) {
        printf("A cidade %s tem a menor densidade demográfica.\n", cidade1);
        } else {
        printf("A cidade %s tem a menor densidade demográfica.\n", cidade2);
        }

    if (percap1 > percap2) {
        printf("A cidade %s tem maior PIB per capta.\n", cidade1);
        } else {
        printf("A cidade %s tem maior PIB per capta.\n", cidade2);
        }
    */
    printf("\n");

    return 0;
}
