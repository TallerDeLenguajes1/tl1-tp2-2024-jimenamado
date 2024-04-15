#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4
#define M 4

int main()
{
    ///* FORMA 2 ARITMETICA PUNTERO
    
    int matriz[N][M], *puntero;

    puntero = &matriz[0][0]; //asignacion al primer elemento de la matriz

    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            *(puntero + i*M +j) = rand() % 100 + 1;
            printf("%d ",*(puntero + i*M +j));
        }
        printf("\n");
    }
  


    /* FORMA 1 ARITMETICA PUNTERO

    int matriz[N][M], *puntero;

    puntero = &matriz[0][0]; //asignacion al primer elemento de la matriz

    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            *puntero = rand() % 100 + 1;
            printf("%d ",*puntero);

            puntero++;
        }
        printf("\n");
    }
    */
    


    /*NOTACION ARREGLO SUBINDICE

    int mt[N][M];

    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            mt[i][j] = 1 + rand() % 100;
            printf("%d ", mt[i][j]);

        }
        printf("\n");
       
    }*/

    return 0;

}
