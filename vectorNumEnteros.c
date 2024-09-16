/*Escribe un programa que almacene, en un vector con dimensión 10, los números 10 primeros
números de la Quiniela. El ingreso de los datos será indicando posición-numero, de modo que
puedo ingresar la posición 5 antes que la posición 2.
 */

#include <stdio.h>
#include <stdbool.h>
#define TAM 10

int main(void)
{

    int quiniela[TAM], i = 0, numero, posicion;

    do
    {
        printf("Ingrese un numero y la posicion para cargar el numero la quiniela: \n");
        printf("Numero: \n");
        scanf("%d", &numero);
        printf("Posicion: \n");
        scanf("%d", &posicion);

        quiniela[posicion - 1] = numero;

        printf("Posicion: %d - %d\n", posicion, quiniela[posicion - 1]);

        i++;
    } while (i < 10);

    printf("-----------------------\n");

    for (int i = 0; i < TAM; i++)
    {
        printf("Posicion: %d - %d\n", i + 1, quiniela[i]);
    }

    return 0;
}
