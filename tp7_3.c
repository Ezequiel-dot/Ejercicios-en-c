#include <stdio.h>

int funcionRespuesta();
void respCorrecta();
void respIncorrecta();
int main(int argc, char const *argv[])
{
    srand (time(NULL));
    int resPersona,res,corr=0,inc=0;
     int s=0;

    do
    {
    for (int i = 0; i < 10; i++)
    {
        res=funcionRespuesta();
        scanf("%d",&resPersona);
        
        if(res == resPersona){
            corr++;
        }else{
            inc++;
        }
    }

    if(corr>7){
        printf("¡Felicitaciones, está listo para pasar al siguiente nivel \n");
    }else{
        printf("Pídale ayuda adicional a su maestro\n");
    }
    printf("Pulse 1 para volver a ejecutar el programa \n");
    scanf("%d",&s);

    } while (s==1);
    
    return 0;
}

int funcionRespuesta(){
    
    int n1=rand()%9;
    int n2=rand()%9;
    printf("Cuanto es %d * %d \n",n1,n2);
    int resultado=n1 * n2;
    return resultado;

}

void respCorrecta(){
    int n=(rand()%4)+1;
    switch (n)
            {
            case 1:
              printf("¡Muy bien! \n");
              break;
            case 2:
            printf("¡Excelente! \n");
             break;
             case 3:
              printf("¡Buen trabajo!\n");
              break;
            case 4:
            printf("Siga con el buen trabajo!\n");
             break;
            
            }        
}

void respIncorrecta(){
    int n=(rand()%4)+1;
    switch (n)
     {
        case 1:
            printf("No. Por favor intente de nuevo. \n");
        break;
        case 2:
            printf("Incorrecto. Intentar una vez más. \n");
        break;
        case 3:
            printf("No te rindas! \n");
        break;
        case 4:
            printf("No. Sigue intentándolo.\n");
        break; 
    }               
}
