# 🎮 Arena Tech – Planejador de Maratona Gamer

Projeto desenvolvido como parte da disciplina de **Algoritmos e Pensamento Computacional**, com o objetivo de criar um programa em linguagem C para auxiliar na organização e no planejamento financeiro e operacional de uma maratona gamer no campus.

---

## 👥 Integrantes do Grupo

| Nome | RGM |
| :--- | :--- |
| **Paulo** | 48360503 |
| **Felipe** | 47121106 |
| **Kauan** | 48215261 |

---

## 💡 Sobre a Solução

O programa foi estruturado em linguagem C para automatizar o planejamento da Arena Tech a partir de dados fornecidos diretamente pelo teclado. A solução opera em três etapas principais:

1. **Entrada de Dados:** Coleta informações essenciais do evento, como número de participantes, capacidade dos times, quantidade e potência dos computadores, duração da maratona, tarifas de energia, custos de alimentação e despesas operacionais gerais.
2. **Processamento e Cálculos:** Utiliza operadores aritméticos fundamentais e conversão de tipos (*type casting*). A biblioteca matemática `<math.h>` e a função `ceil()` são aplicadas para garantir o arredondamento correto para cima da quantidade de times (assegurando que equipes incompletas sejam contabilizadas). O programa também converte a potência de Watts para Quilowatts-hora (kWh) multiplicada pela duração do evento.
3. **Relatório Final:** Apresenta um resumo estruturado na tela contendo o quantitativo de equipes, o consumo energético estimado, os custos segregados (energia e alimentação), o custo total e o custo médio por participante, todos formatados com precisão de duas casas decimais.

---

## ⚙️ Instruções de Compilação e Execução

No ambiente Linux ou GitHub Codespaces, programas que utilizam a biblioteca `math.h` exigem a flag `-lm` durante a compilação.

### 1. Compilar o código:
```bash
gcc main.c -o projeto1_arena_tech -lm
