<p align="center"> 
<a href="https://github.com/LiuDoni2"><img src="http://readme-typing-svg.herokuapp.com?font=mono&size=17&duration=4000&color=F7B11B&center=falso&vCenter=falso&lines=Algoritmo+de+Ordenamiento+Burbuja;Gracias+por+visitar+este+repositorio." height="90px"></a> 
</p>

<p align="center">
<a href="#"><img title="Ordenamiento Burbuja" src="https://img.shields.io/badge/Si+te+agrada+el+repositorio+apóyame+con+una+🌟-red?colorA=%255ff0000&colorB=%23017e40&style=for-the-badge"></a> 
<img src="https://i.pinimg.com/originals/d4/3c/90/d43c902873d4db8c85974dfd0798030b.gif" height="28px">
</p>  

<p align="center">
<a href="#"><img title="Ordenamiento Burbuja" src="https://img.shields.io/badge/Lee+todo+el+README-red?colorA=%F77F48FF&colorB=%F77F48FF&style=for-the-badge"></a> 
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

## Puntos Importantes del Código

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

## Características del Código

- **Simplicidad:** 
  - El algoritmo y su implementación son fáciles de entender, lo que lo hace ideal para principiantes.
  
- **Estructura:** 
  - La separación entre la función de ordenamiento y la función principal (`main`) promueve la claridad y la organización del código.

- **Eficiencia:**
  - Aunque el Algoritmo de Ordenamiento Burbuja es simple, no es el más eficiente para listas grandes, ya que su complejidad temporal es O(n²) en el peor de los casos.

## Peculiaridades

- **Uso de `vector`:**
  - En lugar de usar arreglos estáticos, el uso de `vector` permite manejar un número variable de elementos sin preocuparse por el tamaño inicial.

- **Interacción con el Usuario:**
  - La implementación incluye interacciones básicas, como solicitudes de entrada y mensajes, lo que mejora la experiencia del usuario.

- **Manejo de Errores:**
  - Se incluye una simple validación para asegurar que el usuario ingrese un número positivo, lo que mejora la robustez del programa.

## Forma 

La estructura del código en C++ se basa en sus características de programación orientada a objetos y su capacidad para manejar datos dinámicamente a través de clases como `vector`. La sintaxis de C++ permite el uso de funciones como `swap` para facilitar tareas comunes. La claridad y organización del código son fundamentales en C++, especialmente cuando se trabaja en proyectos más grandes o en equipos.

### C

- **Particularidad**: Se requiere gestionar la memoria manualmente con `malloc` y `free`, lo que puede ser un reto para los principiantes.
- **Curiosidad**: A diferencia de C++, C es un lenguaje puramente procedural, lo que significa que el enfoque es más directo y centrado en funciones.

### Pseudocódigo (Pseint)

- **Particularidad**: Permite a los estudiantes concentrarse en la lógica del algoritmo sin preocuparse por la sintaxis específica de un lenguaje de programación.
- **Curiosidad**: Pseint es una herramienta educativa que facilita la comprensión de conceptos de programación de manera visual y accesible.

### Python

- **Particularidad**: La sintaxis es limpia y legible, lo que hace que la implementación sea más concisa y fácil de entender.
- **Curiosidad**: Python maneja automáticamente la memoria, lo que permite a los desarrolladores centrarse en la lógica del programa sin preocuparse por la gestión de
