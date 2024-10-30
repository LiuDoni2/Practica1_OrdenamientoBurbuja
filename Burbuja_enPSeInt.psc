Algoritmo OrdenamientoBurbuja
    Dimension lista[8]
    lista[1] <- 64
    lista[2] <- 34
    lista[3] <- 25
    lista[4] <- 12
    lista[5] <- 22
    lista[6] <- 11
    lista[7] <- 90
    lista[8] <- 17
	
    Escribir "Lista original:", lista[1], ",", lista[2], ",", lista[3], ",", lista[4], ",", lista[5], ",", lista[6], ",", lista[7], ",", lista[8]
	
    Definir n, i, j, temp Como Entero
    n <- 8  
	
    Para i <- 1 Hasta n - 1 Hacer
        Para j <- 1 Hasta n - i Hacer
            Si lista[j] > lista[j + 1] Entonces
                temp <- lista[j]
                lista[j] <- lista[j + 1]
                lista[j + 1] <- temp
            FinSi
        FinPara
    FinPara
	
    Escribir "Lista ordenada:", lista[1], ",", lista[2], ",", lista[3], ",", lista[4], ",", lista[5], ",", lista[6], ",", lista[7], ",", lista[8]
FinAlgoritmo
