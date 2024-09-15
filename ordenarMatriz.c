#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define MAX 10
#define MIN 1
#define FILA 3
#define COLUMNA 3

bool comprobarNumerosIGuales(int[FILA][COLUMNA], int);
void cargarMatriz(int[FILA][COLUMNA]);
void mostrarMatrizDesordenada(int[FILA][COLUMNA]);
void convertirMatrizAVector(int[FILA][COLUMNA], int[FILA * COLUMNA]);
void ordenarMatriz(int[FILA * COLUMNA]);
void convertirVectorAMatriz(int[FILA * COLUMNA], int[FILA][COLUMNA]);
void mostrarMatrizOrdenada(int[FILA][COLUMNA]);

int main(void)
{
    // int matriz[FILA][COLUMNA] = {{5, 7, 8}, {4, 9, 1}, {6, 3, 2}};
    int matriz[FILA][COLUMNA];
    int vector[FILA * COLUMNA];

    // num = (rand() % (MAX - MIN + 1) + MIN);
    srand(time(NULL));
    cargarMatriz(matriz);
    mostrarMatrizDesordenada(matriz);
    convertirMatrizAVector(matriz, vector);
    ordenarMatriz(vector);
    convertirVectorAMatriz(vector, matriz);
    mostrarMatrizOrdenada(matriz);

    return 0;
}

bool comprobarNumerosIGuales(int matrix[FILA][COLUMNA], int numero)
{
    int i, j;

    for (i = 0; i < FILA; i++)
    {
        for (j = 0; j < COLUMNA; j++)
        {
            if (matrix[i][j] == numero)
            {
                return true;
            }
        }
    }

    return false;
}

void cargarMatriz(int matrix[FILA][COLUMNA])
{
    int i, j, num;
    bool repetido;

    for (i = 0; i < FILA; i++)
    {

        for (j = 0; j < COLUMNA; j++)
        {
            do
            {

                num = (rand() % (MAX - MIN + 1) + MIN);
                repetido = comprobarNumerosIGuales(matrix, num);

            } while (repetido);
            matrix[i][j] = num;
        }
    }
}

void mostrarMatrizDesordenada(int matriz[FILA][COLUMNA])
{

    printf("Matriz desordenada: \n");
    int i, j;

    for (i = 0; i < FILA; i++)
    {
        for (j = 0; j < COLUMNA; j++)
        {

            if (j % COLUMNA == 0)
            {
                printf("\n");
            }

            printf("%d ", matriz[i][j]);
        }
    }

    printf("\n");
}

void convertirMatrizAVector(int matrix[FILA][COLUMNA], int vec[FILA * COLUMNA])
{
    int k = 0, i, j;

    for (i = 0; i < FILA; i++)
    {
        for (j = 0; j < COLUMNA; j++)
        {
            vec[k++] = matrix[i][j];

            // printf("%d", vec[k]);
        }

        // printf("%d", vec[k]);
    }
    /*  for (i = 0; i < FILA * COLUMNA; i++)
     {
         printf("%d ", vec[i]);
     }
      */
}

void ordenarMatriz(int vector[FILA * COLUMNA])
{

    int i, j;

    int aux;

    for (i = 0; i < FILA * COLUMNA - 1; i++)
    {
        for (j = 0; j < FILA * COLUMNA - 1 - i; j++)
        {

            if (vector[j] > vector[j + 1])
            {
                aux = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = aux;
                // printf("%d ", vector[i]);
            }
            // printf("%d ", vector[i]);
        }
        // printf("%d ", vector[i]);
    }
}

void convertirVectorAMatriz(int vector[FILA * COLUMNA], int matriz[FILA][COLUMNA])
{
    int k = 0;
    int i, j;

    for (i = 0; i < FILA; i++)
    {
        for (j = 0; j < COLUMNA; j++)
        {
            matriz[i][j] = vector[k++];

            // printf("%d", vec[k]);
        }
    }
}

void mostrarMatrizOrdenada(int matriz[FILA][COLUMNA])
{

    printf("\nMatriz ordenada: \n");
    int i, j;

    for (i = 0; i < FILA; i++)
    {
        for (j = 0; j < COLUMNA; j++)
        {

            if (j % COLUMNA == 0)
            {
                printf("\n");
            }

            printf("%d ", matriz[i][j]);
        }
    }
}
