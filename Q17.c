#include <stdio.h>
int main(){
int a,b,c,d, soma = 0;
printf("Informe quatro numeros inteiros");
scanf("%i%i%i%i", &a, &b, &c,&d);

if (a % 2 == 0)
soma=soma+a;
if (b % 2 == 0)
soma=soma+b;
if (c % 2 == 0)
soma=soma+c;
if (d % 2 == 0)
soma=soma+d;
printf("A Soma dos pares eh: %i",soma);
return 0;
}
