#define tam 10
#include<stdio.h>


int main (int argc, char *argv[]) {
	int i;
int leg[tam];
int par1[tam];
int par2[tam];
int rec[tam];
char estado[tam];

for ( i=0; i<tam; i++){
	
	printf("Ingrese el legajo del alumno \n");
	scanf ("%d",&leg[i]);
	printf("ingrese nota del parcial uno \n");
	scanf ("%d",&par1[i]);
	printf("ingrese nota del parcial dos \n");
	scanf ("%d",&par2[i]);
	
	
	
	if(par1[i]>=8 && par2[i]>=8){
		estado[i]={'P'};
		rec[i]={0};
	}else if(par1[i]>7 || par2[i]>7 && par1[i]>=4 || par2[i]>=4){
		
		estado[i]={'R'};
		
		if(par1[i]<7 || par2[i]<7){
			printf("ingrese nota del rec \n");
			scanf ("%d",&rec[i]);
			if(rec[i]>7){
				estado[i]={'P'};
			}else{
				estado[i]={'R'};
			}
		}
		//estado[i]={2};
		
	}else {
		rec[i]={0};
		estado[i]={'L'};
	}
	
	

	
}	

for(int j=0; j<tam; i++){
	printf("legajo:%d nota1:%d nota2:%d rec:%d estado:%c \n", leg[i], par1[i],par2[i],rec[i], estado[i]);
}

	

	return 0;
}

