#include <stdio.h>

void carga(int *,int);
void imprimir(int *,int );
int buscarMaximo(int *,int );

int main(int argc, char const *argv[])
{
    int tam;
    int *p;

    printf("INgrese el tamaño del arreglo\n");
    scanf("%d",&tam);

    p=malloc(tam*sizeof(p));

    int arr[tam];

    carga(p,tam);
    imprimir(p,tam);
    printf("el num max es %d",buscarMaximo(p,tam));

    free(p);

    return 0;
}

void carga(int *p,int n){
    for(int i =0;i<n;i++){
        scanf("%d",p+i);
    }
}

void imprimir(int *p,int n){
    for(int i =0;i<n;i++){
        printf("el puntero vale %d \n",*(p+i));
    }
}

int buscarMaximo(int *p,int n){
    int temp=0;
    for (int  i = 0; i < n; i++)
    {
        if(temp<*(p+i)){
            temp=*(p+i);
        }
    }
    return temp;
}
