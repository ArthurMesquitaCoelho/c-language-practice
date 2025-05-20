#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 100

typedef struct {
    char nome[50];
    int idade;
    float nota;
} Aluno;

int main() {
    Aluno alunos[MAX_ALUNOS];
    int quantidade = 0;
    char opcao;

    do {
        printf("📘 Cadastro de Aluno\n");
        printf("Nome: ");
        scanf(" %[^\n]", alunos[quantidade].nome);
        printf("Idade: ");
        scanf("%d", &alunos[quantidade].idade);
        printf("Nota: ");
        scanf("%f", &alunos[quantidade].nota);
        quantidade++;

        printf("Deseja cadastrar outro aluno? (s/n): ");
        scanf(" %c", &opcao);

    } while ((opcao == 's' || opcao == 'S') && quantidade < MAX_ALUNOS);

    printf("\n📋 Lista de Alunos Cadastrados:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("Aluno %d: %s, %d anos, Nota: %.2f\n", i+1, alunos[i].nome, alunos[i].idade, alunos[i].nota);
    }

    return 0;
}
