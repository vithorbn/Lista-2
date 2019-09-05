#include <stdio.h>
int main(){
int a,b,c;
printf("Informe tres numeros ");
scanf("%i%i%i",&a, &b, &c);

if(a<b && a<c){
    if(b<c)
        printf("Ordem crescente eh: %i %i %i", a,b,c);
        else
        printf("Ordem crescente eh: %i %i %i ",a,c,b);
}
if(b<a && b<c){
    if(a<c)
        printf("Ordem crescente eh: %i %i %i ", b,a,c);
    else
        printf("Ordem crescente eh: %i %i %i ", b,c,a);
}
if(c<a && c<b){
    if(a<b)
        printf("Ordem crescente eh: %i %i %i ", c,a,b);
    else
        printf("Ordem crescente eh: %i %i %i ", c,b,a);
}

return 0;
}
