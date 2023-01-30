#include <stdio.h>
#define n 10

void cambiar(int *,int *);
void ordenar(int *,int *);
void metBur(int [], int ,void (*comp)(int *, int *));
void imprimir(int []);

void main(int argc, char const *argv[]){

    int arr[n]={1,3,5,7,9,2,4,6,8,33};
    metBur(arr,n,ordenar);
    imprimir(arr);
    
    return 0;
}

void cambiar(int *p,int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}

void ordenar(int *p, int *q){
    if(*p<*q)
    cambiar(p,q);
}

void metBur(int arr[], int tam,void (*comp)(int *p, int *q)){
    
    for (int j = 0; j < n-1; j++)
        for (int i = 0; i < n-1-j; i++)
            (*comp)(&arr[i], &arr[i+1]);
}

void imprimir(int arr[]){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}