// RGM: 
// 48360503 - Paulo;
// 47121106 - Felipe
// 48215261 - Kauan;

#include <stdio.h>
#include <math.h> 

int main() {
    // Declaração de variáveis para os dados de entrada
    int total_participantes, jogadores_por_time, qtd_computadores;
    float potencia_media_pc, duracao_evento, preco_kwh, preco_kit_alimentacao, outros_custos;

    // Declaração de variáveis para os resultados dos cálculos
    int qtd_times;
    float consumo_energia_kwh, custo_energia, custo_alimentacao, custo_total, custo_medio_participante;

    // --- entrada dos dados ---
    printf("========================================\n");
    printf("    ARENA TECH – PLANEJADOR DE MARATONA  \n");
    printf("========================================\n");
    
    printf("Digite a quantidade total de participantes: ");
    scanf("%d", &total_participantes);

    printf("Digite a quantidade de jogadores por time: ");
    scanf("%d", &jogadores_por_time);

    printf("Digite a quantidade de computadores: ");
    scanf("%d", &qtd_computadores);

    printf("Digite a potência média de cada computador (em Watts): ");
    scanf("%f", &potencia_media_pc);

    printf("Digite a duração do evento (em horas): ");
    scanf("%f", &duracao_evento);

    printf("Digite o preço do kWh de energia (R$): ");
    scanf("%f", &preco_kwh);

    printf("Digite o preço do kit de alimentação (R$): ");
    scanf("%f", &preco_kit_alimentacao);

    printf("Digite outros custos do evento (R$): ");
    scanf("%f", &outros_custos);

    // --- cálculos ---
    
    qtd_times = (int) ceil((float) total_participantes / jogadores_por_time);

    consumo_energia_kwh = (qtd_computadores * potencia_media_pc * duracao_evento) / 1000.0;

    custo_energia = consumo_energia_kwh * preco_kwh;

    custo_alimentacao = total_participantes * preco_kit_alimentacao;

    custo_total = custo_energia + custo_alimentacao + outros_custos;

    custo_medio_participante = custo_total / total_participantes;

    // --- saída de dados —

    printf("\n========================================\n");
    printf("         RELATÓRIO DA ARENA TECH        \n");
    printf("========================================\n");
    printf("Quantidade necessária de times: %d\n", qtd_times);
    printf("Consumo estimado de energia:    %.2f kWh\n", consumo_energia_kwh);
    printf("Custo da energia:               R$ %.2f\n", custo_energia);
    printf("Custo da alimentação:           R$ %.2f\n", custo_alimentacao);
    printf("Custo total do evento:          R$ %.2f\n", custo_total);
    printf("Custo médio por participante:   R$ %.2f\n", custo_medio_participante);
    printf("========================================\n");

    return 0;
}


