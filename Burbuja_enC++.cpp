#include <iostream>
using namespace std;

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

    cout << "Lista original: ";
    for (int i = 0; i < n; i++) {
        cout << lista[i] << " "; 
    }
    cout << endl;

    burbuja(lista, n); 

    cout << "Lista ordenada: ";
    for (int i = 0; i < n; i++) {
        cout << lista[i] << " "; 
    }
    cout << endl;

    return 0; 
}
