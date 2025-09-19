#include <stdio.h>
void somaArmazena(int *a, int b) {
    *a = *a + b;
}
int main() {
    int a, b;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    
    printf("\nValores antes da função:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    
    somaArmazena(&a, b);
    
    printf("\nValores após a função:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    
    return 0;
}
