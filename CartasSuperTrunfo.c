#include <stdio.h>

// Desafio Super Trunfo - Países
int main() {
    //Declaração dos atributos da carta 1
    char crt1_estado;
    char crt1_codCarta[20];
    char crt1_nomeCidade[50];
    int crt1_populacao;
    float crt1_area;
    float crt1_pib;
    int crt1_pntsTuristicos;

    //Declaração dos atributos da carta 2
    char crt2_estado;
    char crt2_codCarta[20];
    char crt2_nomeCidade[50];
    int crt2_populacao;
    float crt2_area;
    float crt2_pib;
    int crt2_pntsTuristicos;
    /*
    OBS: 
    -Eu utilizei o "fgets()" por que não teria como armazenar cidades com mais de uma palavra, exemplo: "Rio de Janeiro"
    -Utilizei "getchar()" para limpar o buffer do teclado e não ignorar o "fgets()"
    */
    //Cadastro da primeira carta
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Digite o estado:\n");
    scanf("%c",&crt1_estado);
    getchar(); 

    printf("Digite o código da carta:\n");
    fgets(crt1_codCarta,20,stdin);
    crt1_codCarta[strcspn(crt1_codCarta, "\n")] = '\0';
    
    printf("Digite o nome da cidade:\n");
    fgets(crt1_nomeCidade,50,stdin);
    crt1_nomeCidade[strcspn(crt1_nomeCidade, "\n")] = '\0';

    printf("Digite a população:\n");
    scanf("%d",&crt1_populacao);
    getchar(); 

    printf("Digite a área (em km²):\n");
    scanf("%f",&crt1_area);
    getchar();

    printf("Digite o pib (em bilhões de reais):\n");
    scanf("%f",&crt1_pib);
    getchar();

    printf("Digite o Número de Pontos Turísticos:\n");
    scanf("%d",&crt1_pntsTuristicos);
    getchar();
    
    //Cadastro da segunda carta
    printf("\n--- Cadastro da Carta 2 ---\n");

    printf("Digite o estado:\n");
    scanf("%c",&crt2_estado);
    getchar(); 

    printf("Digite o código da carta:\n");
    fgets(crt2_codCarta,20,stdin);
    crt2_codCarta[strcspn(crt2_codCarta, "\n")] = '\0';
    
    printf("Digite o nome da cidade:\n");
    fgets(crt2_nomeCidade,50,stdin);
    crt2_nomeCidade[strcspn(crt2_nomeCidade, "\n")] = '\0';

    printf("Digite a população:\n");
    scanf("%d",&crt2_populacao);
    getchar(); 

    printf("Digite a área (em km²):\n");
    scanf("%f",&crt2_area);
    getchar();

    printf("Digite o pib (em bilhões de reais):\n");
    scanf("%f",&crt2_pib);
    getchar();

    printf("Digite o Número de Pontos Turísticos:\n");
    scanf("%d",&crt2_pntsTuristicos);
    getchar(); 

    //Exibição de cartas
    printf("\n===== Cartas Cadastradas =====\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", crt1_estado);
    printf("Código da carta: %s\n", crt1_codCarta);
    printf("Nome da cidade: %s\n", crt1_nomeCidade);
    printf("População: %d\n", crt1_populacao);
    printf("Área: %.2f\n", crt1_area);
    printf("PIB: %.2f\n", crt1_pib);
    printf("Número de Pontos Turísticos: %d\n", crt1_pntsTuristicos);
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", crt2_estado);
    printf("Código da carta: %s\n", crt2_codCarta);
    printf("Nome da cidade: %s\n", crt2_nomeCidade);
    printf("População: %d\n", crt2_populacao);
    printf("Área: %.2f\n", crt2_area);
    printf("PIB: %.2f\n", crt2_pib);
    printf("Número de Pontos Turísticos: %d\n", crt2_pntsTuristicos);
    return 0;
    return 0;
}
