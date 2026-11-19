#include <stdio.h>

int main() {
    float valor = 5.5f;
    float *ptr = &valor;

    *ptr = 9.8f; // Altera o valor original através do ponteiro

    printf("Novo valor: %.2f\n", valor);
    printf("Endereco de memoria: %p\n", (void*)ptr);

    return 0;
}