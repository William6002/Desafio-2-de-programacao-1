#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void bigger(int array1[]) {
    int maior = 0;
    for (int i = 0; i < 100; i++)
    {
        if (array1[i] > maior) {
            maior = array1[i];
            }
        }
        printf("O maior numero eh: %d \n", maior);

}
void smaller(int array2[]) {
    int menor = array2[0];
    for (int i = 1; i < 100; i++) {
        if (array2[i] < menor) {
            menor = array2[i];
        }
    }
    printf("O menor numero eh: %d \n", menor);
}
void summedia(int array3[]) {
    int soma = 0;
    for (int i = 0; i < 100; i++)
    {
        soma = soma + array3[i];
        }
        printf("A soma eh: %d \n", soma);
        float media = soma / 100.0;
        printf("A media eh: %.2f \n", media);
}
void percentual(int array4[]) {
    int pares = 0;
    int impares = 0;
    for (int i = 0; i < 100; i++)
    {
        if (array4[i] % 2 == 0) {
            pares++;
        } else
        {
            impares++;
        }
        
        }
        printf("O percentual de numeros pares eh: %d%% \n", pares);
        printf("O percentual de numeros impares eh: %d%% \n", impares);

}
int main() {
    int array[100];
    srand(time(NULL));
    for (int i = 0; i < 100; i++) {
        array[i] = rand() % 1000;
        if (i < 99) {
        printf("%d, ", array[i]);
        } else {            
        printf("%d", array[i]);}
    }
    printf("\n");
    bigger(array);
    smaller(array);
    summedia(array);
    percentual(array);
    system("PAUSE");
    }
    
