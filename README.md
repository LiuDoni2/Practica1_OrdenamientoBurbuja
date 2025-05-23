<p align="center"> 
<a href="https://github.com/LiuDoni2"><img src="http://readme-typing-svg.herokuapp.com?font=mono&size=17&duration=4000&color=F7B11B&center=falso&vCenter=falso&lines=Algoritmo+de+Ordenamiento+Burbuja;Gracias+por+visitarme:).+劉ī.am/𝕷𝖎̈́𝖚̈́⋆𝕯̈́𝖔̈́𝖓̈́𝖎̈́፨刘" height="90px"></a> 
</p>

<p align="center">
<img src="https://i.imgur.com/xOn3TKn.gif" alt="Animación del Algoritmo de Ordenamiento Burbuja" width="600"/>
</p>

### 📍 Atajos del README
| TEMA | DESCRIPCIÓN | ATAJO |
|------|-------------|-------|
| 📚 **Introducción** | *Descripción del algoritmo* | [ver](#-que-es-el-algoritmo-de-ordenamiento-burbuja) |
| 💻 **C++** | *Implementación en C++* | [ver](#c) |
| 💻 **C** | *Implementación en C* | [ver](#c-1) |
| 📜 **Pseudocódigo** | *Implementación en Pseudocódigo* | [ver](#pseudocódigo-pseint) |
| 🐍 **Python** | *Implementación en Python* | [ver](#python) |
| ❓ **Conclusión** | *Reflexiones finales* | [ver](#conclusión) |

----

## ❓ ¿Qué es el Algoritmo de Ordenamiento Burbuja?  
El **algoritmo de ordenamiento burbuja** es un enfoque sencillo para organizar una secuencia de elementos de manera ascendente o descendente. Aunque su rendimiento es limitado en conjuntos de datos grandes, resulta ideal para comprender los fundamentos de los algoritmos de ordenamiento.  

## ¿Cómo funciona?  
El nombre "burbuja" proviene de la forma en que los elementos más grandes (o más pequeños, según el criterio de ordenamiento) se desplazan progresivamente hacia el extremo opuesto de la lista, similar a cómo las burbujas ascienden a la superficie del agua.  

### Pasos del algoritmo:  
1. **Comparación inicial**: Se analizan pares de elementos contiguos en la lista.  
2. **Intercambio condicional**: Si el orden no es el deseado (por ejemplo, el primer elemento es mayor que el segundo en un orden ascendente), se intercambian sus posiciones.  
3. **Iteración continua**: Este proceso se repite ciclicamente a lo largo de la lista hasta que no se requieran más intercambios, lo que indica que la lista está completamente ordenada.  

## Ejemplo paso a paso  
Supongamos que tienes la lista **[5, 3, 8, 2]** y deseas organizarla de menor a mayor. Aquí cómo se desarrolla el proceso:  

### Primera iteración:  
- **5 y 3**: Como 5 es mayor que 3, se intercambian. Resultado: **[3, 5, 8, 2]**.  
- **5 y 8**: El orden es correcto, no se modifica. Resultado: **[3, 5, 8, 2]**.  
- **8 y 2**: Al ser 8 mayor que 2, se cambian de lugar. Resultado: **[3, 5, 2, 8]**.  
El número 8 ya está en su posición final.  

### Segunda iteración:  
- **3 y 5**: No se intercambian, ya que 3 < 5. Resultado: **[3, 5, 2, 8]**.  
- **5 y 2**: Se cambian porque 5 > 2. Resultado: **[3, 2, 5, 8]**.  
El 5 ahora está en su lugar correcto.  

### Tercera iteración:  
- **3 y 2**: Se intercambian al ser 3 > 2. Resultado final: **[2, 3, 5, 8]**.  
La lista está completamente ordenada.  

## Características del algoritmo  
- **Fácil de comprender**: Su lógica es intuitiva y accesible para principiantes.  
- **Baja eficiencia**: En promedio y en el peor caso, tiene una complejidad de **O(n²)**, lo que la hace inadecuada para grandes volúmenes de datos.  
- **No requiere memoria adicional**: Opera directamente sobre la lista original, sin necesidad de espacio extra.  

## Ventajas y Desventajas  
### Ventajas:  
- **Sencillez de programación**: Su lógica es directa y requiere pocos pasos para codificarlo, lo que lo hace accesible incluso para principiantes.  
- **Aplicabilidad limitada pero útil**: Es funcional para conjuntos de datos pequeños o como herramienta pedagógica para comprender los fundamentos de los algoritmos de ordenamiento.  
- **Intuitivo**: Su funcionamiento es fácil de visualizar, ya que simula un proceso de "flotación" de elementos.  

### Desventajas:  
- **Baja eficiencia en grandes volúmenes**: Su complejidad temporal de **O(n²)** lo hace inadecuado para listas extensas, ya que el tiempo de ejecución crece de forma cuadrática con el tamaño de los datos.  
- **Operaciones redundantes**: En el peor caso, realiza comparaciones y cambios innecesarios, incluso cuando la lista ya está parcialmente ordenada.  
- **No optimizado para escenarios reales**: Su simplicidad se traduce en un rendimiento pobre frente a algoritmos más avanzados como QuickSort o MergeSort, especialmente en aplicaciones que manejan grandes cantidades de información.  

# 💻 Implementaciones en Diferentes Lenguajes

## Algoritmo en C++

``` cpp
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
``` 

### 1. **Librerías necesarias**  
- **`#include <iostream>`**:  
  Permite usar funciones de entrada/salida como `cin` (leer datos del usuario) y `cout` (mostrar resultados en la consola).  
- **`#include <vector>`**:  
  Facilita el uso de **vectores**, estructuras dinámicas que almacenan elementos y permiten ajustar su tamaño durante la ejecución.  
- **`#include <algorithm>`** *(opcional pero recomendado)*:  
  Contiene la función `std::swap()` para intercambiar valores. Aunque algunos compiladores la reconocen sin esta librería, incluirla garantiza compatibilidad.

### 2. **Uso del espacio de nombres `std`**  
- **`using namespace std;`**:  
  Simplifica el código al evitar escribir `std::` antes de funciones como `cout`, `cin` o `vector`.  
  *Nota:* En proyectos grandes, se prefiere evitar esta directiva para evitar conflictos de nombres.
  
---

### Conceptos Clave  
#### 1. **Vectores en C++**  
- **Dinamismo**: A diferencia de los arreglos estáticos, los vectores ajustan su tamaño automáticamente.  
- **Métodos útiles**:  
  - `size()`: Devuelve el número de elementos.  
  - `push_back()`: Añade un elemento al final.  
  - `at()`: Accede a un elemento con verificación de límites.  

#### 2. **Paso por Referencia**  
- Al pasar el vector como `std::vector<int>&`, cualquier cambio dentro de la función afecta directamente al vector original. Esto es eficiente y evita copias innecesarias.  

#### 3. **Intercambio de Valores**  
- **`std::swap(a, b)`**:  
  Intercambia los valores de `a` y `b`. Es clave para el algoritmo de burbuja.  

#### 4. **Ciclos (Bucles)**  
- **`for`**:  
  - En `main`, se usa para leer datos del usuario.  
  - En `burbuja`, se usa para comparar y ordenar elementos.  
- **Optimización**:  
  Se puede mejorar el algoritmo añadiendo una variable `bool` para detectar si se realizaron intercambios en una pasada, terminando el bucle si la lista ya está ordenada.  

---

### Ventajas y Limitaciones de la Implementación

### **Ventajas**  
1. **Interactividad con el usuario**  
   - El programa permite que el usuario ingrese los datos a ordenar, lo que lo hace flexible y útil para casos prácticos.  
   - La lectura de valores mediante `cin` y la visualización con `cout` facilitan la comprensión del flujo de datos.  

2. **Simplicidad y accesibilidad**  
   - La lógica del algoritmo es clara y directa, ideal para principiantes que aprenden a manejar estructuras de control como bucles y condicionales.  
   - El código es fácil de modificar, por ejemplo, para cambiar el orden (ascendente/descendente) o agregar funcionalidades adicionales.  

3. **Uso de estructuras modernas de C++**  
   - **Vectores (`std::vector`)**: Permiten manejar listas dinámicas sin preocuparse por tamaños fijos, lo que es más práctico que los arreglos tradicionales.  
   - **Funciones estándar**:  
     - `std::swap()` para intercambiar elementos.  
     - `push_back()` para agregar valores al vector.  
     - `for` con rango (`for (int num : lista)`) para iterar de forma concisa.

4. **Claridad del código**  
   - La estructura modular (función `burbuja` separada de `main`) mejora la legibilidad y facilita la reutilización del algoritmo en otros proyectos.

### **Limitaciones**  
1. **Complejidad temporal elevada**  
   - El algoritmo tiene una complejidad de **O(n²)** en el peor y promedio de los casos, lo que lo hace ineficiente para listas grandes.  
   - Ejemplo: Si se ordenan 1000 elementos, se realizarán aproximadamente **1,000,000 de operaciones**, lo que puede causar retrasos significativos.  

2. **Falta de optimizaciones**  
   - **No detecta listas ya ordenadas**: Incluso si la lista está parcialmente ordenada, el algoritmo completará todas las pasadas, realizando comparaciones innecesarias.  
   - **Mejora posible**: Añadir una variable `bool` (por ejemplo, `intercambiado`) para verificar si hubo cambios en una pasada. Si no se realizaron intercambios, el algoritmo puede terminar anticipadamente.

3. **Uso de memoria adicional (en algunos casos)**  
   - Aunque el algoritmo es **in-place** (no requiere memoria extra significativa), en implementaciones no optimizadas se podrían generar copias innecesarias del vector.  

4. **No es escalable**  
   - Para aplicaciones reales con grandes volúmenes de datos, algoritmos como **QuickSort** o **MergeSort** (con complejidad **O(n log n)**) son preferibles.  

## Algoritmo en C

``` c
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
``` 

### 1. **Librerías necesarias**  
- **`#include <stdio.h>`**:  
  Esta librería proporciona funciones esenciales para la entrada y salida de datos, como `printf` (mostrar mensajes en la consola) y `scanf` (leer valores ingresados por el usuario).  
- **`#include <stdlib.h>`**:  
  Permite gestionar memoria dinámica mediante funciones como `malloc` (asignar espacio en memoria) y `free` (liberar memoria utilizada).  

### 2. **Uso de la función `burbuja`**
La función `burbuja` es la que implementa el **algoritmo de ordenamiento burbuja**. Este algoritmo compara los elementos adyacentes de un arreglo y los intercambia si están en el orden incorrecto. La función tiene dos bucles anidados:
- **Bucles anidados**:  
  - El bucle externo (`i`) controla el número de pasadas.  
  - El bucle interno (`j`) compara y ordena elementos adyacentes.  
- **Intercambio con variable temporal**:  
  Se usa una variable auxiliar (`temp`) para almacenar temporalmente un valor durante el intercambio.  .

### 3. **Función `main`**
La función `main` es la que coordina la ejecución del programa. Aquí es donde:
- **Asignación dinámica**:  
  Se usa `malloc` para crear un arreglo cuyo tamaño se define en tiempo de ejecución.  
- **Lectura y visualización**:  
  `scanf` captura los valores del usuario, y `printf` muestra la lista antes y después del ordenamiento.  
- **Liberación de memoria**:  
  `free(arreglo)` evita fugas de memoria al finalizar el programa.  

---

### Conceptos Clave  
#### 1. **Memoria Dinámica en C**  
- **`malloc`**:  
  Asigna memoria en tiempo de ejecución, ideal para arreglos cuyo tamaño no se conoce de antemano.  
- **`free`**:  
  Libera la memoria asignada, previniendo fugas y optimizando el uso de recursos.  

#### 2. **Intercambio de Valores**  
- En el algoritmo de burbuja, los elementos se comparan y se intercambian si están en el orden incorrecto.  
- Ejemplo:  
  ```c
  temp = arreglo[j];
  arreglo[j] = arreglo[j + 1];
  arreglo[j + 1] = temp;
  ```  

#### 3. **Funciones de Entrada/Salida**  
- **`scanf`**:  
  Lee datos del teclado, como el número de elementos o los valores del arreglo.  
- **`printf`**:  
  Muestra resultados en la consola, facilitando la verificación del proceso.  

#### 4. **Bucles en C**  
- **`for`**:  
  - En `main`, se usa para leer y mostrar elementos.  
  - En `burbuja`, se usa para comparar y ordenar el arreglo.  
- **Optimización posible**:  
  Añadir una variable `bool` para detener el algoritmo si no se realizan intercambios en una pasada.  

#### 5. **Manejo de Punteros**  
- El arreglo se pasa como un puntero (`int *arreglo`) a la función `burbuja`, permitiendo modificarlo directamente.  
---

### Ventajas y Limitaciones de la Implementación

#### **Ventajas**  
- **Flexibilidad con memoria dinámica**:  
  Permite manejar arreglos cuyo tamaño se define en tiempo de ejecución, ideal para entradas variables.  
- **Simplicidad del código**:  
  La lógica es clara y fácil de entender, adecuada para principiantes.  
- **Control sobre recursos**:  
  El uso de punteros y `malloc`/`free` ofrece mayor control sobre la gestión de memoria.  

### Limitaciones:
- **Complejidad temporal elevada**:  
  Con una complejidad de **O(n²)**, el algoritmo es ineficiente para grandes datasets.  
- **Falta de optimizaciones**:  
  No detecta si la lista ya está ordenada, realizando comparaciones innecesarias.  

## Pseudocódigo (Pseint)

``` psc
Algoritmo OrdenamientoBurbuja
	Dimensionar lista(5)
	Para i<-1 Hasta 5 Hacer
		Escribir 'Ingresa el número en la posición ', i, ': '
		Leer lista[i]
	FinPara
	Escribir 'Lista original:', lista[1], ',', lista[2], ',', lista[3], ',', lista[4], ',', lista[5]
	OrdenarBurbuja(lista,5)
	Escribir 'Lista ordenada:', lista[1], ',', lista[2], ',', lista[3], ',', lista[4], ',', lista[5]
FinAlgoritmo

Función OrdenarBurbuja(lista,n)
	Definir i, j, temp Como Entero
	Para i<-1 Hasta n-1 Hacer
		Para j<-1 Hasta n-i Hacer
			Si lista[j]>lista[j+1] Entonces
				temp <- lista[j]
				lista[j] <- lista[j+1]
				lista[j+1]<-temp
			FinSi
		FinPara
	FinPara
FinFunción
``` 

### 1. **Incluir las instrucciones básicas**
En este pseudocódigo, la estructura general del algoritmo es simple y consiste en solicitar al usuario 5 números, ordenarlos mediante el algoritmo de burbuja, y luego mostrar la lista antes y después del ordenamiento.

#### Definición de la lista
El pseudocódigo comienza con la declaración de una lista de tamaño fijo, en este caso, de 5 elementos. La dimensión de la lista es establecida como una constante en el inicio, lo que limita la flexibilidad, ya que solo se pueden manejar 5 elementos.

#### Solicitar los números al usuario
A continuación, se utiliza un ciclo para solicitar al usuario que ingrese 5 números, uno por uno. La función **`Escribir`** se emplea para mostrar un mensaje indicándole al usuario que ingrese un número en cada posición de la lista. Luego, la función **`Leer`** captura el número ingresado y lo almacena en el arreglo en la posición correspondiente.

#### Mostrar la lista original
Una vez que el usuario ha ingresado todos los números, se muestra la lista tal como fue ingresada, es decir, antes de aplicar cualquier ordenamiento.

#### Ordenar la lista utilizando el algoritmo de burbuja
El algoritmo de burbuja se implementa en la función **`OrdenarBurbuja`**, que toma la lista y su tamaño como parámetros. Esta función realiza el proceso de comparar los elementos adyacentes y, si es necesario, intercambiarlos para que los números más grandes "burbujearán" hacia el final de la lista.

#### Mostrar la lista ordenada
Finalmente, se imprime la lista después de que haya sido ordenada, mostrando los números en el orden correcto según el algoritmo de burbuja.

### 2. **Función `OrdenarBurbuja`**

La función **`OrdenarBurbuja`** implementa el clásico algoritmo de ordenamiento burbuja. Este algoritmo consiste en recorrer el arreglo varias veces y comparar elementos adyacentes, intercambiándolos si están en el orden incorrecto. La función realiza lo siguiente:

- Se definen las variables `i`, `j` y `temp`, donde `i` es el índice del ciclo externo y `j` el índice del ciclo interno que compara los elementos adyacentes.
- Se utiliza una variable temporal `temp` para facilitar el intercambio de los elementos cuando sea necesario.
- El ciclo **externo** recorre el arreglo, y el ciclo **interno** realiza las comparaciones y los intercambios de elementos adyacentes si están fuera de orden.

---

### Conceptos Clave 

### 1. **Algoritmo de Ordenamiento Burbuja**
El algoritmo de **burbuja** es uno de los más sencillos de entender, aunque no es muy eficiente para grandes cantidades de datos. En este algoritmo, los elementos del arreglo se comparan de dos en dos y, si están fuera de orden, se intercambian. Este proceso se repite hasta que la lista está completamente ordenada.

### 2. **Estructura de Ciclos (Bucles)**
El pseudocódigo utiliza ciclos **`Para`** para recorrer las posiciones del arreglo:
- El **bucle externo** se encarga de pasar por todo el arreglo, asegurándose de que cada elemento sea comparado.
- El **bucle interno** compara dos elementos adyacentes y realiza un intercambio si es necesario. Este ciclo es esencial para asegurar que los elementos más grandes se "muevan" hacia el final del arreglo.

### 3. **Intercambio de Elementos**
El intercambio de elementos es una parte clave del algoritmo. Si dos elementos están fuera de orden, el algoritmo los intercambia utilizando una variable temporal **`temp`**. Esto permite que los elementos cambien de posición sin perder sus valores.

### 4. **Entrada y Salida de Datos**
En el pseudocódigo, se utiliza la función **`Escribir`** para mostrar mensajes al usuario y **`Leer`** para capturar los datos ingresados por el usuario. Estas funciones permiten interactuar con el programa, pidiendo al usuario que ingrese los números a ordenar y mostrando los resultados antes y después del ordenamiento.

---

### Ventajas y Limitaciones del Algoritmo

### Ventajas:
- **Simplicidad**: El algoritmo de burbuja es fácil de entender y se puede implementar rápidamente, lo que lo hace adecuado para principiantes en la programación.
- **Visualización clara**: El proceso de comparación e intercambio es sencillo de seguir, lo que ayuda a los estudiantes a comprender cómo funcionan los algoritmos de ordenamiento.

### Limitaciones:
- **Ineficiencia para listas grandes**: El algoritmo de burbuja tiene una **complejidad de tiempo \(O(n^2)\)**, lo que lo hace muy lento cuando se trabaja con listas grandes. A medida que el número de elementos aumenta, el tiempo de ejecución crece exponencialmente.
- **Menos eficiente comparado con otros algoritmos**: Aunque es fácil de entender, el algoritmo de burbuja es más lento que otros algoritmos como el **quicksort** o el **mergesort**, que tienen una complejidad de tiempo mucho más eficiente.

## Python

``` python
def burbuja(lista):
    for i in range(len(lista)):
        for j in range(len(lista) - 1):
            if lista[j] > lista[j + 1]:
                lista[j], lista[j + 1] = lista[j + 1], lista[j]
        print(f"Después de la pasada {i + 1}: {lista}")

print("Ordenamiento Burbuja - Bubble Sort")
n = int(input("Ingrese el numero de elementos: "))
lista = [int(input(f"Ingrese el número en la posición {k + 1}: ")) for k in range(n)]

print("Lista original:", lista)
burbuja(lista)
print("Lista ordenada:", lista)
``` 

### 1. **Iniciar el Algoritmo y Función Principal**
El código en Python implementa el algoritmo de ordenamiento burbuja para ordenar una lista de números ingresados por el usuario. Utiliza ciclos **`for`** para recorrer la lista y realizar las comparaciones entre elementos adyacentes. También se utiliza un indicador de intercambio para optimizar el proceso y salir del ciclo si la lista ya está ordenada.

#### Definición de la función `burbuja`
La función **`burbuja`** toma una lista como entrada y la ordena utilizando el algoritmo de burbuja. Dentro de la función:
- Se recorre la lista con un ciclo **`for`** externo que indica cuántas pasadas se deben hacer sobre la lista. Cada pasada mueve el número más grande de la lista hacia el final.
- Un ciclo **`for`** interno compara elementos adyacentes, y si un elemento es mayor que el siguiente, se realiza el intercambio utilizando la asignación de valores simultánea en Python (esto es equivalente a un "swap").
- La variable **`intercambio`** se establece en `True` si se realiza al menos un intercambio durante la pasada. Si no se realiza ningún intercambio, se rompe el ciclo prematuramente, lo que mejora la eficiencia del algoritmo.

#### Interacción con el usuario
El código solicita al usuario que ingrese el número de elementos que desea ordenar. Luego, pide al usuario que ingrese cada uno de los elementos de la lista utilizando una **list comprehension**, que es una forma compacta de crear la lista. Una vez ingresados los números, el código imprime la lista original antes de aplicar el ordenamiento y muestra el resultado después de haber ordenado los números.

### 2. **Funcionamiento del Algoritmo**

El **algoritmo de burbuja** en Python sigue el mismo principio básico que en otros lenguajes:
1. Compara elementos adyacentes de la lista.
2. Si un elemento es mayor que el siguiente, intercambia sus posiciones.
3. Este proceso se repite varias veces, "burbujando" el valor más grande al final de la lista con cada pasada.

**Optimización con la variable `intercambio`:**
- Al principio de cada pasada, la variable **`intercambio`** se establece en **`False`**.
- Si durante una pasada no se realiza ningún intercambio, significa que la lista ya está ordenada, por lo que el ciclo se termina prematuramente con **`break`**.
- Esto evita realizar pasadas innecesarias sobre la lista cuando ya está ordenada, mejorando la eficiencia.

#### Impresión de las pasadas
Durante cada pasada, se imprime el estado de la lista. Esto permite visualizar cómo el algoritmo va ordenando la lista en cada iteración, lo cual es útil para depurar y comprender el funcionamiento del algoritmo.

---

### Conceptos Clave para Principiantes

### 1. **Ciclos `for`**
El uso de **ciclos `for`** es fundamental en este código:
- El **ciclo externo** controla el número de pasadas que se realizan sobre la lista.
- El **ciclo interno** compara cada par de elementos adyacentes y los intercambia si es necesario.

### 2. **Intercambio de elementos**
La **asignación simultánea** de Python es una característica clave que facilita el intercambio de dos valores en una sola línea:
```python
lista[j], lista[j + 1] = lista[j + 1], lista[j]
```
Esta sintaxis es muy útil para cambiar valores sin necesidad de usar una variable temporal como en otros lenguajes.

### 3. **List Comprehension**
Python ofrece una forma compacta de crear listas mediante list comprehensions, lo que hace más fácil la creación de listas a partir de entradas del usuario:
```python
lista = [int(input(f"Ingrese el elemento {k + 1}: ")) for k in range(n)]
```
Esta línea crea una lista `lista` con los elementos ingresados por el usuario, iterando `n` veces.

---
### Ventajas y Limitaciones del Algoritmo

### Ventajas:
- **Simplicidad**: El algoritmo de burbuja es fácil de entender y adecuado para principiantes. Su lógica es directa y sencilla, lo que permite aprender sobre algoritmos de ordenamiento.
- **Optimización**:  El uso de la variable `intercambio` ayuda a mejorar la eficiencia del algoritmo al evitar iteraciones innecesarias una vez que la lista está ordenada.

### Limitaciones:
- **Ineficiencia para listas grandes**: El algoritmo de burbuja tiene una **complejidad de tiempo \(O(n^2)\)**, lo que lo hace ineficiente cuando se maneja una gran cantidad de elementos.
- **Menos eficiente comparado con otros algoritmos**: A pesar de su simplicidad, el algoritmo de burbuja es más lento que algoritmos más eficientes como quicksort o mergesort, especialmente cuando se trata de listas grandes.

### Conclusión

## Reflexión Final

Hemos explorado la implementación del algoritmo de **ordenamiento burbuja** en diferentes lenguajes de programación: **C++**, **C**, **Python** y **Pseudocódigo**. Cada uno de estos lenguajes presenta características y enfoques únicos, pero todos comparten el mismo propósito: ordenar una lista de números de manera eficiente y comprensible. A través de estos ejercicios, no solo hemos aprendido a implementar un algoritmo clásico de ordenamiento, sino que también hemos adquirido valiosas lecciones sobre cómo abordar problemas de programación y cómo los distintos lenguajes influyen en la implementación de soluciones.

### Aprendizajes Clave

1. **Conceptos Fundamentales de Algoritmos**:
   El algoritmo de burbuja, aunque simple, nos ofrece una visión profunda sobre cómo funcionan los algoritmos de ordenamiento. Nos ha permitido entender el proceso de comparar y ordenar elementos mediante intercambios repetidos. A pesar de su ineficiencia en grandes conjuntos de datos, es fundamental comprender cómo y por qué funciona, lo que nos da una base sólida para abordar algoritmos más complejos en el futuro.

2. **Lenguajes y Estilo de Programación**:
   A través de la implementación en diferentes lenguajes, desde el pseudocódigo hasta los lenguajes de programación reales, pudimos apreciar las diferencias en la sintaxis y los paradigmas. Por ejemplo:
   - **C++** nos ofreció la flexibilidad de trabajar con punteros y la gestión manual de memoria, lo que es útil para desarrollar un control preciso sobre los datos.
   - **C** mostró cómo interactuar de manera eficiente con la memoria y cómo manejar la asignación dinámica utilizando `malloc` y `free`, lo cual es crucial para el desarrollo en sistemas más cercanos al hardware.
   - **Python**, por su parte, se destacó por su sintaxis concisa y su enfoque en la legibilidad del código, con herramientas como las **list comprehensions** y la **asignación simultánea**, lo que hace que las implementaciones sean mucho más limpias y rápidas de escribir.
   - El **pseudocódigo** nos permitió conceptualizar y planificar la lógica del algoritmo sin preocuparnos por las complejidades de la sintaxis, lo cual es útil para la fase inicial del diseño de cualquier programa.

3. **Optimización y Mejora**:
   Se enfatizó la importancia de la optimización en los algoritmos. Aunque el algoritmo de burbuja es educativo y fácil de entender, es fundamental ser consciente de su ineficiencia en listas grandes. Gracias a la introducción de la variable `intercambio`, aprendimos cómo mejorar su rendimiento minimizando las pasadas innecesarias. Este concepto de **optimización** es algo que se aplica a todos los algoritmos y es un aspecto clave de la programación.


<p align="center">
<img src="https://i.imgur.com/iIkvbtg.gif" alt="GIF Gráfico del Algoritmo" width="600"/>
</p>
