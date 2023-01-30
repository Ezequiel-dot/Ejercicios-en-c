#include <stdio.h>

int funcionRespuesta();

int main(int argc, char const *argv[])
{
    srand (time(NULL));

    int resPersona,res,cant;
    int c=0;

    printf("Cuantas veces quiere ejecutar el programa?\n");
    scanf("%d",&cant);

    for (int i = 0; i < cant; i++)
    {
        res=funcionRespuesta();

        do
        {
            scanf("%d", &resPersona);
            if(resPersona != res){
                printf("No. Inténtelo de nuevo \n");
                c++;
            }
                

        } while (resPersona != res && c<10);

    printf("muy bien\n");
    
    }

    return 0;
}

int funcionRespuesta(){
    
    int n1=rand()%9;
    int n2=rand()%9;
    printf("Cuanto es %d * %d \n",n1,n2);
    int resultado=n1 * n2;
    return resultado;

}
