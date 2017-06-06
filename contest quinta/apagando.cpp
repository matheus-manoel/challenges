#include <stdio.h>
#include <vector>

using namespace std;

int main() {
	int digitos_numero, digitos_apagados, i, j, k, ja_apagados;
	vector<char> numero;
	char numero1[100001];

	scanf("%d %d", &digitos_numero, &digitos_apagados);

	while(digitos_numero || digitos_apagados) {
		ja_apagados=0;

		scanf("%s", numero1);
		

		numero.push_back()

		/*for(i=0; i<numero.size(); i++)
			printf("%c", numero[i]);*/
		numero.pop_back();
		printf("\nsize: %lu", numero.size());

		i=0;
		while(ja_apagados<digitos_apagados && i<=numero.size()-2) {
			if(numero[i]>numero[i+1]) {
				numero.erase(numero.begin()+i+1);
				ja_apagados++;
			}
			else if(numero[i]==numero[i+1]) {
				i++;
			}
			else if(numero[i]<numero[i+1]) {
				numero.erase(numero.begin()+i);
				ja_apagados++;
			}
		}

		if(numero.size() > digitos_numero-digitos_apagados) {
			while(digitos_apagados-ja_apagados) {
				numero.pop_back();
				ja_apagados++;
			}

		}

		for(i=0; i<numero.size(); i++)
			printf("%c", numero[i]);
		printf("\n");

		numero.clear();

		scanf("%d %d", &digitos_numero, &digitos_apagados);
	}


	return 0;
}