#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(NULL));
    int vetor[20];
    int invertido[20];
    int z;
    printf("vetor original:\n");
    for (int i = 0; i < 20; i++) {
        vetor[i] = rand() % 1000;
        if (i < 19) {
            printf("%d, ", vetor[i]);
        } else if (i == 19) {
            printf("%d\n", vetor[i]);
        }
    }
    system("PAUSE");
    printf("vetor depois da troca:\n");
    for (int i = 0; i < 20; i++) {
        z = 19 - i;
        invertido[z] = vetor[i];
    }
    for (int i = 0; i < 20; i++) {
        if (i < 19) {
            printf("%d, ", invertido[i]);  
        } else if (i == 19) {
            printf("%d\n", invertido[i]);
        }
    }
    system("PAUSE");
}
