#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main () {
    int Notas01[50];
    int Notas02[50];
    int Notas03[50];
    float Medias[50];
    int situacao[50];
    int contador = 0;
   
    srand(time(NULL)); // Inicializa o gerador de números aleatórios
    printf("Notas 1: \n"); // Gera e imprime as notas aleatórias
    for (int i = 0; i < 50; i++) {
        Notas01[i] = rand() % 11;
        if (i < 49) {
        printf("%d, ", Notas01[i]);
        } else {            
        printf("%d\n", Notas01[i]);}
    }
    printf("Notas 2: \n");
    for (int i = 0; i < 50; i++) {
        Notas02[i] = rand() % 11;
        if (i < 49) {
        printf("%d, ", Notas02[i]);
        } else {            
        printf("%d\n", Notas02[i]);}
    }
    printf("Notas 3: \n");
    for (int i = 0; i < 50; i++) {
        Notas03[i] = rand() % 11;
        if (i < 49) {
        printf("%d, ", Notas03[i]);
        } else {            
        printf("%d\n", Notas03[i]);}
    }
    for (int i = 0; i < 50; i++) { // Calcula as médias
        contador = Notas01[i] + Notas02[i] + Notas03[i];
        Medias[i] = contador / 3;
        contador = 0;
    }
    for (int i = 0; i < 50; i++) { // Define a situação com base na média
        if (Medias[i] >= 7) {
            situacao[i] = 2;
        } else if (Medias[i] >= 4 && Medias[i] < 7) {
            situacao[i] = 1;
        } else {
            situacao[i] = 0;
    }
    }
    char *status[] = {"Reprovado", "Recuperacao", "Aprovado"};
    for (int i = 0; i < 50; i++) { // Imprime os resultados
        
        if (i < 49) {
        printf("Aluno %d: Nota 1: %d, Nota 2: %d, Nota 3: %d, Media: %.2f, Situacao: %s\n", i+1, Notas01[i], Notas02[i], Notas03[i], Medias[i], status[situacao[i]]);}
        else if (situacao[i] == 1) {
        } else {            
        printf("Aluno %d: Nota 1: %d, Nota 2: %d, Nota 3: %d, Media: %.2f, Situacao: %s\n", i+1, Notas01[i], Notas02[i], Notas03[i], Medias[i], status[situacao[i]]);}
    }
    system("PAUSE");
}


