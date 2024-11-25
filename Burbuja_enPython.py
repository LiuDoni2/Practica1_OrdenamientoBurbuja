def burbuja(lista):
    for i in range(len(lista)):  
        intercambio = False  
        for j in range(len(lista) - 1 - i):  
            if lista[j] > lista[j + 1]:  
                lista[j], lista[j + 1] = lista[j + 1], lista[j]  
                intercambio = True  
        print(f"Pasada {i + 1}: {lista}")  
        if not intercambio:  
            break  

print("Ordenamiento Burbuja - Bubble Sort")
n = int(input("Ingrese el número de elementos: "))  
lista = [int(input(f"Ingrese el elemento {k + 1}: ")) for k in range(n)]  

print("Lista original:", lista)
burbuja(lista)
print("Lista ordenada:", lista)
