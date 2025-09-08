#include <stdio.h>
#include <stdlib.h>
#include <time.h>
float matriz[50][5];

    
void cadastro (int aluno) {
    int matricula;
    float nota1;
    float nota2;
    float nota3;
    if (aluno + 1 == 50) {
        printf("numero maximo de alunos ja cadastrado\n");
        return;
    } else {
     do {printf("insira o numero da matricula de 5 digitos do estudante %d:\n", aluno + 1);
    scanf("%d", &matricula);
    } while (matricula < 10000 || matricula > 99999);
    matriz[aluno][0] = matricula; 
    do {
        printf("insira a primeira nota do estudante %d (0 a 10):\n", aluno + 1);
        scanf("%f", &nota1);
    } while (nota1 < 0.0 || nota1 > 10.0);
    matriz[aluno][1] = nota1;
     do {
        printf("insira a segunda nota do estudante %d (0 a 10):\n", aluno + 1);
        scanf("%f", &nota2);
     } while (nota2 < 0.0 || nota2 > 10.0);
    matriz[aluno][2] = nota2;
    do {printf("insira a terceira nota do estudante %d (0 a 10):\n", aluno + 1);
    scanf("%f", &nota3);
    } while (nota3 < 0.0 || nota3 > 10.0);
    matriz[aluno][3] = nota3;
    float soma = nota1 + nota2 + nota3;
    float media = soma / 3.0;
    printf("nota 1: %2.f\n", nota1);
    printf("nota 2: %2.f\n", nota2);
    printf("nota 3: %2.f\n", nota3);
    printf("media do aluno %d: %2.f\n", aluno + 1, media);
    matriz[aluno][4] = media;
    }
}
int leitura () {
    
    for (int i = 0; i < 50; i++) {
        printf("Media do aluno %d: %2.f\n", i + 1, matriz[i][4]);
        
        //printf("Aluno %d: nota 1: %f nota 2: %f nota 3: %f media: %f\n", i + 1, matriz[i][y], matriz[i][y + 1], matriz[i][y + 2], matriz[i][y + 3]);
    }
    int aprovados = 0;
    int reprovados = 0;
    int recuperacao = 0;
    for (int i = 0; i < 50; i++) {
       if (matriz[i][4] >= 7.0) {
                aprovados++;
        } else if (matriz[i][4] < 7.0 && matriz[i][4] >= 4.0) {
                recuperacao++;
        } else {
                reprovados++;
            
            
        }
    }
    printf("\nAlunos aprovados: %d\n", aprovados);
    printf("Alunos de prova final: %d\n", recuperacao);
    printf("Alunos reprovados: %d\n", reprovados);
}
int main () {
    for (int i = 0; i < 50; i++) {
        for (int y = 0; y < 5; y++) {
            matriz[i][y] = 0.0;
        }
    }

    int estudante = 0;
    int escolha;
    do {
        printf("escolha uma opcao:\n");
        printf("1 - cadastrar um estudante\n");
        printf("2 - mostrar os dados ja cadastrados\n");
        printf("3 - sair do programa\n");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
            cadastro(estudante);
            estudante++;
            break;
            case 2:
            leitura();
            break;
            case 3: 
            break;
            default:
            printf("escolha invalida. Tente novamente:\n");
        }
    } while (escolha != 3);
}