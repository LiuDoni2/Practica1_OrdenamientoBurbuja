def burbuja(lista):
    for i in range(len(lista)):
        for j in range(len(lista) - 1):
            if lista[j] > lista[j + 1]:
                lista[j], lista[j + 1] = lista[j + 1], lista[j]

n = int(input("¿Cuántos números quieres ingresar? "))
lista = [int(input(f"Ingrese el número en la posición {i + 1}: ")) for i in range(n)]

print("Lista original:", lista)
burbuja(lista)
print("Lista ordenada:", lista)
