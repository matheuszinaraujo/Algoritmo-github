#include <stdio.h>

int main(){
    int a, b, c;
    printf("digite o primeiro numero:");
    scanf("%d",&a);
    
    printf("digite o segundo numero:");
    scanf("%d",&b);
    
    printf("digite o terceiro numero:");
    scanf("%d",&c);
    
    if(a > b && a >c)
printf("o maior numero é%d\n",a);

else if (b > a && b > c){

printf("maior numero é%d\n", b);
}
else  
 printf("o maior numero é%d\n", c);
    return 0;
}
