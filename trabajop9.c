#include <stdio.h>
#include <time.h>

struct HealthProfile {
    char nombre[100];
    char apellido[100];
    char sexo[100];
    struct fecha_de_nacimiento{
		int dia;
		int mes;
		int anio;
	};
    float altura;
    float peso
};

//typedef struct fecha_de_nacimiento fecha;
//typedef struct HealthProfile hp;

int edadPersona (struct fecha_de_nacimiento);
int frecuenciaCardiacaMaxima(int);
int frecuenciaCardiacadeseada(int);
float imc(struct HealthProfile);

int main(int argc, char const *argv[])
{
    struct HealthProfile persona; 
    struct fecha_de_nacimiento f;

    printf("Nombre: "); 
	scanf(" %100s", persona.nombre);
	printf("Apellido: "); 
	scanf("%100s", persona.apellido);
	printf("Sexo: "); 
	scanf("%100s", persona.sexo);

	printf("Dia de Nacimiento: "); 
	scanf("%d", &f.dia);
	printf("Mes de Nacimiento: "); 
	scanf("%d", &f.mes);
	printf("Año de Nacimiento: "); 
	scanf("%d", &f.anio);

	printf("Altura: "); 
	scanf("%f", &persona.altura);
	printf("Peso: "); 
	scanf("%f", &persona.peso);


	printf("\n\n\n\n");

    float frecMin=frecuenciaCardiacaMaxima(edadPersona(f))*0.5;
	float frecMax=frecuenciaCardiacaMaxima(edadPersona(f))*0.85;
    float imcPersona=imc(persona);

	printf("Nombre:%s\n",persona.nombre);
	printf("Apellido:%s\n",persona.apellido);
	printf("Sexo:%s\n",persona.sexo);
	printf("Fecha de nacimiento:%d/%d/%d\n",f.dia,f.mes,f.anio);
	printf("Altura:%.2f m\n",persona.altura);
	printf("Peso:%.2f kg\n",persona.peso);
	printf("Edad:%d años\n",edadPersona(f));
	printf("IMC:%.2f \n",imcPersona);
	printf("Frecuencia maxima:%d \n",frecuenciaCardiacaMaxima(edadPersona(f)));
	printf("El rango de frecuencia deseada es entre %.2f y %.2f \n",frecMin,frecMax);
	
    return 0;
}



int edadPersona(struct fecha_de_nacimiento persona){

  time_t t;
  t = time(NULL);
  struct tm tm = *localtime(&t);
  
  int edad = (tm.tm_year + 1900) - persona.anio;

    if((tm.tm_mon + 1) <= persona.mes){
        if(tm.tm_mday > persona.dia)
            return edad-1;
    } else
        return edad;
}

int frecuenciaCardiacaMaxima(int edad){
    return 220-edad;
}

float imc(struct HealthProfile p){
    return p.peso/(p.altura*p.altura);
}