#include <stdio.h>

int main(){
int a;
float r,b;

printf("Informe um numero inteiro");
scanf("%i", &a);
printf("Informe outro numero inteiro");
scanf("%f", &b);

if (b!=0){
r = a/b;
printf("Razao eh: %0.2f", r);
} else {
printf("DIVISAO POR ZERO");
}
return 0;
}
