int main(int argc, char const *argv[])
{
    int tipE,volverEjecutar;
    float salarioSemanal,salarioHora,horasTrabajo,salarioFinal,ventasBrutas,articulosProd,cantArt;

  do
  {
    
    printf("Ingrese que tipo de empleado es \n");
    printf("1 : gerentes \n");
    printf("2 : trabajador por hora \n");
    printf("3 : trabajador por comision \n");
    printf("4 : trabajador a destajo \n");

    scanf("%d",&tipE);

    switch (tipE)
    {
    case 1:
        printf("Ingrese el salario semanal \n");
        scanf("%f",&salarioSemanal);
        printf("El gerente cobra %.2f por semana \n", salarioSemanal);
        break;

    case 2:

        printf("Ingrese el salario por hora \n");
        scanf("%f", &salarioHora);
        printf("Ingrese las horas de trabajo \n");
        scanf("%f", &horasTrabajo);

       if(horasTrabajo <=40){

           salarioFinal = horasTrabajo*salarioHora ;
            printf("Su salario es %.2f \n", salarioFinal);

       }else{

            printf("su salario es %.2f \n", ((horasTrabajo-40)*(salarioHora*1.5))+(40*salarioHora));
 
       }
        break;

    case 3:

        printf("Ingrese ventas brutas semanales \n");
        scanf("%f",&ventasBrutas);

        printf("Su salario es %.2f \n", 250+(5.7*ventasBrutas/100));
        break;

    case 4:
        printf("Ingrese cuantos articulos produjo \n");
        scanf("%f",&articulosProd);
        printf("Ingrese cuanto dinero recibe por articulo \n");
        scanf("%f",&cantArt);

        printf("Su salario es %.2f \n", articulosProd*cantArt);
        break;
    default:
        printf("Debe elegir un trabajador entre el 1 y el 4 \n");
        break;
    }

    printf("Si desea ingresar otro trabajador presione 1 \n");
    scanf("%d",&volverEjecutar);

  } while (volverEjecutar ==1);
  
    return 0;
}



