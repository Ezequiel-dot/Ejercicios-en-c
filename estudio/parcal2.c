#include<stdio.h>
#define n 1

struct alumno{
    int leg;
    char nombre[80];
    char apellido[80];
    int nota1;
    int nota2;
    int estado;
};


void cargar(struct alumno[],int);
void mostrar(struct alumno[],int);

int main(int argc, char const *argv[])
{
    
    struct alumno alum[n]={0};
    
    cargar(alum,n);
    mostrar(alum,n);
    
    return 0;
}

void cargar(struct alumno a[],int cant){

    for(int i=0;i<cant;i++){


        printf("ingrese leg\n");
        scanf("%d", &a[i].leg);
        printf("ingrese nom\n");
        scanf("%s", a[i].nombre);
        printf("ingrese apell\n");
        scanf("%s", a[i].apellido);
        printf("notas\n");

        do{
        scanf("%d", &a[i].nota1);
        } while (a[i].nota1<0 || a[i].nota1>10);

        do{
        scanf("%d", &a[i].nota2);
        } while (a[i].nota2<0|| a[i].nota2>10);
        printf("estado\n");

        do{
        scanf("%d", &a[i].estado);
        } while (a[i].estado<=0 || a[i].estado>3);
    }
}

void mostrar(struct alumno a[],int cant){
    for(int i=0;i<cant;i++){
        printf("Leg : %d \n", a[i].leg);
        printf("Nom : %s \n", a[i].nombre);
        printf("Apellido : %s \n", a[i].apellido);
        printf("NOta : %d \n", a[i].nota1);
        printf("NOta : %d \n", a[i].nota2);
        printf("Estado : %d \n", a[i].estado);
    }
}
