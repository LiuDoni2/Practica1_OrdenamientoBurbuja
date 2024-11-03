#include <iostream>
#include <vector>
using namespace std;

void burbuja(vector<int>& lista) {
    for (int i = 0; i < lista.size(); i++)
        for (int j = 0; j < lista.size() - i - 1; j++)
            if (lista[j] > lista[j + 1])
                swap(lista[j], lista[j + 1]); 
}

int main() {
    int n;
    cout << "¿Cuántos números quieres ingresar? ";
    cin >> n;

    if (n <= 0) {
        cout << "Ingresa un número mayor que 0." << endl;
        return 1;
    }

    vector<int> lista(n); 
    for (int i = 0; i < n; i++) {
        cout << "Ingresa el número " << (i + 1) << ": ";
        cin >> lista[i]; 
    }

    cout << "Lista original: ";
    for (int num : lista)
        cout << num << " "; 
    cout << endl;

    burbuja(lista); 

    cout << "Lista ordenada: ";
    for (int num : lista)
        cout << num << " "; 
    cout << endl;

    return 0;
}
