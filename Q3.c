#include <stdio.h>
int main(){

int ncigarros, anos, cigarrosfumados;
float preco,gasto;

printf("Ha quantos anos vc fuma?");
scanf("%i", &anos);
printf("Numero de cigarros por dia");
scanf("%i", &ncigarros);
printf("Preco da carteira de cigarro");
scanf("%f", &preco);
preco = preco/20;
cigarrosfumados = anos*365*ncigarros;

gasto = cigarrosfumados*preco;

printf("Gasto com cigarros eh: %0.2f", gasto);
return 0;
}
