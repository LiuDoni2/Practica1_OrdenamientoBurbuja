def burbuja(lista):
    for i in range(len(lista)):
        for j in range(len(lista) - 1):
            if lista[j] > lista[j + 1]:
                lista[j], lista[j + 1] = lista[j + 1], lista[j]
        print(f"Después de la pasada {i + 1}: {lista}")

print("Ordenamiento Burbuja - Bubble Sort")
n = int(input("Ingrese el numero de elementos: ")
lista = [int(input(f"Ingrese el número en la posición {k + 1}: ")) for k in range(n)]

print("Lista original:", lista)
burbuja(lista)
print("Lista ordenada:", lista)
