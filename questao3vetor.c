#include <stdio.h>

int main() {
    int vetor[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Numeros impares do vetor: ");
    for (i = 0; i < 10; i++) {
        if (vetor[i] % 2 != 0) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");

    return 0;
}
