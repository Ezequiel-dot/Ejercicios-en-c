int main(int argc, char const *argv[])
{
    int n [4];
    int num=0;
    int n1,n2,n3,n4;

    printf("Ingrese el numero que desea encriptar \n");
    scanf("%d", &num);

    for(int i=0; i<4;i++){
        n[i]=((num%10)+7)%10;
        num=num/10;
    }

    n1=n[1];
    n2=n[0];
    n3=n[3];
    n4=n[2];
    num=(n4*1)+(n3*10)+(n2*100)+(n1*1000);

    printf("Numero encriptado \n");
    printf("%d \n \n", num);



    return 0;
}
