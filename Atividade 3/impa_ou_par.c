#include <stdio.h>
int main(){
    int num, i;
    printf("Digite um numero:");
    scanf("%d", &num);
    for ( i = 0; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d par\n", i);
        }else
        {
            printf("%d impar\n", i);
        }
        
    }
    return 0;
}