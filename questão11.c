#include <stdio.h>
int main() {
    int array[5];
    
    printf("Digite 5 valores inteiros:\n");
    for(int i = 0; i < 5; i++) {
        printf("Valor %d: ", i+1);
        scanf("%d", &array[i]);
    }
    printf("\nEndereços das posições com valores pares:\n");
    for(int i = 0; i < 5; i++) {
        if(array[i] % 2 == 0) {
            printf("array[%d] = %d, endereço: %p\n", i, array[i], (void*)&array[i]);
        }
    }
    return 0;
}
