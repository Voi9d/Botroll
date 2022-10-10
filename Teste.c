#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define LADOS 10

int main(){
    int quantidade;
    int *vet;
    int dificuldade;

    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));  // faz o seed

    printf("Quantos dados serão rolados? ");
    scanf("%d", &quantidade);

    vet = (int*)malloc(sizeof(int) * quantidade);

    printf("Qual será a dificuldade?\n");
    scanf("%d", &dificuldade);
    // amostra os dados
    int x = 0;
    for(int i = 0; i < quantidade; i++){
        int temp = rand() %LADOS+1;  // amostra um dado
        if(temp > 1){
            vet[x] = temp;
            x = x + 1;
        }
    }
    // imprime na tela os dados
    for(int i = 0; i < x; i++) {
        printf("[%02d]", vet[i]);
    }

    return 0;
}
