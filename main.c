/* 
 * File:   main.c
 * Author: martinfranzner
 *
 * Created on October 18, 2016, 10:36 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include "CMMod.h"
#include <time.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int level;
    semente();
    level = nivel();
    preenche();
    
    return (EXIT_SUCCESS);
}

