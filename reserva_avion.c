#include <stdio.h>

int main(int argc, char const *argv[])
{
    int cont=0;
    int n=20;
    int m=4;
    int t=15;
    int s=10;
    int tipoAvion,cond,acc;
    int tipo1[20][4]={
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
    };
    int tipo2[15][4]={
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0}
    };
    int tipo3[10][4]={       
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0}
    };


    printf("Ingrese el tipo de avion");
    scanf("%d",&tipoAvion);
    int a,b;

    switch (tipoAvion)
    {
    case 1:///////////////////AVION UNO////////////////////////////////

    
    do{   
        printf("1=Ingresar asiento---2=borrar asiento");
        scanf("%d",&acc);

    if(acc==1){//////////////AGREGAR ASIENTO//////////////////
    
    for(int i=0;i<t;i++){
                for(int j=3;j>=0;j--){
                   
                    printf("%d ",tipo2[i][j]);
                }
                printf("\n");
            }

            printf("Seleccione fila y columna del asiento que desea ocupar \n");
            scanf("%d", &a);
            scanf("%d", &b);
            printf("Ingrese su dni \n");
            scanf("%d", &tipo2[a][b]);

            printf("Ingrese 1 para realizar otro cambio \n");
            scanf("%d", &cond);
            cont++;
             }else{//////////////SACAR ASIENTO//////////////////
            printf("Seleccione fila y columna del asiento que desea borrar \n");
            scanf("%d", &a);
            scanf("%d", &b);
            tipo1[a][b]=0;
            printf("ASIENTO BORRADO \n");
            cont--;
        }
    
    } while (cond==1);

        printf("se ocuparon el %d por ciento de asientos \n", cont*100/60);
       

        break;
    
    case 2:///////////////////AVION DOS////////////////////////////////
            
    do{   
        printf("1=Ingresar asiento---2=borrar asiento");
        scanf("%d",&acc);

    if(acc==1){//////////////AGREGAR ASIENTO//////////////////
    
    for(int i=0;i<n;i++){
                for(int j=3;j>=0;j--){
                   
                    printf("%d ",tipo1[i][j]);
                }
                printf("\n");
            }

            printf("Seleccione fila y columna del asiento que desea ocupar \n");
            scanf("%d", &a);
            scanf("%d", &b);
            printf("Ingrese su dni \n");
            scanf("%d", &tipo1[a][b]);

            printf("Ingrese 1 para realizar otro cambio \n");
            scanf("%d", &cond);
            cont++;
             }else{//////////////SACAR ASIENTO//////////////////
            printf("Seleccione fila y columna del asiento que desea borrar \n");
            scanf("%d", &a);
            scanf("%d", &b);
            tipo1[a][b]=0;
            printf("ASIENTO BORRADO \n");
            cont--;
        }
    
    } while (cond==1);

        printf("se ocuparon el %d por ciento de asientos \n", cont*100/60);
       

        break;
    case 3:///////////////////AVION TRES////////////////////////////////
        do{   
        printf("1=Ingresar asiento---2=borrar asiento");
        scanf("%d",&acc);

    if(acc==1){//////////////AGREGAR ASIENTO//////////////////
    
    for(int i=0;i<s;i++){
                for(int j=3;j>=0;j--){
                   
                    printf("%d ",tipo3[i][j]);
                }
                printf("\n");
            }

            printf("Seleccione fila y columna del asiento que desea ocupar \n");
            scanf("%d", &a);
            scanf("%d", &b);
            printf("Ingrese su dni \n");
            scanf("%d", &tipo3[a][b]);

            printf("Ingrese 1 para realizar otro cambio \n");
            scanf("%d", &cond);
            cont++;
             }else{//////////////SACAR ASIENTO//////////////////
            printf("Seleccione fila y columna del asiento que desea borrar \n");
            scanf("%d", &a);
            scanf("%d", &b);
            tipo3[a][b]=0;
            printf("ASIENTO BORRADO \n");
            cont--;
        }
    
    } while (cond==1);

        printf("se ocuparon el %d por ciento de asientos \n", cont*100/40);
       

    default:
        break;
    }
    return 0;
}
