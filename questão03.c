#include <stdio.h>
int main() {
    int a, b;
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    if (&a > &b) {
        printf("Conteúdo do maior endereço: %d\n", a);
    } else {
        printf("Conteúdo do maior endereço: %d\n", b);
    }
    return 0;
}
