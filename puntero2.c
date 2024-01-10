#include <stdio.h>

int main(int argc, char const *argv[])
{
    char b = 'x';
    char *a;
    a = &b;
    printf("El valor de la variable es %c, con direccion %p\n", b, a);
    printf("El contenido guardado en a es %c", *a);
    return 0;
}
