#include <stdio.h>
int main() {
    int array[5];
    
    printf("Digite 5 valores inteiros:\n");
    for(int i = 0; i < 5; i++) {
        printf("Valor %d: ", i+1);
        scanf("%d", array + i); 
    }
    printf("\nO dobro dos valores:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d * 2 = %d\n", *(array + i), 2 * (*(array + i)));
    }
    return 0;
}
