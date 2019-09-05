#include <stdio.h>

int main(){
int a,b,c;
printf("Informe um valor ");
scanf("%i",&a);
printf("Informe outro valor ");
scanf("%i",&b);
printf("Informe outro valor ");
scanf("%i",&c);

if(a>b && a>c)
    printf("O maior numero eh: %i ",a);
    else if(b>a && b>c)
        printf("O maior numero eh: %i ", b);
        else
        printf("O maior numero eh: %i ", c);

return 0;
}
