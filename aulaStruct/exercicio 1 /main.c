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
    float auxiliarSoma = 0, pesos[3] = {2.5, 3.5, 4};

    for(int i = 0; i < 3; i++){
        auxiliarSoma += aluno->notas[i]*pesos[i];
    }
    aluno->mediaAnual = auxiliarSoma/10;
    if(auxiliarSoma >= 9){
        aluno->conceito = 'A';
    } else if(auxiliarSoma < 9 && auxiliarSoma >= 7.5){
        aluno->conceito = 'B';
    }else if(auxiliarSoma < 7.5 && auxiliarSoma >= 6){
        aluno->conceito = 'C';
    }else if(auxiliarSoma < 6){
        aluno->conceito = 'R';
    }
    printf("Sua nota foi %.2f\nSeu conceito foi %c", aluno->mediaAnual, aluno->conceito);
}

int main(){

    statsAluno aluno;
    populaStruct(&aluno);
    calculaStruct(&aluno);
}
    
    