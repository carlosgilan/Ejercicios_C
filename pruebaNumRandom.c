#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 50
#define MIN 1
#define TAMVECTOR 50

void cargarVector(int[TAMVECTOR]);
void ordenarVector(int[TAMVECTOR]);
bool comprobarNumerosIguales(int[TAMVECTOR], int);
void mostrarVector(int[TAMVECTOR]);

int main(void)
{

    srand(time(NULL));

    int vecNumRandoms[TAMVECTOR];
    cargarVector(vecNumRandoms);
    ordenarVector(vecNumRandoms);
    mostrarVector(vecNumRandoms);

    return 0;
}

void cargarVector(int vecNumRandoms[TAMVECTOR])
{

    int i, numeroRandom;
    bool repetido;

    for (i = 0; i < TAMVECTOR; i++)
    {
        do
        {
            numeroRandom = (rand() % (MAX - MIN + 1)) + MIN;
            repetido = comprobarNumerosIguales(vecNumRandoms, numeroRandom);
        } while (repetido);
        vecNumRandoms[i] = numeroRandom;
    }
}

void ordenarVector(int vecNumRandoms[TAMVECTOR])
{
    int i, j, aux;

    for (i = 0; i < TAMVECTOR - 1; i++)
    {
        for (j = 0; j < TAMVECTOR - i - 1; j++)
        {
            if (vecNumRandoms[j] > vecNumRandoms[j + 1])
            {
                aux = vecNumRandoms[j];
                vecNumRandoms[j] = vecNumRandoms[j + 1];
                vecNumRandoms[j + 1] = aux;
            }
        }
    }
}

bool comprobarNumerosIguales(int vecNumRandoms[TAMVECTOR], int numero)
{

    int i;

    for (i = 0; i < TAMVECTOR; i++)
    {

        if (vecNumRandoms[i] == numero)
        {

            return true;
        }
    }

    return false;
}

void mostrarVector(int vecNumRandoms[TAMVECTOR])
{

    int i;
    for (i = 0; i < TAMVECTOR; i++)
    {

        printf("Numero %d random: %d \n", i + 1, vecNumRandoms[i]);
    }
}
