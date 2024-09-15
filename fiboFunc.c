#include <stdio.h>
#include <stdlib.h>

int pedirNumero(void);
int calcularFibo(int);

int main(void)
{

    int fibo, mostrar;

    int num = pedirNumero();

    fibo = calcularFibo(num);

    system("pause");

    return 0;
}

int pedirNumero(void)
{

    int numero = 0;

    printf("Introduce el numero de elemntos para saber su secuencia de fiibonacci: ");
    scanf("%d", &numero);

    return numero;
}

int calcularFibo(int num)
{
    int x = 0, y = 1;

    printf("%d %d ", x, y, " ");

    for (int i = 1; i < num; i++)
    {

        int z = x + y;
        printf("%d ", z);
        x = y;
        y = z;
    }
    printf("\n");
}
