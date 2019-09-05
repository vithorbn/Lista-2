#include<stdio.h>
int main(){
int a,b,c;
printf("Informe um numero ");
scanf("%i", &a);
printf("Informe um numero ");
scanf("%i", &b);
printf("Informe um numero ");
scanf("%i", &c);


if(a>b+c){
    printf("O primeiro numero eh maior que a soma dos demais.");
}


return 0;
}
