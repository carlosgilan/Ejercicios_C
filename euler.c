#include <stdio.h>


int main(void){
    int i, acum = 0;
    for (i = 0; i < 1000; i++)
    {
        if(i % 3 == 0 || i % 5 == 0){
            acum += i;
        }
    }

    printf("%d", acum);
    
    
    return 0;
}