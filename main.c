#include <stdlib.h>
#include <stdio.h>
//funcao questao 2
/*
void troca(int *p1, int *p2){
    int aux;
    aux = *p1;
    *p1 = *p2;
    *p2 = aux;
    printf("Numeros Invertidos\n");
    printf("p1 = %i\np2 = %i\n", *p1, *p2);
}*/
/*
int ordena (int *n1, int *n2, int *n3, char ordem){
    int valores[3] = {*n1, *n2, *n3};
    int troca;

    if(ordem == 'c' || ordem == 'C'){
        for (int a = 0; a < 3; a++) {
			if (valores[a] < valores[a - 1]) {
				troca = valores[a];
				valores[a] = valores[a - 1];
				valores[a - 1] = troca;
				a = -1;
			}
		}
    }
    else if(ordem == 'd' || ordem == 'D'){
        for (int b = 1; b < 3; b++) { 
			for (int c = b; c > 0 && valores[c] > valores[c - 1]; c--) {
				troca = valores[c];
				valores[c] = valores[c - 1];
				valores[c - 1] = troca;
			}
		}
    }

    *n1 = valores[0];
    *n2 = valores[1];
    *n3 = valores[2];
    return 0;
}
*/

int main(){
    //questao 2
    /*
    int p1, p2;

    printf("Insira 2 numeros (p1, p2)\n");
    printf("Insira o numero p1: ");
    scanf("%i", &p1);
    printf("Insira o numero p2: ");
    scanf("%i", &p2);
    troca(&p1, &p2);
    */
    //questao 3
    /*
    int num[3];
    char letter;

    for(int i = 0; i < 3; i++){
        printf("Insira o %i numero: ", i + 1);
        scanf("%i", &num[i]);
    }
    printf("Insira se o ordenamento sera crescente ou decrescente (C ou D): ");
    scanf("%c", &letter);
    while(letter != 'D' && letter != 'd' && letter != 'C' && letter != 'c'){
        printf("Letra invalida, insira novamente: ");
        scanf("%c", &letter);
    }
    ordena(&num[0], &num[1], &num[2], letter);
    printf("valores ordenados: \n1. %i\n2. %i\n3. %i", num[0], num[1], num[2]);
    */
   //questao 4

}
