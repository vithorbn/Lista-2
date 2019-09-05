#include <stdio.h>

int main(){
float n1,n2,n3, media;

printf("Informe suas notas ");
scanf("%f%f%f", &n1, &n2 , &n3);
media = (n1+n2+n3)/3;

if(n1>=3 != n2>=3 != n3>=3){
    if(media>=5){
    printf(" APROVADO ");
    printf("Sua media eh: %f ", media);
    else
        printf(" REPROVADO ");
        printf("Sua media eh: %f ", media);}
}
return 0;
}
