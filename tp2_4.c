#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*----------- ANALIZAR ULTIMAS 2 FUNCIONES QUE ME MUESTRE LOS DATOS COMPLETOS DE LA PC----------------*/

char tipos[6][10] = {"Intel", "AMD", "Celebron", "Athlon", "Core", "Pentium"}; // tipos de cpu

struct
{
    int velocidad;   // entre 1 y 3
    int anio;        // entre 2015-2024
    int cantNucleos; // entre 1 y 8;
    char *tipo_cpu;  // arreglo de cadena de caracteres

} typedef compu;

void cargarDatos(compu *punt, int cant);
void mostrarDatos(compu *punt, int cant);
void antiguo(compu *punt, int cant);
void mayorVelocidad(compu *punt, int cant);

int main()
{
    srand(time(NULL));

    int cant = 5;
    compu *pc;

    pc = (compu *)malloc(cant * sizeof(compu)); // arreglo dinamico de estructura de 5 TIPOS CPU

    cargarDatos(pc, cant);
    mostrarDatos(pc, cant);
    antiguo(pc,cant);
    mayorVelocidad(pc, cant);

    return 0;
}

void cargarDatos(compu *punt, int cant)
{

    for (int i = 0; i < cant; i++)
    {
        int indice = rand() % 6;

        punt->velocidad = rand() % 3 + 1;
        punt->anio = rand() % 10 + 2015;
        punt->cantNucleos = rand() % 8 + 1;
        punt->tipo_cpu = tipos[indice]; // accedo arreglo global

        punt++;
    }
}

void mostrarDatos(compu *punt, int cant)
{

    for (int i = 0; i < cant; i++)
    {
        printf("\nLa velocidad de procesamiento:%d", punt->velocidad);
        printf("\nAnio de Fabricacion:%d", punt->anio);
        printf("\nCantidad de nucleos:%d", punt->cantNucleos);
        printf("\nTipo de procesador:%s", punt->tipo_cpu);
        printf("\n");
        punt++;
    }
}

void antiguo(compu *punt, int cant)
{

    int min = 0, aux = 0;

    for (int i = 0; i < cant; i++)
    {
        if (i == 0)
        {
            aux = punt->anio;
        }
        else
        {
            if (punt->anio < aux)
            {
                min = punt->anio;
            }
        }
        punt++;
    }

    printf("\nLa PC mas antigua es: %d", min);
}

void mayorVelocidad(compu *punt, int cant)
{

    int mayor = 0;

    for (int i = 0; i < cant; i++)
    {
        if (punt->velocidad > mayor)
        {
            mayor = punt->velocidad;
        }

        punt++;
    }
    
    printf("\nLa PC con mayor velocidad de procesamiento es: %d", mayor);

}