#include <stdio.h>
#include <algorithm>

using namespace std;

typedef struct {
	int arrecadacao;
	int dias;
} DADOS;


int main(){
	DADOS dados[20000];
	int n_dias, custo_dia, receita[50], lucro[20000], j, i, a, k;

	while(scanf("%d %d", &n_dias, &custo_dia)!=EOF) {

		

		for(i=0; i<n_dias; i++)
			scanf("%d", &receita[i]);

		for(i=0; i<50; i++) {
			dados[i].arrecadacao=0;
			dados[i].dias=0;
		}

		k=0;
		for(i=0; i<n_dias; i++) {
			dados[k].arrecadacao+=receita[i];
			dados[k].dias++;
			//printf("\narrecadacao[%d]: %d, dias: %d", k, dados[k].arrecadacao, dados[k].dias);
			k++;
			for(j=i+1; j<n_dias; j++) {
				a=i;
				while(a!=j+1) {
					dados[k].arrecadacao+=receita[a];
					dados[k].dias++;
					a++;
				}
				//printf("\narrecadacao[%d]: %d, dias: %d", k, dados[k].arrecadacao, dados[k].dias);
				k++;
			}
		}

		for(i=0; i<k; i++) {
			lucro[i] = dados[i].arrecadacao-dados[i].dias*custo_dia;
		}

		sort(lucro, lucro + k);

		if(lucro[k-1]>0)
			printf("%d\n", lucro[k-1]);
		else
			printf("0\n");

	}






	return 0;
}