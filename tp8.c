#include <stdio.h>

int main(int argc, char const *argv[])
{
    char *temas[5]= {"educacion","contaminacion","politica","discriminacion","pobreza"};
    int respuestas[5][10];
    float prom,max=0,men=10;

    int pos1,pos2,pos3,pos4,j;

    printf("califique cada problema del 1 al 10 \n");
   


    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 5; j++){
            printf("%s \n", *temas+j);
            do
            {
               scanf("%d", &respuestas[j][i]);
            } while (respuestas[j][i]>11 || respuestas[j][i]<0);
        }
    }
    printf("\t\t");
    for (int i = 1; i < 11; i++){   
        printf("%2d ", i);
    }
    printf("\n");

    for (int i = 0; i < 5; i++){
        printf("%s:\t",temas[i]);
        prom=0;
        for (j = 0; j < 10; j++){
            
            printf("%2d ", respuestas[i][j]);
            prom+=respuestas[i][j];
        }
        prom=prom/10;
        printf("promedio: %.2f ", prom);
        printf("\n");
        
        if(max<prom){
            max=prom;
            pos1=(i); 
        }
        if(men>prom){
            men=prom;
            pos3=(i);
           
        }
    }
    
    printf("El mayor promedio fue de %s: %.2f y el menor %s: %.2f", temas[pos1] , max, temas[pos3], men );
    return 0;
}
