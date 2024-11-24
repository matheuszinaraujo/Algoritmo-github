#include <stdio.h>

int main(){
  int nota1=0, nota2=0, nota3=0;
  float media=0.0;
  
  printf("digite as 3 notas do aluno:\n");
  scanf("%d %d %d",&nota1, &nota2, &nota3);
  
  media=(nota1+nota2+nota3)/3.0;
  
  if(media>=7)
  
  printf("aluno aprovado com %.2f.", media);
  
    else if (media ==5 && media ==6.9)
printf("aluno esta de recuperação!%.2f", media);

  else 
  printf("aluno reprovado!%.2f", media);

    return 0;
}
