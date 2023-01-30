#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int a, b, c,d, i,j;
	int mayor = a;
	int menor = a;
	
	printf("ingrese la cantidad de veces que se va a ejecutar el programa \n");
	scanf("%d", &j);
	
	for(i=1; i<=j; i++){
	
	printf ("ingrese 4 numeros \n");
	scanf ("%d %d %d %d",&a,&b,&c,&d );
	
	if(a==b && c==a && d==a){
		
		printf ("los numeros son iguales \n");
		
	}else{
	
	if (a>b){
		mayor = a;
		menor = b;
	}else{
		mayor = b;
		menor = a;
	}
	
	if(mayor<c){
		mayor = c;
		if(c>menor){
			menor = menor;
		}else{ 
			menor=c;
		}
	}else{
		mayor=mayor;
		if(c<menor){
			menor=c;
		}else{
			menor=menor;
		}
	}
	
	if(mayor<d){
		mayor=d;
		if(d>menor){
			menor=menor;
		}else{
			menor=d;
		}
	}else{
		mayor=mayor;
		if(d<menor){
			menor=d;
		}else{
			menor=menor;
		}
	}
	printf("El mayor es %d\n",mayor);
	printf("El menor es %d\n",menor);
	
	}
	}
	return 0;
}