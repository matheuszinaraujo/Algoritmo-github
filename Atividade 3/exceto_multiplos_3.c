#include <stdio.h>
int main(){
    int num, i;
    printf("Digite um numero: ");
    scanf("%d", &num);
    for ( i = 0; i < num; i++)
    {
        if (i % 3 !=0)
        {
            printf("%d\n ", i);
        }
        
    }
    return 0;
}