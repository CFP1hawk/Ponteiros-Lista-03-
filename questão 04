#include <stdio.h>
void trocarValores(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int a, b;
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    printf("\nAntes da troca:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
  
    trocarValores(&a, &b);
    printf("\nApós a troca:\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    
    return 0;
}
