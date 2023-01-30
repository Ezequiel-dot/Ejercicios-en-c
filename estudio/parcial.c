#include <stdio.h>

struct complejo{
    float r;
    float y;
};

struct complejo sumaComp(struct complejo a,struct complejo b){
    
    struct complejo c;
    c.r=a.r+b.r;
    c.y=a.y+b.y;
    return c;
}

int main(int argc, char const *argv[])
{
    int haha=55;
    int *a,*b;
    b=&haha;
    a=&haha;

    struct complejo comp[3];
    printf("Ingrese dos numeros \n");
    scanf("%f", &comp[0].r);
    scanf("%f", &comp[1].r);

    comp[2]=sumaComp(comp[0],comp[1]);

    printf("%.1f \n", comp[2].r);
    printf("%d \n", *b);

    return 0;
}