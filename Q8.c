#include <stdio.h>
int main(){
int A,B;
printf("Informe um numero\n");
scanf("%i",&A);
printf("Informe outro numero\n");
scanf("%i", &B);

if(A>B)

printf("O primeiro eh maior q o segundo");
else if(B>A)
printf("O segundo eh maior q o primeiro");

else
printf("Os dois numeros sao iguais");

return 0;
}
