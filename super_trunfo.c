#include <stdio.h>

int main() { 
    // Definindo variáveis para armazenar informações das cartas
    char SaoPaulo[50], RiodeJaneiro[50];
    char A01[10], B02[10];

    int Populacaosaopaulo;
    int Populacaoriodojaneiro;
    int pontosTuristicossaopaulo;
    int pontosTuristicosriodejaneiro;

    float areaSaoPaulo;
    float areaRioDeJaneiro;
    float pibSaoPaulo;
    float pibRioDeJaneiro;

    // Informações da carta de São Paulo
    printf("Nome do estado (São Paulo): ");
    scanf("%s", SaoPaulo);
    printf("Código da carta (São Paulo): ");
    scanf("%s", A01);
    printf("População de São Paulo: ");
    scanf("%d", &Populacaosaopaulo);
    printf("Área de São Paulo: ");
    scanf("%f", &areaSaoPaulo);
    printf("PIB de São Paulo: ");
    scanf("%f", &pibSaoPaulo);
    printf("Pontos turísticos de São Paulo: ");
    scanf("%d", &pontosTuristicossaopaulo);
    
    
    // Informações da carta do Rio de Janeiro
    printf("Nome do estado (Rio de Janeiro): ");
    scanf("%s", RiodeJaneiro);
    printf("Código da carta (Rio de Janeiro): ");
    scanf("%s", B02);
    printf("População do Rio de Janeiro: ");
    scanf("%d", &Populacaoriodojaneiro);
    printf("Pontos turísticos do Rio de Janeiro: ");
    scanf("%d", &pontosTuristicosriodejaneiro);
    printf("Área do Rio de Janeiro: ");
    scanf("%f", &areaRioDeJaneiro);
    printf("PIB do Rio de Janeiro: ");
    scanf("%f", &pibRioDeJaneiro);

    // Exibindo informações da carta de São Paulo
    printf("\n--- INFORMAÇÕES DAS CARTAS ---\n");
    printf("Carta %s - %s\n", A01, SaoPaulo);
    printf("População: %d\n", Populacaosaopaulo);
    printf("Área: %.2f km²\n", areaSaoPaulo);
    printf("PIB: R$%.2f bilhões\n", pibSaoPaulo);
    printf("Pontos turísticos: %d\n\n", pontosTuristicossaopaulo);

    
    // Exibindo informações da carta do Rio de Janeiro   
    printf("Carta %s - %s\n", B02, RiodeJaneiro);
    printf("População: %d\n", Populacaoriodojaneiro);
    printf("Área: %.2f km²\n", areaRioDeJaneiro);
    printf("PIB: R$%.2f bilhões\n", pibRioDeJaneiro);
    printf("Pontos turísticos: %d\n", pontosTuristicosriodejaneiro);
    

    return 0;
}
