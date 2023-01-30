#include <stdio.h>

int main(void)
{
    int n=3;

    float fila1[n];
    float fila2[n];
    float fila3[n];
    

    for(int i =0 ; i<n+1 ; i++){
        printf("Ingrese x%d: \n", i+1);
        scanf("%f",&fila1[i]);
    }
    for(int i =0 ; i<n+1 ; i++){
        printf("Ingrese x%d: \n", i+1);
        scanf("%f",&fila2[i]);
    }
    for(int i =0 ; i<n+1 ; i++){
        printf("Ingrese x%d: \n", i+1);
        scanf("%f",&fila3[i]);
    }
    printf("\n");
     printf("\n");
      printf("\n");
///////////////////////////primera columna///////////////////////////
        float aux=fila1[0];
        for (int i = 0; i < n+1; i++)
        {
            fila1[i]=fila1[i]/aux;
            printf("%f " ,fila1[i] );
        }
        
        printf("\n");
        float aux2=fila2[0];
        for(int i=0 ; i<n+1;i++){
            fila2[i]=(-aux2*fila1[i])+fila2[i];
             printf("%f " ,fila2[i] );
        }
        printf("\n");
        float aux3=fila3[0];
        for(int i=0 ; i<n+1;i++){
            fila3[i]=(-aux3*fila1[i])+fila3[i];
             printf("%f " ,fila3[i] );
        }
        printf("\n");

////////////////////////////////////////segunda columna///////////////////////
         float aux4=fila2[1];
        for (int i = 0; i < n+1; i++)
        {
            fila2[i]=fila2[i]/aux4;
            printf("%f " ,fila2[i] );
        }
         printf("\n");

        float aux6=fila1[1];
        for(int i=0 ; i<n+1;i++){
            fila1[i]=(-aux6*fila2[i])+fila1[i];
             printf("%f " ,fila1[i] );
        }
        printf("\n");
        float aux7=fila3[1];
        for(int i=0 ; i<n+1;i++){
            fila3[i]=(-aux7*fila2[i])+fila3[i];
             printf("%f " ,fila3[i] );
        }
        printf("\n");

//////////////////////////////////tercera columna//////////////////////////////
        float aux8=fila3[2];
        for (int i = 0; i < n+1; i++)
        {
            fila3[i]=fila3[i]/aux8;
            printf("%f " ,fila3[i] );
        }
         printf("\n");
         printf("MATRIZ FINAL\n");


        float aux9=fila1[2];
        for(int i=0 ; i<n+1;i++){
            fila1[i]=(-aux9*fila3[i])+fila1[i];
             printf("%f " ,fila1[i] );
        }
        printf("\n");

                float aux10=fila2[2];
        for(int i=0 ; i<n+1;i++){
            fila2[i]=(-aux10*fila3[i])+fila2[i];
            printf("%f " ,fila2[i] );
        }
        printf("\n");


        for(int i =0;i<n+1;i++){
            printf("%f " ,fila3[i] );
        }

    return 0;
}
