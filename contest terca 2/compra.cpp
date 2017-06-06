#include <stdio.h>
#include <algorithm>
#include <math.h>

using namespace std;

typedef struct {

	long long int preco, n_preferencia;

} CHOCO;

bool acompare(CHOCO lhs, CHOCO rhs) { return lhs.preco < rhs.preco; }


int main() {
	long long int n, grana, i, contador=0, a, b, c;
	CHOCO chocos[100000];

	scanf("%lld %lld", &n, &grana);

	for(i=0; i<n; i++)
		scanf("%lld %lld", &chocos[i].preco, &chocos[i].n_preferencia);

	sort(chocos, chocos+n, acompare);

	for(i=0; i<n; i++) {

		if(grana-chocos[i].preco<0 || grana==0)
			break;

		if(grana-chocos[i].preco*chocos[i].n_preferencia<0) {

			a = grana / chocos[i].preco;	

			grana -= chocos[i].preco*a;
			contador+=a;
		} else {

			grana -= chocos[i].preco*chocos[i].n_preferencia;
			contador+=chocos[i].n_preferencia;


		}
	}

	printf("%lld\n", contador);

	return 0;
}