#include <stdio.h>

int main() {
    char letra = 'A';
    char *ptr = &letra;

    printf("Caractere armazenado: %c\n", *ptr);
    printf("Endereco na memoria: %p\n", (void*)ptr);

    return 0;
}