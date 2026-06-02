#include <stdio.h>

#define G 3
#define H 6

int atividade() {
    float media;
    int n, soma = 0, v[n];

    printf("Escreva a quantidade de valores:");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Digite o numero %d: ");
        scanf("%d", &v[i]);
        soma += v[i];
    }

    media = soma / n;

    printf("Soma = %d | media = %.2f %.2f\n", soma, (float)soma / (G*H));

    return 0;
}
