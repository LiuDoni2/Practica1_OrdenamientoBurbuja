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

El **algoritmo de ordenamiento burbuja** es uno de los métodos más básicos para organizar una lista de elementos en orden (ya sea ascendente o descendente). Aunque no es el más eficiente para listas grandes, es una excelente forma de aprender cómo funcionan los algoritmos de ordenamiento.

## ¿Cómo funciona?

El nombre "burbuja" se debe a que los valores más grandes (o más pequeños, dependiendo del caso) "flotan" hacia el final de la lista, como burbujas en el agua.

### Pasos del algoritmo:
1. Compara dos elementos adyacentes en la lista.
2. Si están en el orden equivocado (por ejemplo, el primero es mayor que el segundo en un orden ascendente), intercámbialos.
3. Repite este proceso para todos los elementos de la lista, una y otra vez, hasta que esté completamente ordenada.

## Ejemplo paso a paso

Imagina que tienes la lista **[5, 3, 8, 2]** y quieres ordenarla en forma ascendente:

### Primera pasada:
- Compara 5 y 3. Como 5 > 3, los intercambias. Lista: **[3, 5, 8, 2]**  
- Compara 5 y 8. Como 5 < 8, no haces nada. Lista: **[3, 5, 8, 2]**  
- Compara 8 y 2. Como 8 > 2, los intercambias. Lista: **[3, 5, 2, 8]**  
Ahora, el número 8 está en su lugar correcto.

### Segunda pasada:
- Compara 3 y 5. Como 3 < 5, no haces nada. Lista: **[3, 5, 2, 8]**  
- Compara 5 y 2. Como 5 > 2, los intercambias. Lista: **[3, 2, 5, 8]**  
Ahora, el número 5 está en su lugar correcto.

### Tercera pasada:
- Compara 3 y 2. Como 3 > 2, los intercambias. Lista: **[2, 3, 5, 8]**  
Ahora, la lista está completamente ordenada.

## Características del algoritmo

- **Simplicidad:** Es fácil de entender y programar.
- **Eficiencia baja:** Su complejidad es \(O(n^2)\) en el peor y promedio de los casos, lo que significa que se vuelve lento para listas grandes.
- **In-place:** No requiere memoria extra significativa, ya que se realiza directamente en la lista original.

## Ventajas y Desventajas

### Ventajas:
- Fácil de implementar.
- Útil para listas pequeñas o como introducción a los algoritmos de ordenamiento.

### Desventajas:
- Muy ineficiente para listas grandes.
- Realiza muchas comparaciones e intercambios innecesarios en el peor de los casos.

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

### 1. **Incluir las librerías necesarias**
- `#include <iostream>`: Esta librería es necesaria para usar las funciones de entrada y salida, como `cin` y `cout`. Permite interactuar con el usuario, como leer datos desde el teclado o imprimir resultados en la consola.
- `#include <vector>`: La librería `vector` nos permite usar un tipo de dato llamado **vector**, que es una estructura de datos dinámica en C++. Un vector es como un arreglo, pero con la ventaja de que su tamaño puede cambiar durante la ejecución del programa.

### 2. **Uso del espacio de nombres `std`**
- `using namespace std;`:
  - Esta línea permite evitar tener que escribir `std::` antes de las funciones o clases estándar de C++, como `cout`, `cin` y `vector`. Esto simplifica el código y lo hace más legible para los principiantes.

### 3. **Definición de la función `burbuja`**
- La función `burbuja` es el corazón del algoritmo de ordenamiento burbuja, que organiza los elementos de un vector en orden ascendente. Utiliza dos bucles anidados para comparar y, si es necesario, intercambiar los elementos adyacentes.

### 4. **Función `main`**
- En la función `main`, se lleva a cabo la interacción con el usuario para ingresar los números a ordenar. Además, se llama a la función `burbuja` para realizar el ordenamiento, y se muestra la lista antes y después de ordenarla.

---

### Conceptos Clave para Principiantes

### 1. **Vectores en C++**
- Un **vector** es un tipo de dato dinámico que puede almacenar una lista de elementos. Su tamaño puede cambiar durante la ejecución del programa.
- Los vectores son más flexibles que los arreglos tradicionales, y son una opción recomendada cuando no sabemos el tamaño exacto de los datos con los que vamos a trabajar.

### 2. **Paso por Referencia**
- Al usar el símbolo `&` en el parámetro de la función (`vector<int>& lista`), estamos pasando la referencia al vector. Esto significa que cualquier cambio que hagamos dentro de la función afectará al vector original que se pasó al llamar la función.

### 3. **Intercambio de Valores**
- La función `swap()` intercambia dos valores. En este caso, intercambiamos elementos en el vector si están en el orden incorrecto.

### 4. **Ciclos (Bucles)**
- El ciclo `for` es una estructura de control que permite repetir un bloque de código varias veces. El bucle `for` en el código es utilizado tanto para leer los números como para ordenar la lista.

---

### Ventajas y Limitaciones de la Implementación

### Ventajas:
- **Interactividad:** Permite al usuario ingresar los datos que quiere ordenar.
- **Simplicidad:** Es fácil de entender y modificar para principiantes.
- **Uso de estructuras modernas de C++:** El código aprovecha vectores y funciones estándar que simplifican su implementación.

### Limitaciones:
- **Complejidad:** La complejidad del algoritmo burbuja es \(O(n^2)\), lo que lo hace lento para listas grandes.
- **Faltan optimizaciones:** Se podrían agregar mejoras, como una verificación para detener el algoritmo si la lista ya está ordenada, lo que reduciría el tiempo de ejecución en algunos casos.

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

**Puntos Importantes del Código**

1. **Inclusión de Bibliotecas:**
   - `#include <stdio.h>` permite realizar operaciones de entrada y salida estándar.
   - `#include <stdlib.h>` se utiliza para la gestión de memoria dinámica con funciones como `malloc` y `free`.

2. **Función `burbuja`:**
   - La función `burbuja` toma un arreglo de enteros y su tamaño como argumentos.
   - Implementa el algoritmo de ordenamiento burbuja utilizando dos bucles anidados:
     - El primer bucle controla las pasadas.
     - El segundo bucle compara y realiza intercambios de elementos adyacentes si están en el orden incorrecto.

3. **Intercambio de Elementos:**
   - Se utiliza una variable temporal (`temp`) para intercambiar los valores de los elementos en el arreglo.

4. **Entrada del Usuario:**
   - Se solicita al usuario que ingrese la cantidad de números y los números en sí. Incluye una validación para asegurarse de que el número de entradas sea positivo.

5. **Visualización:**
   - Imprime la lista original y la lista ordenada para que el usuario pueda ver el resultado.

**Características del Código**

- **Simplicidad:**
  - El algoritmo y su implementación son fáciles de seguir, lo que lo hace adecuado para principiantes.

- **Gestión de Memoria:**
  - Utiliza `malloc` para asignar memoria dinámicamente para el arreglo de enteros, permitiendo trabajar con un número variable de elementos.

- **Eficiencia:**
  - Aunque el algoritmo es simple, su complejidad temporal es O(n²) en el peor de los casos, lo que puede ser ineficiente para listas grandes.

**Peculiaridades**

- **Uso de Punteros:**
  - En lugar de usar un arreglo estático, se utiliza un puntero para manejar un arreglo dinámico. Esto permite flexibilidad en el tamaño del arreglo.

- **Interacción con el Usuario:**
  - Incluye interacciones básicas, como solicitudes de entrada y mensajes, mejorando la experiencia del usuario.

- **Manejo de Errores:**
  - Se verifica que el número ingresado sea positivo, lo que añade robustez al programa.

- **Liberación de Memoria:**
  - Al final del programa, se utiliza `free` para liberar la memoria asignada dinámicamente, evitando fugas de memoria.

**Forma en C**

La estructura del código en C se basa en su enfoque de programación procedural y en el manejo de memoria a través de punteros. A diferencia de C++, C no tiene clases ni objetos, lo que lleva a una implementación más directa y simple. El uso de funciones como `malloc` y `free` es fundamental para la gestión de memoria dinámica en C, y la simplicidad del lenguaje facilita la comprensión del algoritmo.

### Pseudocódigo (Pseint)

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

**Puntos Importantes del Código**

1. **Definición del Algoritmo:**
   - `Algoritmo OrdenamientoBurbuja` define el algoritmo principal para ordenar una lista de números.

2. **Dimensionamiento del Arreglo:**
   - `Dimensionar lista(5)` crea un arreglo con 5 posiciones, donde se almacenarán los números ingresados por el usuario.

3. **Entrada del Usuario:**
   - Un bucle `Para` permite al usuario ingresar los números en las posiciones del arreglo.

4. **Visualización Inicial:**
   - Se imprime la lista original utilizando un formato que muestra todos los elementos ingresados.

5. **Llamada a la Función de Ordenamiento:**
   - `OrdenarBurbuja(lista,5)` llama a la función que implementa el algoritmo de ordenamiento.

6. **Salida de Resultados:**
   - Se imprime la lista ordenada después de aplicar el algoritmo.

**Características del Código**

- **Simplicidad:**
  - La sintaxis de Pseint es sencilla y fácil de entender, lo que la hace ideal para la enseñanza de algoritmos.

- **Estructura Modular:**
  - El uso de funciones permite separar la lógica del ordenamiento de la lógica principal, mejorando la claridad del código.

- **Visualización Intuitiva:**
  - La impresión de la lista original y la lista ordenada está diseñada para ser clara y comprensible.

**Peculiaridades**

- **Indices de Arreglo:**
  - En Pseint, los arreglos suelen comenzar desde 1, a diferencia de otros lenguajes como C o C++, donde comienzan desde 0. Esto puede ser confuso para quienes vienen de otros lenguajes.

- **Uso de Funciones:**
  - La implementación del ordenamiento se realiza en una función separada, lo que permite reutilizar la lógica en otros contextos si es necesario.

- **Formato de Salida:**
  - La forma de escribir los resultados utiliza comas para separar los elementos, lo que mejora la legibilidad.

**Forma en Pseint**

Pseint es una herramienta de pseudocódigo diseñada para facilitar la comprensión de algoritmos y programación. Su estructura está orientada a la simplicidad y a la claridad, permitiendo a los estudiantes centrarse en la lógica del algoritmo sin preocuparse por detalles específicos de un lenguaje de programación en particular. La separación de la lógica en funciones es una buena práctica que se puede aplicar en muchos lenguajes de programación.

### Python

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

**Puntos Importantes del Código**

1. **Definición de la Función `burbuja`:**
   - La función `burbuja` toma como argumento una lista de números y aplica el algoritmo de ordenamiento burbuja sobre ella.

2. **Bucle Externo:**
   - `for i in range(len(lista)):` controla el número de pasadas necesarias sobre la lista.

3. **Bucle Interno:**
   - `for j in range(len(lista) - 1):` compara elementos adyacentes en la lista y realiza el intercambio si están en el orden incorrecto.

4. **Intercambio de Elementos:**
   - Utiliza la asignación múltiple en Python para intercambiar elementos de forma concisa: `lista[j], lista[j + 1] = lista[j + 1], lista[j]`.

5. **Entrada del Usuario:**
   - `n = int(input(...))` solicita al usuario la cantidad de números a ingresar, y luego se construye la lista usando una comprensión de lista.

6. **Visualización:**
   - Imprime la lista original antes y después de aplicar el algoritmo para que el usuario pueda ver los cambios.

**Características del Código**

- **Simplicidad:**
  - La sintaxis de Python es clara y fácil de entender, lo que facilita la lectura y el mantenimiento del código.

- **Uso de Comprensiones de Lista:**
  - La creación de la lista mediante comprensión de lista es una característica poderosa de Python que hace que el código sea más compacto y legible.

- **Interactividad:**
  - Permite al usuario interactuar fácilmente mediante la entrada de datos.

**Peculiaridades**

- **Indexación de Lista:**
  - En Python, las listas se indexan desde 0, lo que es diferente de otros lenguajes donde pueden empezar desde 1.

- **Asignación Múltiple:**
  - La posibilidad de realizar múltiples asignaciones en una sola línea es una característica distintiva de Python que simplifica el intercambio de valores.

- **No Manejo de Errores:**
  - El código no incluye validaciones de entrada, lo que podría ser una mejora para asegurar que el usuario ingrese valores válidos.

**Forma en Python**

Python es un lenguaje de programación de alto nivel que se enfoca en la legibilidad y la simplicidad. Su sintaxis limpia y el uso de características como las comprensiones de lista permiten a los programadores escribir código de forma rápida y eficiente. En Python, la gestión de memoria y los tipos de datos son manejados automáticamente, lo que permite a los desarrolladores centrarse más en la lógica del algoritmo que en los detalles de implementación.

### Conclusión

El Algoritmo de Ordenamiento Burbuja es un método sencillo y educativo para entender los conceptos básicos de ordenamiento y manipulación de datos en programación. A través de ejemplos en diferentes lenguajes —C++, C, Pseint y Python— hemos podido observar cómo este algoritmo puede ser implementado de diversas maneras, manteniendo su esencia.

**Aspectos Clave**

1. **Simplicidad:** 
   - Todos los ejemplos reflejan la naturaleza básica del algoritmo, siendo accesible para principiantes.

2. **Estructura:** 
   - Cada implementación utiliza bucles anidados para comparar y ordenar los elementos, aunque la forma de interacción con el usuario y la gestión de memoria varían entre lenguajes.

3. **Legibilidad y Mantenimiento:**
   - Python destaca por su sintaxis clara y el uso de características avanzadas como comprensiones de listas, mientras que C y C++ ofrecen un enfoque más explícito en la gestión de memoria.

4. **Interacción con el Usuario:**
   - Cada lenguaje presenta diferentes métodos para capturar la entrada del usuario, lo que puede afectar la experiencia del usuario final.

5. **Oportunidades de Mejora:**
   - En todas las implementaciones, se podría considerar la inclusión de manejo de errores y validaciones para hacer los programas más robustos.

**Reflexión Final**

Aprender y entender el Algoritmo de Ordenamiento Burbuja es un primer paso esencial en el camino hacia el dominio de la programación y la resolución de problemas. A medida que los programadores avanzan, pueden explorar algoritmos más eficientes y técnicas de programación más complejas, pero la simplicidad del algoritmo de burbuja siempre servirá como una buena base sobre la cual construir.

<p align="center">
<img src="https://i.imgur.com/iIkvbtg.gif" alt="GIF Gráfico del Algoritmo" width="600"/>
</p>
