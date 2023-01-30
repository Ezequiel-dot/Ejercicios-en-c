#include<stdio.h>

int main(int argc, char const *argv[])
{   
    int n;
    float aux1,aux2;
    printf("Ingrese el N de la matriz \n");
    scanf("%d",&n);
   
    float matriz[n][n+1];
    
/////////INGRESO MATRIZ

    for(int i=0;i<n;i++){
        for(int j=0;j<n+1;j++){
            printf("ingrese la posicion %d*%d de la matriz \n",i+1,j+1);
            scanf("%f",&matriz[i][j]);
        }
    }

//MOSTRAR MATRIZ SIN REDUCIR

    printf("La matriz original es: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n+1;j++){
            printf("%.2f ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
//////////REDUCIR MATRIZ
    for (int  i = 0; i < n; i++){
        aux1=matriz[i][i];
        for (int j = 0; j < n+1; j++){
            matriz[i][j]/=aux1; // pivot
        }
        for(int k=1;k<n;k++){//hacer cero terminos de abajo
            aux2=matriz[i+k][i]*(-1);
            for (int j = 0; j < n+1; j++){
                matriz[i+k][j]=(aux2*matriz[i][j])+matriz[i+k][j];
            }
        }
        if(i>0){//hacer cero terminos de arriba
         for(int k=1;k<n;k++){

            aux2=matriz[i-k][i]*(-1);

                for (int j = 0; j < n+1; j++){
                    matriz[i-k][j]=(aux2*matriz[i][j])+matriz[i-k][j];
                }
            }
        }
    }
//////////////MOSTRAR MATRIZ REDUCIDA
   printf("La matriz reducida es: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n+1;j++){
            printf("%.2f ",matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
