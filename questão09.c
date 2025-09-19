#include <stdio.h>
int main() {
    float matriz[3][3];
    
    printf("Endereços das posições da matriz:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("matriz[%d][%d]: %p\n", i, j, (void*)&matriz[i][j]);
        }
    } 
    return 0;
}
