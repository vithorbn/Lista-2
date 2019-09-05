#include <stdio.h>

int main(){
int A, C,D;
float B,E;

printf("Informe um numero inteiro");
scanf ("%i", &A);
printf("Informe outro");
scanf ("%f",&B);

C = A + B;
D = A*B;
E = A/B;

printf("Soma entre eles eh: %i\n", C);
printf("produto entre eles eh: %i\n", D);
printf("Razao entre eles eh: %0.2f\n", E);
return 0;
}
