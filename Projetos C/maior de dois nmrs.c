#include <stdio.h>
int main() {
    int nmr1, nmr2;
    
    printf(" Digite dois numeros: ");
    scanf("%d %d" , &nmr1, &nmr2);
    
    if (nmr1 > nmr2) {
        printf("O maior numero e %d\n", nmr1);
    
    } else {
        printf("o maior numero e %d\n", nmr2);
    }   
    return 0;
}
