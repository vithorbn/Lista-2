#include <stdio.h>
int main(){
float qc, qz, latao;

printf("Informe a quantidade de latao q vc deseja: ");
scanf("%f", &latao);

qc = 0.7*latao;
qz = 0.3*latao;

printf("A Quantidade de cobre eh: %0.2f\n ", qc);
printf("A Quantidade de zinco eh: %0.2f\n ", qz);
return 0;
}
