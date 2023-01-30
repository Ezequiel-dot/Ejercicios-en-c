#include <stdio.h>



int funcionRespuesta(int , int);
void multiplicacion(int);

int main(int argc, char const *argv[])
{
    srand (time(NULL));
    int dificultad,m=0;

   
    do
    {
   
      printf("Ingrese la dificultad del programa: \n 1:facil \n 2:intermedio \n 3:dificil \n ");
      scanf("%d",&dificultad);

    switch (dificultad)
    {
    case 1:
      operacion(9);
      break;

    case 2:
      operacion(19);
      break;

    case 3:
      operacion(109);
      break;
    
    default:
      break;
    }

    printf("Si quiere volver a ejecutar el programa ingrese 1 \n");
    scanf("%d", &m);
   } while (m==1);
    
  

    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////
int funcionRespuesta(int resp, int correcta){
    int respuestaAl;
    int inc=0;
    do
    {
        scanf("%d", &respuestaAl);
        if(respuestaAl != resp){
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
            inc++;
        }
           
    } while (respuestaAl != resp && (correcta+inc)<10);

    return inc;
}

/////////////////////////////////////////////////////////////////////////////////////
void operacion(int dif){

    int n1;
    int n2;
    int res;
    int total=0,correctas=0,incorrectas=0,porcentaje;

    int op;
    printf("Que operacion desea realizar??\n 1:suma \n 2:resta \n 3:multiplicacion \n 4:aleatorio \n");
    scanf("%d", &op);


  while (total<10){
    if(correctas>0){
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
    correctas++;
    n1=rand()%dif;
    n2=rand()%dif;
    if(op ==4)
      op=(rand()%3)+1;
    
    if(op==2){
      res = n1-n2;
      printf("cuanto es %d - %d \n",n1,n2);
    }else if(op==1){
      res = n1+n2;
      printf("cuanto es %d + %d \n",n1,n2);
    }else if(op==3){
      res = n1*n2;
      printf("cuanto es %d * %d \n",n1,n2);
    }
   
    incorrectas+=funcionRespuesta(res,correctas);

    total=incorrectas+correctas;
  }   
  porcentaje=correctas*10;
  if(porcentaje>75){
    printf("¡Felicitaciones, está listo para pasar al siguiente nivel!");
  }else{
    printf("Pídale ayuda adicional a su maestro \n");
  }
}
