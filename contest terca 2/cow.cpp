#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
	int tamanho, i, j, the_one;
	int matriz[99][99], rows[99];

	scanf("%d", &tamanho);

	for(i=0; i<tamanho; i++) {
		for(j=0; j<tamanho; j++) {
			scanf("%d", &matriz[i][j]);
		}
	}

	for(i=0; i<tamanho; i++) {
		sort(matriz[i], matriz[i] + tamanho);
		rows[i] = matriz[i][tamanho/2];
	}

	sort(rows, rows + tamanho);

	printf("%d\n", rows[tamanho/2]);

	return 0;
}