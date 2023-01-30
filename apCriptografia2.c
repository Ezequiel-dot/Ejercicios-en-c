int main(int argc, char const *argv[])
{
    int n [4];
    int num=0;
    int n1,n2,n3,n4;

    printf("Ingrese el numero que desea desencriptar \n");
    scanf("%d", &num);

    for(int i =0;i<4;i++){
        n[i]=num%10;
        num=num/10;
       // printf("%d \n",n[i]);
    }
    
    n1=n[1];
    n2=n[0];
    n3=n[3];
    n4=n[2];

    n1=(n1+3)%10;
    n2=(n2+3)%10;
    n3=(n3+3)%10;
    n4=(n4+3)%10;

    printf("Numero desencriptado \n");
    printf("%d",n1);
    printf("%d",n2);
    printf("%d",n3);
    printf("%d",n4);
   
    //printf("%d \n \n", num);
    return 0;
}
