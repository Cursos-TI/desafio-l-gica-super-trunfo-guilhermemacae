#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

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
    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPib;
    int resultadoTuristico;
    int resultadoDesidade;
    int resultadoPercap;

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

    // Calculando a densidade da segunda cidade
    populacao2 *= 1000000;
    densidade2 = (float) populacao2 / area2;                           
        
    // Calculando o percapta da segunda cidade
    pib2 *= 1000000000;
    percap2 = (float) pib2 / populacao2;
    printf("\n");

    // Calculo para comparação

    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoTuristico = turistico1 > turistico2;
    resultadoDesidade = densidade1 > densidade2; // a carta com menor valor vence
    resultadoPercap = percap1 > percap2;

    // Exibição da comparação
    
    printf("Comparação dos resultados: \n");
    printf("\n");

    if (populacao1 > populacao2) {
    printf("Cidade 1 tem maior população.\n");
    } else {
    printf("Cidade 2 tem maior população.\n");
    }



   
   
   
   
   
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    printf("\n");

    return 0;
}
