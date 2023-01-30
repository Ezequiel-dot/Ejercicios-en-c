#include<stdio.h>
#define tam 3

int main(int argc, char const *argv[])
{
int i,op,clave,rep;
int leg[tam];
int par1[tam];
int par2[tam];
int rec[tam];
char estado[tam];

do
{

	printf("1 = Ingreso de notas\n 2 = Busqueda legajo de un alumno\n 3 = Ordenar por legajo\n\n ");
	scanf("%d",&op);

switch (op)
{
case 1:
	for ( i=0; i<tam; i++){
	
	printf("Ingrese el legajo del alumno \n");
	scanf ("%d",&leg[i]);
	printf("ingrese nota del parcial uno \n");
	scanf ("%d",&par1[i]);
	printf("ingrese nota del parcial dos \n");
	scanf ("%d",&par2[i]);
	
	if(par1[i]>=8 && par2[i]>=8){
		estado[i]='P';
		rec[i]=0;
	}else if(par1[i]>7 || par2[i]>7 && par1[i]>=4 || par2[i]>=4){
		
		estado[i]='R';
		
		if(par1[i]<7 || par2[i]<7){
			printf("ingrese nota del rec \n");
			scanf ("%d",&rec[i]);
			if(rec[i]>7){
				estado[i]='P';
			}else{
				estado[i]='R';
			}
		}
		//estado[i]={2};
		
	}else {
		rec[i]=0;
		estado[i]='L';
	}
	
}	
	for(int i=0; i<tam; i++){
		printf("legajo:%d nota1:%d nota2:%d rec:%d estado:%c \n", leg[i], par1[i],par2[i],rec[i], estado[i]);
	}
	break;

	case 2:
			printf("Ingrese el legajo del alumno: ");
			scanf ("%d",&clave);
			
			for (int i=0;i<tam;i++){
				
				if(leg[i] == clave){
					printf("El alumno de legajo %d:\n\n\nSus notas son %d,%d,%d\nSu estado es %c\n\n\n",clave,par1[i],par2[i],rec[i],estado[i]);
				}
			}
	break;

	case 3:

		for( int i=0;i<tam-1;i++){
			
			for(int j=0;j<tam-1-i;j++){
				
				if(leg[j]<leg[j+1]){
				
				int aux1,aux2,aux3,aux4;

				aux1=leg[j];
				leg[j]=leg[j+1];
				leg[j+1]=aux1;
				
				aux2=par1[j];
				par1[j]=par1[j+1];
				par1[j+1]=aux2;
				
				aux3=par2[j];
				par2[j]=par2[j+1];
				par2[j+1]=aux3;
				
				aux4=rec[j];
				rec[j]=rec[j+1];
				rec[j+1]=aux4;
			}
				
					
			}
		}

		for(int i=0; i<tam; i++){
			printf("legajo:%d nota1:%d nota2:%d rec:%d estado:%c \n", leg[i], par1[i],par2[i],rec[i], estado[i]);
		}
		
	break;

default:
	break;
}
			printf("Desea volver a ejecutar el programa?");
			scanf("%d",&rep);
		} while (rep==1);

    return 0;
}
