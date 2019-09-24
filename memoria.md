# Lenguaje BABAD

## Descripción del lenguaje


La sintaxis de nuestro lenguaje está inspirada en el lenguaje **C**. Esto significa que tomaremos las reglas sintácticas usadas por este lenguaje como referencia para las instrucciones del lenguaje nuevo, respetando en todo momento los requerimientos impuestos al lenguaje. Usaremos el lenguaje **castellano** para las palabras reservadas de nuestro lenguaje. Además, requeriremos que las declaraciones estén enmarcadas.

Vamos a implementar un tipo concreto de estructura de datos en nuestro lenguaje: serán los **arrays 1D y 2D**. No se permitirá la declaración de variables de manera recursiva o mezclada, es decir, no se permitirán arrays 1D de arrays 2D. Este tipo de datos tendrá las operaciones siguientes:

- Acceso a elemento
- Producto
- Suma y resta elemento a elemento
- Producto externo (producto de un array por un escalar)
- Producto de matrices: $$C = A \times B $$ sabiendo que si $A \in \mathcal M_{p\times q}$ y $B \in \mathcal M_{r\times s}$, es necesario que $q=r$ y el resultado será una matriz $C \in \mathcal M_{p\times s}$.
Adicionalmente, contemplaremos las constantes de tipo array.


Esta estructura solo puede tener elementos de los tipos básicos definidos (entero, real, carácter o booleano).La sintaxis del lenguaje permitirá construir expresiones complejas con las operaciones definidas.


Nuestro lenguaje también dispondrá de subprogramas. En concreto existirá la posibilidad de crear **funciones** externas al programa principal. Por último, presentaremos una estructura de control: los **bucles do-until**. 



