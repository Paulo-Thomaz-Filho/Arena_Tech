# Arena Tech – Planejador de Maratona Gamer

## Integrantes do Grupo
* **Paulo** — RGM: 48360503
* **Felipe** — RGM: 47121106
* **Kauan** — RGM: 48215261

---

## Sobre a Solução
O programa foi desenvolvido em linguagem C para auxiliar na organização do evento Arena Tech, calculando custos e demandas operacionais com base em entradas fornecidas pelo usuário via teclado. Inicialmente, o sistema coleta dados estruturais do evento, como participantes, número de computadores, potência média, duração e custos unitários. Em seguida, processa os cálculos utilizando operadores aritméticos e conversões de tipos, empregando a função `ceil` da biblioteca `math.h` para arredondar corretamente a quantidade de times formados, mesmo com equipes incompletas. Por fim, exibe um relatório detalhado formatado com duas casas decimais, contemplando o consumo e os custos de energia, alimentação e despesas totais e médias por participante, cumprindo integralmente os requisitos acadêmicos propostos.

---

## Instruções de Compilação e Execução

Para compilar o programa no Linux ou no GitHub Codespaces (incluindo a biblioteca matemática `math.h`), utilize o seguinte comando no terminal:

```bash
gcc main.c -o projeto1_arena_tech -lm
