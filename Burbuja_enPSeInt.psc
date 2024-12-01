Algoritmo OrdenamientoBurbuja
	Dimensionar lista(5)
	
	Para i <- 1 Hasta 5 Hacer
		Escribir 'Ingresa el número en la posición ', i, ': '
		Leer lista[i]
	FinPara
	
	Escribir 'Lista original:', lista[1], ',', lista[2], ',', lista[3], ',', lista[4], ',', lista[5]
	
	OrdenarBurbuja(lista, 5)
	
	Escribir 'Lista ordenada:', lista[1], ',', lista[2], ',', lista[3], ',', lista[4], ',', lista[5]
FinAlgoritmo

SubProceso OrdenarBurbuja(lista, n)
	Definir i, j, temp Como Entero
	
	Para i <- 1 Hasta n-1 Hacer
		Para j <- 1 Hasta n-i Hacer
			Si lista[j] > lista[j+1] Entonces
				temp <- lista[j]
				lista[j] <- lista[j+1]
				lista[j+1] <- temp
			FinSi
		FinPara
	FinPara
FinSubProceso
