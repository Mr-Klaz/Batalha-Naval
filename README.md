# Batalha Naval em C

Este projeto implementa uma simulação do clássico jogo de **Batalha Naval** utilizando a linguagem **C**, com foco em vetores, matrizes e manipulação de estruturas com loops e condicionais.

## 🎯 Objetivo

Aplicar conceitos fundamentais da programação em C:
- Manipulação de arrays unidimensionais (vetores)
- Manipulação de arrays bidimensionais (matrizes)
- Uso de loops aninhados
- Uso de condicionais
- Lógica para áreas de efeito no estilo RPG

---

## 🧱 Estrutura do Tabuleiro

- O tabuleiro é representado por uma matriz 10x10.
- Códigos usados no tabuleiro:
  - `0` = água
  - `3` = parte de navio
  - `5` = área afetada por habilidade especial

---

## 🚢 Navios

São posicionados 4 navios fixos:
- 2 navios com orientação vertical/horizontal
- 2 navios com orientação diagonal

Cada navio ocupa 3 casas.

---

## ✨ Habilidades Especiais

Três habilidades com áreas de efeito são aplicadas ao tabuleiro:

| Habilidade | Formato            | Posição |
|------------|--------------------|---------|
| Cone       | Triangular          | (2, 2)  |
| Cruz       | Cruz no centro      | (5, 5)  |
| Octaedro   | Formato de losango  | (7, 7)  |

Cada habilidade é representada por uma matriz 5x5 com `1` para casas afetadas e `0` para não afetadas.

---

## 📦 Como executar

1. Compile o arquivo com um compilador C:
    ```bash
    gcc batalha_naval_completo.c -o batalha_naval
    ```

2. Execute o programa:
    ```bash
    ./batalha_naval
    ```

3. Observe a exibição do tabuleiro com navios e áreas de habilidade no terminal.

---

## 📁 Arquivo principal

- `batalha_naval_completo.c`: contém toda a lógica do jogo e as habilidades integradas.

---

## ✅ Exemplo de saída (parcial)

