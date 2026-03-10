#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int PopulaçãoA, PopulaçãoB;
    int Pontos_TurísticosA, Pontos_TurísticosB;
    float PIBA, PIBB;
    float ÁreaA, ÁreaB;
    char EstadoA, EstadoB;
    char CódigoA[5], CódigoB[5];
    char NomeA [20], NomeB [20];

    float Densidade_PopulacionalA, Densidade_PopulacionalB;
    float PIB_per_CapitaA, PIB_per_CapitaB;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //Cadastro da Primeira Carta
    printf("Para cadastrar a primeira carta, digite os valores solicitados a seguir!\n");

    printf("\nDigite uma letra (A a H) correspondente ao Estado: ");
    scanf("%c", &EstadoA);

    printf("\nDigite o código da carta (letra da carta, seguido de um número entre 01 e 04, exp: A01): ");
    scanf("%s", &CódigoA);

    printf("\nDigite o nome da cidade: ");
    scanf("%s", &NomeA);

    printf("\nDigite a população da cidade: ");
    scanf("%d", &PopulaçãoA);

    printf("\nDigite a área da cidade em km²: ");
    scanf("%f", &ÁreaA);

    printf("\nDigite o PIB da cidade: "); 
    scanf("%f", &PIBA);
    
    printf("\nDigite o número de pontos turísticos da cidade: ");
    scanf("%d", &Pontos_TurísticosA);

    printf("\nA primeira carta foi configurada com sucesso!\n");

    Densidade_PopulacionalA = (float) PopulaçãoA/ÁreaA;
    PIB_per_CapitaA = (float) PIBA/PopulaçãoA;

    //Cadastro da Segunda Carta
    printf("\nAgora vamos configurar a segunda carta, digite os valores solicitados a seguir!\n");

    printf("\nDigite uma letra (A a H) correspondente ao Estado: ");
    scanf("%c", &EstadoB);
    scanf("%c", &EstadoB);

    printf("\nDigite o código da carta (letra da carta, seguido de um número entre 01 e 04, exp: A01): ");
    scanf("%s", &CódigoB);

    printf("\nDigite o nome da cidade: ");
    scanf("%s", &NomeB);

    printf("\nDigite a população da cidade: ");
    scanf("%d", &PopulaçãoB);

    printf("\nDigite a área da cidade em km²: ");
    scanf("%f", &ÁreaB);

    printf("\nDigite o PIB da cidade: "); 
    scanf("%f", &PIBB);
    
    printf("\nDigite o número de pontos turísticos da cidade: ");
    scanf("%d", &Pontos_TurísticosB);

    printf("\nTudo pronto! Agora confira os valores das cartas!\n");

    Densidade_PopulacionalB = (float) PopulaçãoB/ÁreaB;
    PIB_per_CapitaB = (float) PIBB/PopulaçãoB;

    // Exibição dos Dados das Cartas:

    //Exibição da Primeira Carta
    printf("\nPRIMEIRA CARTA");

    printf("\nEstado: %c", EstadoA);
    printf("\nCódigo da Carta: %s", CódigoA);
    printf("\nNome da Cidade: %s", NomeA);
    printf("\nPopulação: %d", PopulaçãoA);
    printf("\nÁrea (em km²): %.2f", ÁreaA);
    printf("\nPIB: %.2f", PIBA);
    printf("\nNúmero de Pontos Turísticos: %d", Pontos_TurísticosA);
    printf("\nDensidade Populacional: %.2f", Densidade_PopulacionalA);
    printf("\nPIB per Capita: %.2f\n", PIB_per_CapitaA);

    //Exibição da Segunda Carta
    printf("\nSEGUNDA CARTA");

    printf("\nEstado: %c", EstadoB);
    printf("\nCódigo da Carta: %s", CódigoB);
    printf("\nNome da Cidade: %s", NomeB);
    printf("\nPopulação: %d", PopulaçãoB);
    printf("\nÁrea (em km²): %.2f", ÁreaB);
    printf("\nPIB: %.2f", PIBB);
    printf("\nNúmero de Pontos Turísticos: %d", Pontos_TurísticosB);
    printf("\nDensidade Populacional: %.2f", Densidade_PopulacionalB);
    printf("\nPIB per Capita: %.2f", PIB_per_CapitaB);
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}