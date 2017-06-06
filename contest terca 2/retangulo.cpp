#include <stdio.h>

typedef struct {
	int x1, x2, y1, y2;
} RETANGULO;

int main() {
	RETANGULO ret;
	int n_meteoritos, i, j, k, caso=1, cont;
	int x, y;

	scanf("%d %d %d %d", &ret.x1, &ret.y1, &ret.x2, &ret.y2);

	while(ret.x1 && ret.y1 && ret.x2 && ret.y2) {

		scanf("%d", &n_meteoritos);

		cont=0;
		for(k=0; k<n_meteoritos; k++) {

			scanf("%d %d", &x, &y);

			if (x>=ret.x1 && x<=ret.x2 && y<=ret.y1 && y>=ret.y2)
				cont++;

		}

		printf("Teste %d\n%d\n\n", caso, cont);

		caso++;

		scanf("%d %d %d %d", &ret.x1, &ret.y1, &ret.x2, &ret.y2);

	}





	return 0;
}