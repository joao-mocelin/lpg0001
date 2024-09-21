#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int array[], int tam){
    int aux;
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Troca os elementos adjacentes se estiverem fora de ordem
                aux = array[j];
                array[j] = array[j + 1];
                array[j + 1] = aux;
            }
        }
    }
}

void randVector(int array[], int tam){
    srand(time(0));
    for(int i = 0; i < tam; i++){
        array[i] = rand() % 100;
    }
}

void printArray(int array[], int tam){
    for (int i = 0; i < tam; i++)
    {
        printf("\n array[%d] = %d", i, array[i]);
    }
}

int binarySearch(int key, int array[], int tam){
    int ini = 0, fim = tam-1, meio;
    do{
        meio = ( ini + fim ) / 2;
        if(array[meio] == key){
            return meio; // Encontrado em meio!
        }
        if(array[meio] < key){
            ini = meio + 1;
        }
        else{
            fim = meio - 1;
        }
    }while(ini <= fim);
    return -1; // Não encontrado!
}

int main(){
    int N = 10000;
    int array[N];
    randVector(array, N);
    bubbleSort(array, N);
    printArray(array, N);
    int index = binarySearch(5, array, N);
    if(index == -1){
        printf("\n key not found.");
    }
    else{
        printf("\n key found at index [%d].", index);
    }
    
    


    return 0;
}