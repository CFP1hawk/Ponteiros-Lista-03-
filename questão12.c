#include <stdio.h>
int ordenarValores(int *a, int *b, int *c) {
    if(*a == *b && *b == *c) {
        return 1;
    }
    int temp;
    if(*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if(*a > *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if(*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
    
    return 0;
}
int main() {
    int a, b, c;
    
    printf("Digite três valores inteiros:\n");
    printf("Valor 1: ");
    scanf("%d", &a);
    printf("Valor 2: ");
    scanf("%d", &b);
    printf("Valor 3: ");
    scanf("%d", &c);
    
    printf("\nValores originais:\n");
    printf("A = %d, B = %d, C = %d\n", a, b, c);
    
    int iguais = ordenarValores(&a, &b, &c);
    
    if(iguais) {
        printf("\nOs três valores são iguais.\n");
    } else {
        printf("\nValores ordenados:\n");
        printf("Menor: %d, Medio: %d, Maior: %d\n", a, b, c);
    }
    return 0;
}
