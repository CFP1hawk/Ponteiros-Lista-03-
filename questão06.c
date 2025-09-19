#include <stdio.h>
int somaDobro(int *a, int *b) {
    *a = 2 * (*a);
    *b = 2 * (*b);
    return *a + *b;
}
int main() {
    int a, b;
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    
    int soma = somaDobro(&a, &b);
    
    printf("\nDobro de A: %d\n", a);
    printf("Dobro de B: %d\n", b);
    printf("Soma do dobro: %d\n", soma);
    
    return 0;
}
