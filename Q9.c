#include <stdio.h>
int main(){
float custofab, imp, lucro , custotot;

printf("Informe o custo de fabrica ");
scanf("%f", &custofab);
imp = custofab*0.45;
lucro = imp*0.12;
custotot = imp+lucro+custofab;

printf("Impostos R$: %0.2f\n", imp);
printf("Lucro do distribuidor R$: %0.2f\n", lucro);
printf("Custo final ao consumidor R$: %0.2f\n", custotot);

return 0;
}
