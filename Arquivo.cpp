#include <stdio.h>
#include <string.h>
#include <conio2.h>
#include <windows.h>
#include <stdlib.h>

struct tpFilmes {
	int ano, durac;
	char clas[4], nome[50];
	float gasto, renda, taxa;
	
};

void OrdenaAno(void)
{
	
}

void LeArquivo(void)
{
	FILE *Ptr = fopen("Filmes.txt", "r");
	tpFilmes R;
	int maiorLucro = 0;
	char filmeML[50];
	
	int maiorTaxa = 0;
	char filmeMt[50];
	
	float mediaDurac = 0;
	int contFilmes = 0;
	
	if(Ptr == NULL)
	{
		printf("Arquivo invalido!\n");
	} else {
		fscanf(Ptr, "%[^;];%d;%[^;];%f;%f;%d;%f\n", &R.nome, &R.ano, &R.clas, R.gasto, R.renda, R.durac, R.taxa);
		while(!feof(Ptr))
		{
			if(R.renda > maiorLucro)
			{
				maiorLucro = R.renda;
			}
			
			if(R.taxa > maiorTaxa)
			{
				maiorTaxa = R.taxa;
			}
			
			mediaDurac += R.durac;
			contFilmes++;
			fscanf(Ptr, "%[^;];%d;%[^;];%f;%f;%d;%f\n", &R.nome, &R.ano, &R.clas, R.gasto, R.renda, R.durac, R.taxa);
		}
	}
	
	
}



int main(void)
{
	
	return 0;	
}

