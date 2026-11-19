#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;

    printf("Valor da variavel: %d\n", num);
    printf("Endereco de memoria: %p\n", (void*)&num);
    printf("Valor apontado pelo ponteiro: %d\n", *ptr);

    return 0;
}