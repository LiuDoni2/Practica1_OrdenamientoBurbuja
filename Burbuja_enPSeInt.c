/* Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

int main() {
	int i;
	int j;
	int lista[8];
	int n;
	int temp;
	lista[0] = 64;
	lista[1] = 34;
	lista[2] = 25;
	lista[3] = 12;
	lista[4] = 22;
	lista[5] = 11;
	lista[6] = 90;
	lista[7] = 17;
	printf("Lista original:%f,%f,%f,%f,%f,%f,%f,%f\n", lista[0], lista[1], lista[2], lista[3], lista[4], lista[5], lista[6], lista[7]);
	n = 8;
	for (i=1; i<=n-1; ++i) {
		for (j=1; j<=n-i; ++j) {
			if (lista[j-1]>lista[j]) {
				temp = lista[j-1];
				lista[j-1] = lista[j];
				lista[j] = temp;
			}
		}
	}
	printf("Lista ordenada:%f,%f,%f,%f,%f,%f,%f,%f\n", lista[0], lista[1], lista[2], lista[3], lista[4], lista[5], lista[6], lista[7]);
	return 0;
}

