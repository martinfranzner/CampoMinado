/*CM.c*/

#include <stdio.h>
#include "CMMod.h"
#include <time.h>

void semente (void) {
        srand(time(NULL));
        rand();
}

int nivel(){
    int level;
    while(level >SIZE){
        printf("Digite o numero do seu nivel: de 1 a %d\n",SIZE);
        scanf("%d", &level);
        if(level >3){
            printf("Digite um numero entre 1 e %d\n",SIZE);
        }
    }
    return level;
}
void preenche (char mat[SIZE][SIZE]){
    int i,j;
    //char mat[SIZE][SIZE];
    for(i=0;i<SIZE;i++){ 
        for(j=0;j<SIZE;j++){ 
            mat[i][j]='X';
        }
    }
}
void matriz(char mat[SIZE][SIZE]){
    int i,j;
    
    for(i=0;i<SIZE;i++){ 
        for(j=0;j<SIZE;j++){ 
            printf("|%c|",mat[i][j]);
        }
        printf("\n");
    }
}
void bomba(char mat[SIZE][SIZE], int bombas, int level){
    bombas = 1;
    while (bombas <= level) {
        int bombaL = rand() % SIZE;
        int bombaC = rand() % SIZE;
        if (mat[bombaL][bombaC] != 'B') {
            mat[bombaL][bombaC] = 'B';
            bombas++;
        }
    }
}
void jogada(int linha, int coluna){
            printf("Digite sua posicao em uma LINHA!\nEscolha um numero entre 0 e 2.\n");
            scanf("%d",&linha);
            printf("Digite sua posicao em uma COLUNA!\nEscolha um numero entre 0 e 2.\n");
            scanf("%d",&coluna);
            //verifica se a linha e coluna digitadas estao na faixa de numeros certa
                while(linha > 2 || linha < 0){ 
                printf("Digite sua posicao em uma LINHA!\nEscolha um numero entre 0 e 2.\n");
                scanf("%d",&linha);           
            }
                while(coluna > 2 || coluna < 0){  
                printf("Digite sua posicao em uma COLUNA!\nEscolha um numero entre 0 e 2.\n");
                scanf("%d",&coluna);
            }
}
void checaBomba(int linha, int coluna, char mat[SIZE][SIZE]){
    if(mat[linha][coluna] == 'B'){
        printf("\nVOCE PERDEU!!\n");
        //perdeu = 1;
        break;
        } 
}
void checaPosicao(int linha, int coluna, char mat[SIZE][SIZE]){
    if(mat[linha][coluna] == 'X'){
        //certo = 1;       
        }
        else{
            printf("\nPosicao ja escolhida, jogue novamente\n");
        }
}

void marca (char mat[SIZE][SIZE], int linha, int coluna){
    mat[linha][coluna] = 'O';
}

void trocaBporX(char mat[SIZE][SIZE]){
    int i,j;
    for(i=0;i<SIZE;i++){ 
                for(j=0;j<SIZE;j++){ 
                    if(mat[i][j]== 'B'){
                        printf("|X|",mat[i][j]);
                    }
                    else{
                        printf("|%c|",mat[i][j]);
                    }
                }
                printf("\n");
            }
}
