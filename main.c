
/* 53) Criar um algoritmo que leia um n?mero, maior que zero, e imprimir todos os
n?meros de 1 at? o n?mero lido. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int inicio, fim;

    printf("--=--=--=--=--=--=--=\n");
    printf("--=-= CONTADOR --=--=\n");
    printf("--=--=--=--=--=--=--=\n");

    printf("Digite o último número do contador: ");
    scanf("%d", &fim);

    for (int inicio = 0; inicio <= fim; ++inicio) {
        printf("%d\n", inicio);
    }

    system("pause");
    return 0;
}