#include <stdio.h>
#include <stdlib.h>
#include <time.h>
float summedia(int array[]) { // Função para calcular a média dos números no array
    int soma = 0;
    for (int i = 0; i < 100; i++)
    {
        soma = soma + array[i];
        }
        float media = soma / 100.0;
        return media;
}
int number_greater(int array[], float media) { // Função para contar números maiores que a média
    
    int contador = 0;
    for (int i = 0; i < 100; i++) {
        if (array[i] > media) {
            contador++;
            
        }
    
    }
    return contador;
}
int number_smaller(int array[], float media) { // Função para contar números menores que a média
    int contador = 0;
    for (int i = 0; i < 100; i++) {
        if (array[i] < media) {
            contador++;
            
        }
    }
    return contador;
}
int number_equal(int array[], float media) { // Função para contar números iguais a média
    int contador = 0;
    for (int i = 0; i < 100; i++) {
        if (array[i] == media) {
            contador++;
            
        }
    }
    return contador;
}

int main() {
    int array[100]; 
    srand(time(NULL)); // Inicializa o gerador de números aleatórios
    for (int i = 0; i < 100; i++) { // Preenche o array com números aleatórios entre 0 e 999
        array[i] = rand() % 1000;
        if (i < 99) {
        printf("%d, ", array[i]);
        } else {            
        printf("%d", array[i]);}
    }
    float media = summedia(array);
    int maiorm = number_greater(array, media);
    int menorm = number_smaller(array, media);
    int igualm = number_equal(array, media);
    printf("\nMedia: %.2f\n", media);
    printf("Numeros maiores que a media: %d\n", maiorm);
    printf("Numeros menores que a media: %d\n", menorm);
    printf("Numeros iguais a media: %d\n", igualm);
    system("PAUSE");

}