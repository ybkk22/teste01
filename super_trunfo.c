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
    printf("Nome do estado (A): ");
    scanf("%s", SaoPaulo);
    printf("Código da carta (A): ");
    scanf("%s", A01);
    printf("População: ");
    scanf("%d", &Populacaosaopaulo);
    printf("Área: ");
    scanf("%f", &areaSaoPaulo);
    printf("PIB: ");
    scanf("%f", &pibSaoPaulo);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicossaopaulo);

    // Informações da carta do Rio de Janeiro
    printf("Nome do estado (B): ");
    scanf("%s", RiodeJaneiro);
    printf("Código da carta (B): ");
    scanf("%s", B02);
    printf("População: ");
    scanf("%d", &Populacaoriodojaneiro);
    printf("Área: ");
    scanf("%f", &areaRioDeJaneiro);
    printf("PIB: ");
    scanf("%f", &pibRioDeJaneiro);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicosriodejaneiro);

    // Cálculos
    float densidadepopulacionalSaoPaulo = Populacaosaopaulo / areaSaoPaulo;
    float densidadepopulacionalRioDeJaneiro = Populacaoriodojaneiro / areaRioDeJaneiro;

    // PIB per capita corrigido (convertendo de bilhões para reais)
    float pibpercapitaSaoPaulo = (pibSaoPaulo * 1000000000) / Populacaosaopaulo;
    float pibpercapitaRioDeJaneiro = (pibRioDeJaneiro * 1000000000) / Populacaoriodojaneiro;
    
    // Exibição das cartas
    printf("\n--- INFORMAÇÕES DAS CARTAS ---\n");
    printf("Carta 1: %s - %s\n", A01, SaoPaulo);
    printf("População: %d\n", Populacaosaopaulo);
    printf("Área: %.2f km²\n", areaSaoPaulo);
    printf("PIB: R$%.2f bilhões\n", pibSaoPaulo);
    printf("Pontos turísticos: %d\n", pontosTuristicossaopaulo);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacionalSaoPaulo);
    printf("PIB per capita: R$%.2f reais\n\n", pibpercapitaSaoPaulo);

    printf("Carta 2: %s - %s\n", B02, RiodeJaneiro);
    printf("População: %d\n", Populacaoriodojaneiro);
    printf("Área: %.2f km²\n", areaRioDeJaneiro);
    printf("PIB: R$%.2f bilhões\n", pibRioDeJaneiro);
    printf("Pontos turísticos: %d\n", pontosTuristicosriodejaneiro);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacionalRioDeJaneiro);
    printf("PIB per capita: R$%.2f reais\n\n", pibpercapitaRioDeJaneiro);
    printf("\n--- FIM DAS INFORMAÇÕES ---\n");
    
    return 0;
}
