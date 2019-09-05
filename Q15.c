#include <stdio.h>
#include <math.h>

int main(){
float a,b,c, delta,x1,x2;

printf("Informe o primeiro coeficiente");
scanf("%f", &a);
printf("Informe o segundo coeficiente");
scanf("%f", &b);
printf("Informe o terceiro coeficiente");
scanf("%f", &c);

delta = (b*b) - 4*a*c;

if(delta >= 0){
x1 = (-b + sqrt(delta))/(2*a);
x2 = (-b - sqrt(delta))/(2*a);

printf("As raizes sao: %0.2f e %0.2f", x1, x2);
}
else {
printf("NAO HA RAIZES REAIS");
}

return 0;
}
