# Exercício: Calculadora de IMC em C

Este é um programa simples em linguagem C que calcula o Índice de Massa Corporal (IMC) com base no peso e altura informados pelo usuário.

---

## Sobre o exercício

Este código foi praticado durante a disciplina da faculdade de **Sistemas da Informação**, com o objetivo de fixar conceitos fundamentais da linguagem C, como:

- Entrada e saída de dados (`scanf` e `printf`)
- Manipulação de variáveis do tipo `float`
- Operadores aritméticos
- Estruturas condicionais (`if`, `else if` e `else`)
- Validação básica de entrada

---

## Como funciona

1. O programa solicita ao usuário o peso (em kg) e a altura (em metros).  
2. Calcula o IMC usando a fórmula:  
   \[
   \text{IMC} = \frac{\text{peso}}{\text{altura}^2}
   \]
3. Mostra o valor do IMC com duas casas decimais.  
4. Exibe a classificação do IMC, conforme as faixas padrões:

| IMC          | Classificação      |
|--------------|-------------------|
| < 18,5       | Abaixo do peso    |
| 18,5 – 24,9  | Peso normal       |
| 25 – 29,9    | Sobrepeso         |
| ≥ 30         | Obesidade         |

---

## Como compilar e executar

Para compilar, use um compilador C como o GCC:

```bash
gcc calculadora_imc.c -o calculadora_imc
