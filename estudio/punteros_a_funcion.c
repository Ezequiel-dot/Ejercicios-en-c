#include<stdio.h>

int suma(int a,int b){
    return a+b;
}
int resta(int a,int b){
    return a-b;
}
int multiplicacion(int a,int b){
    return a*b;
}
int division(int a,int b){
    return a/b;
}


void pregunta (int (*f)(int,int) , int num1,int num2,char signo){
    
    
    float res=(float)(*f)(num1,num2);
    int res2;

    printf("Cuanto es %d%c%d ?? \n", num1,signo,num2);
    scanf("%d", &res2);

    if(res==res2){
        printf("BIen ahi bestiaaaa \n");
    }else{
        printf("Siga practicando papaaaa\n");
    }
}

int main(int argc, char const *argv[])
{
    pregunta(suma,2,6,'+');
    pregunta(resta,4,2,'-');
    pregunta(multiplicacion,4,3,'*');
    pregunta(division,3,6,'/');

    return 0;
}
