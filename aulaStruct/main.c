#include <stdio.h>
#include <stdlib.h>

typedef struct statsAluno{
    int matricula;
    char nome[50];
    float notas[3];
    float mediaAnual;
    char conceito;
}statsAluno;

void populaStruct(statsAluno *aluno){
    printf("Bem Vindo ao seu Caderno de Chamada Eletronico!\n");
    printf("Insira o Nome do Aluno: ");
    fflush(stdin);
    gets(aluno->nome);
    printf("Insira a Matricula do Aluno: ");
    fflush(stdin);
    scanf("%u", &aluno->matricula);
    for(int i = 0; i < 3; i++){
        printf("Insira a %u nota: ", i + 1);
        scanf("%f", &aluno->notas[i]);
    }
}
void calculaStruct(statsAluno *aluno){
    int auxiliarSoma = 0;
    float pesos[3] = {2.5, 3.5, 4};

    for(int i = 0; i < 3; i++){
        auxiliarSoma += aluno->notas[i]*pesos[i];
    }
}

int main(){

    statsAluno aluno;
    populaStruct(&aluno);
    calculaStruct(&aluno);
}
    
    