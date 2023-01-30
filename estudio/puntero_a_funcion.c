#include<stdio.h>

int suma(int,int);
void pregunta(int (*p)(int,int),int ,int ,char);

int main(int argc, char const *argv[])
{   
    pregunta(suma,5,3,'+');
    pregunta(suma,8,9,'+');
    
    return 0;
}

int suma(int a, int b){
    return a+b;
}

void pregunta(int (*p)(int,int),int a,int b,char signo){
    
    int res;
    printf("Cuanto es %d %c %d \n",a,signo,b);
    scanf("%d", &res);

    if(res==(*p)(a,b)){
        printf("Correcto \n");
    }else{
        printf("Incorrecto \n");
    }

}