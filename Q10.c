#include <stdio.h>
#include <stdlib.h>

int main()
{
	int vcarro,vp,multa;

	printf ("informe a velocidade permitida na avenida");
	scanf("%d",&vp);
	printf("informe a velocidade do carro");
	scanf("%d",&vcarro);
	if(vcarro>vp)
	{
		if (vcarro<=(vp+10))
		{
			multa=50;
		}
		else if (vcarro<=(vp+30))
		{
			multa=50;
		}
		else
		{
			multa=200;
		}
		printf("\nA multa foi de-->%d reais\n",multa);
	}
	else
	{
		printf("\nVeiculo dentro do limite!\n");
	}

	system("pause");
	return 0;
}
