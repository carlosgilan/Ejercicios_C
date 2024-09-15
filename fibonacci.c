#include <stdio.h>
#include <stdlib.h> 


int main(void)
{

    int fibo;
    printf("Ingresa el numero de elementos para saber su serie de fibonacci: ");
    scanf("%d", &fibo);

    int x = 0, y = 1;
    

    printf("%d %d ", x, y);

    int acum1 = 0, acum2 = 0, acum3 = 0;

    for (int i = 1; i < fibo; i++)
    {

        int z = x + y;
        printf("%d ", z);
        x = y;
        y = z;
       
        if(z % 2 == 0){
       // printf("%d ", z);
        acum1 += z;
        acum2 += x;
        acum3 += y;

        
        }
    }

    //sumatoria = acum1 + acum2 + acum3;
    printf("\n");
    printf("Suma: 1: %d\n", acum1);
    system("pause");
    return 0;
}

