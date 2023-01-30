#include <stdio.h>


    struct dato {
        int a;
        char b;
    }d;


int main (void)
{
    d.a=0;
    d.b='b';

    printf("%d",d.a);
    return 0;

}