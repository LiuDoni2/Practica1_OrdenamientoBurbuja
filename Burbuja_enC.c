#include <stdio.h>

void burbuja(int lista[], int n) {
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n - i - 1; j++) { 
            if (lista[j] > lista[j + 1]) {
                int temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
            }
        }
    }
}

int main() {
    int lista[] = {64, 34, 25, 12, 22, 11, 90, 17}; 
    int n = sizeof(lista) / sizeof(lista[0]); 

    printf("Lista original: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", lista[i]); 
    }
    printf("\n");

    burbuja(lista, n); 
    printf("Lista ordenada: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", lista[i]); 
    }
    printf("\n");

    return 0; 
}
