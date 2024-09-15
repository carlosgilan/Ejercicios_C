#include <stdio.h>
#include <stdlib.h> 

int main(void)
{
    const int init = 1;
    int terminal;
    printf("Ingresa el numero hasta donde quieres saber los primos: ");
    scanf("%d", &terminal);

    for (int i = init; i < terminal; i++)
    {
        int contador = 0;
        for (int j = 1; j <= i / 2; j++)
        {
            if(i % j == 0){
                contador++;
            }
        }
        
        if(contador == 1){
            printf("%d\n", i);
        }
        
    }
    
    system("pause");
    
    return 0;
}

