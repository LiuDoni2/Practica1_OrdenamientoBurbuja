#include <stdio.h>
#include <stdlib.h> 

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
    int n;
    printf("¿Cuántos números quieres ingresar? ");
    scanf("%d", &n); 

    if (n <= 0) {
        printf("Por favor, ingresa un número mayor que 0.\n");
        return 1; 
    }
    int *lista = (int *)malloc(n * sizeof(int)); 
    for (int i = 0; i < n; i++) {
        printf("Ingresa el número en la posición %d: ", i + 1);
        scanf("%d", &lista[i]); 
    }
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
    free(lista);
    return 0; 
}
