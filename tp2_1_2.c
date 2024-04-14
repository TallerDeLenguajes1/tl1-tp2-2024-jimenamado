#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main (){

    double vt[N], *punt;
    punt = vt;
    
    for (int i = 0; i < N; i++)
    {
        *punt = rand()% 100 + 1;
        printf("\n %.2f", *punt);
    
        punt++;
    }
    
    return 0;
}