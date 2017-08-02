/* 
 * File:   CMMod.h
 * Author: martinfranzner
 *
 * Created on October 18, 2016, 10:36 AM
 */

#ifndef CMMOD_H
#define	CMMOD_H
#define SIZE 3


    
semente();
int nivel(int level);
void preenche (char mat[SIZE][SIZE]);
void matriz(char mat[SIZE][SIZE]);
void bomba(char mat[SIZE][SIZE], int bombas, int level);
void jogada(int linha, int coluna);
void checaBomba(int linha, int coluna,char mat[SIZE][SIZE]);
void checaPosicao(int linha, int coluna,char mat[SIZE][SIZE]);
void marca (char mat[SIZE][SIZE], int linha, int coluna);
void trocaBporX(char mat[SIZE][SIZE]);

#endif	/* CMMOD_H */

