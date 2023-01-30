#include <stdio.h>

int funcionRespuesta();

int main(int argc, char const *argv[])
{
    srand (time(NULL));

    int resPersona,res,cant;
    int n=(rand()%4)+1;
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
                n=(rand()%4)+1;
                c++;
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
               
        } while (resPersona != res && c<10);

        n=(rand()%4)+1;
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
    return 0;
}

int funcionRespuesta(){
    
    int n1=rand()%9;
    int n2=rand()%9;
    printf("Cuanto es %d * %d \n",n1,n2);
    int resultado=n1 * n2;
    return resultado;

}
