#include <stdio.h>

int main(){
    int vetor[10] = {9,5,3,2,4,1,6,7,8,10};
    int aux;
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // Troca os elementos adjacentes se estiverem fora de ordem
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    for(int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }
    return 0;
}