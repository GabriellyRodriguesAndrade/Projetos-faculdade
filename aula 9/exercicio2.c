#include <stdio.h>

int main() {
    int n;


    while (scanf("%d", &n) != EOF) {
        double maiorVelocidade = -1.0;

        for (int dia = 1; dia <= n; dia++) {
            int t, d;
            scanf("%d %d", &t, &d);

            double velAtual = (double)d / t;

           
            if (velAtual > maiorVelocidade) {
                printf("%d\n", dia);
                maiorVelocidade = velAtual;
            }
        }
    }

    return 0;
}