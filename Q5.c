#include <stdio.h>

int main(){
float r,g, alt,v,al,ab,at, pi = 3.14;

printf("Informe o raio do cilindro");
scanf ("%f", &r);
printf("Informe a altura do cilindro");
scanf ("%f", &alt);

ab = r*r*alt;
al = 2*pi*r*alt;
at = 2*ab + al;
v = ab*alt;
printf("A area da base eh: %0.2f ", ab);
printf("A area lateral eh: %0.2f ", al);
printf("A area total eh: %0.2f", at);
printf("O volume eh: %0.2f", v);
return 0;
}
