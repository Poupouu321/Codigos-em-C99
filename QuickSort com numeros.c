/*
    TAREFAS DO BEECROWD
  A Biblioteca do Senhor Severino
  */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void ordenador(char vet[][5], int n){
    bool trocou;
    
    do{
        trocou = false;
        int end=n-1;
        for(int i=0; i<end; i++){
            if (strcmp(vet[i], vet[i+1]) > 0) {
                char aux[5];
                strcpy(aux, vet[i]);
                strcpy(vet[i], vet[i+1]);
                strcpy(vet[i+1], aux);
                trocou = true;
            }
        }
        end--;
    }while(trocou);
};



int main(){
    int Quantidade;
    
    while(scanf("%d", &Quantidade) != EOF){
        char Numero[Quantidade][5];

        for (int i = 0; i < Quantidade; i++){
            scanf("%s", Numero[i]);
        
        }
        ordenador(Numero, Quantidade);

        for (int i = 0; i < Quantidade; i++){
            printf("%s\n", Numero[i]);
        }
        
    };
};
