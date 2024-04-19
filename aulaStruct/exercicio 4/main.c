#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define CAPACIDADE 10

typedef struct informacoesPessoas{
    int idade;
    char sexo;
    char corOlhos;
    char corCabelo;
}infoPessoa;

int pegarInfo(infoPessoa *lista, int tam){

    if(tam > CAPACIDADE){
        return -1;
    }
    printf("\nInsira a idade: ");
    scanf("%i", &lista[tam].idade);
    printf("\nInsira o sexo (M/F): ");
    scanf(" %c", &lista[tam].sexo);
    printf("\nInsira a cor dos olhos: ");
    scanf(" %c", &lista[tam].corOlhos);
    printf("\nInsira a cor do cabelo: ");
    scanf(" %c", &lista[tam].corCabelo);
    return 1;
}

int main(){

    infoPessoa infoPessoa[10];
    bool sairMenu = true;
    int selecaoMenu, tam = 0, ret;

    do{
        printf("Bem Vindo ao Censo Demografico!\n");
        printf("Menu de Opcoes:\n");
        printf("1 - Realizar pesquisa\n");
        printf("2 - Exibir Relatorio\n");
        printf("3 - Sair\n");
        printf("Insira sua opcao: ");
        scanf("%i", &selecaoMenu);

        while(selecaoMenu != 1 && selecaoMenu != 2 && selecaoMenu != 3){
            printf("Selecao invalida! Insira uma nova opcao: ");
            scanf("%i", &selecaoMenu);
        }

        switch (selecaoMenu){
        case 1:
            ret = pegarInfo(infoPessoa, tam);
            if(ret == 1){
                tam++;
                printf("Deu bom\n");
            }else{
                printf("Erro\n");
            }
            break;
        
        default:
            break;
        }

    }while(sairMenu == true);
    
}