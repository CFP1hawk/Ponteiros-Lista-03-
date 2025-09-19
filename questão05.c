#include <stdio.h>
void ajustarValores(int *a, int *b) {
    if (*a < *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}
int main() {
    int a, b;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    
    printf("\nValores originais:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    
    ajustarValores(&a, &b);
    
    printf("\nValores ajustados:\n");
    printf("Maior valor (A) = %d\n", a);
    printf("Menor valor (B) = %d\n", b);
    
    return 0;
}
