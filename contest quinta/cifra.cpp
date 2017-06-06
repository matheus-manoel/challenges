#include <stdio.h>
#include <string.h>

int main() {
	int casos, desloca, i, j;
	char entrada[51];

	scanf("%d", &casos);

	for(;casos>0; casos--) {

		scanf("%s", entrada);
		scanf("%d", &desloca);

		for(i=0; i<strlen(entrada); i++) {
			j=desloca;
			while(j>0) {
				if(entrada[i]>65)
					entrada[i]--;
				else
					entrada[i]=90;
				j--;
			}
		}

		printf("%s\n", entrada);


	}





	return 0;
}