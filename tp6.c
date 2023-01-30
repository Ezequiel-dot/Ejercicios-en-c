#include<stdio.h>
#define N 36000

int main(void)
{
    int dado1,dado2,res;
    int mat[11]={0};

    for(int i =1;i<N;i++){
        
        dado1=1+(rand()%6);
        dado2=1+(rand()%6);
        res=dado1+dado2;

        for (int i = 0; i < 11; i++)
            if(res == (i+2))
                 mat[i]++;
        
        printf("\n");
    }

    for (int i = 0; i < 11; i++)
    {   
        int porcentaje=mat[i]*100/36000;
        printf("la suma %d se imprimio %d veces y aparecio el %d porciento de las veces\n",i+2, mat[i],porcentaje);
    }
    
    return 0;
}
