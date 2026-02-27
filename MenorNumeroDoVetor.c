
#include <stdio.h>

int main(){
    int n;
    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &n);
    int x[n];

    printf("Digitar os numeros do vetor: \n");
    for (int i=0; i<n; i++){
        scanf("%d", &x[i]);
        }
    int menor = x[0];
    int posicao = 0;

    for (int i=0; i<n; i++){
        if (menor > x[i]){
            menor = x[i];
            posicao = i;
        }
        
    }
    

    printf("\nSeus Resultados sao: \n");
    printf("Menor valor: %i\n", menor);
    printf("Posicao: %i\n", posicao);
    


}

