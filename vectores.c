#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMF 10
#define TAMC 10

int main(void){

    int mat[TAMF][TAMC];
    int i, j;
    ///int numero;
    

    srand(time(NULL));
   

    for (i = 0; i < TAMF; i++)
    {
        for (j = 0; j < TAMC; j++)
        {
            //vec[i] = (rand() % (30 - 1 + 1)) + 1 ;
        //numero = (rand() % (9 - 1 + 1)) + 1 ;

        if(i == j){
           mat[i][j] = 1; 
        }else{
            mat[i][j] = 0;
        }
        //mat[i][j] = numero;
        }
        
       
    }
    

      for (i = 0; i < TAMF; i++)
    {
       for (j = 0; j < TAMC; j++)
        {
            if (j % TAMC == 0)
            {
                printf("\n");
            }
            
        printf(" ");
        printf("%d", mat[i][j]);
        }
        
    }

    return 0;

   
}
