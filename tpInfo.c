 #include <stdio.h>

 int main(int argc, char const *argv[]){
     
    float altura, peso, bmi;
     
    printf("Ingrese su altura en metros. \n");
    scanf("%f", &altura );
   
    printf("Ingrese su peso en kilogramos.\n");
    scanf ("%f", &peso);
    bmi=peso/(altura*altura);

    printf("Su bmi es: %.2f \n",bmi);

    printf("VALORES BMI \n");
    printf("Bajo peso: menos de 18.5 \n");
    printf("Normal: entre 18.5 y 24.9 \n");
    printf("Sobrepeso: entre 25 y 29.9 \n");
    printf("Obeso: 30 o más ");

    return 0;
 }
 