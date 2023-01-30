#include <stdio.h>



typedef union {
	float f1;
	unsigned int f2;
	struct{
		unsigned int mantisa:23;
		unsigned int exp:8;
		unsigned int signo:1;
	} iee754;
} flot;

void imprimirBin(int n, int i){
	int k;
	for (k = i - 1; k >= 0; k--) {
		
		if ((n >> k) & 1){
            printf("1");
        }else
			printf("0");
	}
}
	
void imprimirIEE(flot var){

    printf("\n");

	printf("Bit de signo: \t  (%d) %2d\n", var.iee754.signo, var.iee754.signo);
	printf("Bits de exponte: (%d)",var.iee754.exp);
	printBinary(var.iee754.exp, 8);
	printf("\nBits mantissa: (%d)",var.iee754.mantisa);
	printBinary(var.iee754.mantisa, 23);
	
}
	
	
int main(){



	flot var;
	
	printf("Ingrese el numero flotante:\n");
	scanf("%f",&var.f1);
	
	printf("\nLa representacion IEEE 754 de %.2f en binario es:\n",var.f1);
	imprimirBin(var.f2,32);
	
	imprimirIEE(var);
	
	return 0;
}
