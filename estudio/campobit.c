int main(int argc, char const *argv[])
{
    struct time {

unsigned int h:8;
unsigned int m:12;
unsigned int s:12;
//unsigned int :15
};

printf("Tamaño de la estructura: %lu bytes\n", sizeof(struct time));
    return 0;
}
