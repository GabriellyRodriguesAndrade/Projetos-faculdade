#include <stdio.h>


int processarCedula(int valorRestante, int valorCedula);

int main() {
    int valorTotal;

   
    if (scanf("%d", &valorTotal) != 1) return 0;

   
    printf("%d\n", valorTotal);

 
    int cedulas[7] = {100, 50, 20, 10, 5, 2, 1};

 
    for (int i = 0; i < 7; i++) {
        valorTotal = processarCedula(valorTotal, cedulas[i]);
    }

    return 0;
}


int processarCedula(int valorRestante, int valorCedula) {
    int quantidadeNotas = valorRestante / valorCedula;

   
    printf("%d nota(s) de R$ %d,00\n", quantidadeNotas, valorCedula);

    return valorRestante % valorCedula;
}