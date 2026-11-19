#include <stdio.h>

int main() {
    int a = 15, b = 30;
    int *ptrA = &a, *ptrB = &b;

    printf("Endereco de a: %p\n", (void*)ptrA);
    printf("Endereco de b: %p\n", (void*)ptrB);

    if (ptrA > ptrB) {
        printf("A variavel 'a' (valor %d) possui o maior endereco de memoria.\n", *ptrA);
    } else {
        printf("A variavel 'b' (valor %d) possui o maior endereco de memoria.\n", *ptrB);
    }

    return 0;
}