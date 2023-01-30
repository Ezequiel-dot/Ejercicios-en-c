#include <stdio.h>

int funcionRespuesta(int,int);
void respCorrecta();
void respIncorrecta();

int main(int argc, char const *argv[])
{
    srand (time(NULL));
    int resPersona,res,corr=0,inc=0,s=0,dificultad,valorRand,operacion;

    do
    {
    printf("Ingrese problema aritmético para estudiar \n");
    printf("1:suma \n2:resta \n3:multiplicacion\n4:aleatorio \n5:salir\n");
    scanf("%d", &operacion);

    printf("Ingrese el nivel de dificultad \n");
    printf("1:facil \n2:intermedio \n3:dificil\n4:experto\n");
    scanf("%d", &dificultad);
    
    if(dificultad==1){
        valorRand=9;
    }else if(dificultad==2){
        valorRand=19;
    }else if(dificultad==3){
        valorRand=109;
    }else if(dificultad==4){
        valorRand=1009;
    }

    for (int i = 0; i < 10; i++)
    {
        res=funcionRespuesta(valorRand,operacion);
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

int funcionRespuesta(int val,int operacion){
    
    int resultado;
    int n1=rand()%val;
    int n2=rand()%val;
    
    if(operacion==4){
        operacion=(rand()%4)+1;
    }

    if(operacion ==1){
        resultado=n1 + n2;
        printf("Cuanto es %d + %d \n",n1,n2);
    }else if(operacion ==2){
        resultado=n1 - n2;
        printf("Cuanto es %d - %d \n",n1,n2);
    }else if(operacion ==3){
        resultado=n1 * n2;
        printf("Cuanto es %d * %d \n",n1,n2);
    }
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
