<p align="center"> 
<a href="https://github.com/LiuDoni2"><img src="http://readme-typing-svg.herokuapp.com?font=mono&size=17&duration=4000&color=F7B11B&center=falso&vCenter=falso&lines=Algoritmo+de+Ordenamiento+Burbuja;Gracias+por+visitarme:).+劉ī.am/𝕷𝖎̈́𝖚̈́⋆𝕯̈́𝖔̈́𝖓̈́𝖎̈́፨刘" height="90px"></a> 
</p>

<p align="center">
<img src="https://i.imgur.com/xOn3TKn.gif" alt="Animación del Algoritmo de Ordenamiento Burbuja" width="600"/>
</p>

<p align="center">
<strong>Gráficamente</strong>
</p>

<p align="center">
<video width="600" controls>
    <source src="https://i.imgur.com/riDqF7F.mp4" type="video/mp4">
</video>
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
El Algoritmo de Ordenamiento Burbuja, conocido como **Bubble Sort**, es un método sencillo y directo para organizar elementos en una lista. Su objetivo principal es ordenar números (o cualquier tipo de datos) en un orden específico, generalmente de menor a mayor.

*¿Cómo funciona?*

La idea básica detrás del algoritmo es comparar elementos adyacentes en la lista. Si el primer elemento es mayor que el segundo, se intercambian. Este proceso se repite a lo largo de toda la lista. Con cada pasada por la lista, el elemento más grande "flota" hacia el final, como una burbuja en el agua.

*Pasos clave del algoritmo:*

- **Comparación**: Se comparan dos elementos adyacentes.
- **Intercambio**: Si están en el orden incorrecto, se intercambian.
- **Repetición**: Este proceso se repite hasta que no se necesiten más intercambios, indicando que la lista está ordenada.

*Características:*

- **Simplicidad**: Es fácil de entender e implementar, lo que lo hace ideal para enseñar conceptos básicos de ordenamiento.
- **Eficiencia**: No es el algoritmo más eficiente para listas grandes, ya que su tiempo de ejecución es relativamente alto en comparación con otros métodos de ordenamiento más avanzados.

## 💻 Implementaciones en Diferentes Lenguajes

### C++

1. **Uso de Bibliotecas:**
   - `#include <iostream>` permite la entrada y salida estándar.
   - `#include <vector>` utiliza la clase `vector`, que permite crear arreglos dinámicos de tamaño variable.

2. **Función `burbuja`:**
   - La función `burbuja` recibe un vector de enteros por referencia, lo que permite modificar el vector original sin hacer copias innecesarias.
   - Utiliza dos bucles anidados para implementar el algoritmo de ordenamiento burbuja:
     - El primer bucle controla las pasadas.
     - El segundo bucle compara elementos adyacentes y los intercambia si están en el orden incorrecto.

3. **Intercambio de Elementos:**
   - Utiliza la función `swap` para intercambiar elementos, lo que simplifica el código y mejora la legibilidad.

4. **Entrada del Usuario:**
   - Se pide al usuario que ingrese la cantidad de números y los números en sí. Incluye una validación para asegurarse de que el número de entradas sea positivo.

5. **Visualización:**
   - Imprime la lista original y la lista ordenada para que el usuario pueda ver el resultado del ordenamiento.

**Características del Código**

- **Simplicidad:** 
  - El algoritmo y su implementación son fáciles de entender, lo que lo hace ideal para principiantes.
  
- **Estructura:** 
  - La separación entre la función de ordenamiento y la función principal (`main`) promueve la claridad y la organización del código.

- **Eficiencia:**
  - Aunque el Algoritmo de Ordenamiento Burbuja es simple, no es el más eficiente para listas grandes, ya que su complejidad temporal es O(n²) en el peor de los casos.

**Peculiaridades**

- **Uso de `vector`:**
  - En lugar de usar arreglos estáticos, el uso de `vector` permite manejar un número variable de elementos sin preocuparse por el tamaño inicial.

- **Interacción con el Usuario:**
  - La implementación incluye interacciones básicas, como solicitudes de entrada y mensajes, lo que mejora la experiencia del usuario.

- **Manejo de Errores:**
  - Se incluye una simple validación para asegurar que el usuario ingrese un número positivo, lo que mejora la robustez del programa.

**Forma**

La estructura del código en C++ se basa en sus características de programación orientada a objetos y su capacidad para manejar datos dinámicamente a través de clases como `vector`. La sintaxis de C++ permite el uso de funciones como `swap` para facilitar tareas comunes. La claridad y organización del código son fundamentales en C++, especialmente cuando se trabaja en proyectos más grandes o en equipos.

### C

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

