#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20

int main(){

    int i;
    double vt[N];

    for (int i = 0; i < N; i++){

        vt[i] = rand() % 100 + 1;
        printf("\n%.2f", vt[i]);
    
    }

    return 0;
}