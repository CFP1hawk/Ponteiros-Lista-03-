#include <stdio.h>
int main() {
    float array[10];
    
    printf("Endereços das posições do array:\n");
    for(int i = 0; i < 10; i++) {
        printf("array[%d]: %p\n", i, (void*)&array[i]);
    }
    return 0;
}
