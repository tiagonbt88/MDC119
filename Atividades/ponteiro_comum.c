#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 10;
    int *ptr = &x;

    printf("%p\n", ptr);  // imprime o valor do ponteiro   ->
    printf("%d\n", *ptr); // imprime o conteudo do ponteiro
    *ptr = 5;
    printf("%d\n", x);
    ptr = NULL;
    printf("%p\n", ptr);  // imprime o valor do ponteiro   ->
    printf("%d\n", *ptr); // imprime o conteudo do ponteiro

    return 0;
}
