
---
title: "Lenguaje BABAD"
author: "José María Borrás , Ismael Sánchez , Javier Sáez "
header-includes:
  -  \usepackage[utf8]{inputenc}
  -  \usepackage[T1]{fontenc}
  -  \usepackage[sfdefault,scaled=.85, lining]{FiraSans}
  -  \usepackage{geometry}
  -  \geometry{left=3cm,right=3cm,top=3cm,bottom=3cm,headheight=1cm,headsep=0.5cm}

output:
    pdf_document
---


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


La estructura sintáctica de un programa en nuestro lenguaje será:
```
<Programa> ::= <Cabecera_programa> <bloque>
```

Se podrán definir bloques en cualquier parte, al igual que en el lenguaje de referencia. La estructura sintáctica del bloque es la siguiente:
```
<bloque> ::= <Inicio_de_bloque>
             <Declar_de_variables_locales>
             <Declar_de_subprogs>
             <Sentencias>
             <Fin_de_bloque>
```

Una sentencia cualquiera podrá ser un bloque, por lo que podremos anidar bloques y subprogramas. Los argumentos se pasarán por valor y no se permitirán declaraciones fuera de los bloques. Estas declaraciones deben ir entre marcas de declaración (inicio y fin).

Al igual que en el programa, la estructura sintáctica de un subprograma es:
```
<Declar_subprog> ::= <Cabecera_subprograma> <bloque>
```


## Definición de la semántica en lenguaje natural

El programa está compuesto por una cabecera de programa y un bloque. 

- La *cabecera* estará denotada por la palabra **principal***
- En el *bloque* tendremos varias partes:

  1. Inicio de bloque: Se iniciará con una palabra, en nuestro caso: **{**
  2. Declaración de variables locales: se declararán las variables locales entre dos marcas de declaración, la de inicio que será: **ini_var** y la de fin: **fin_var**
  3. Declaración de subprogramas:  el subprograma (que en nuestro caso es una función)se compone de una cabecera, que  será: **funcion**, y de otro bloque interno. 
  4. Sentencias, que se componen recursivamente de más sentencias. Una sentencia puede ser un bloque, una asignación entre variables, un condicional, un bucle, una entrada o salida, una llamada a una función, una expresión o una sentencia *return*, que marcaremos como **retorno**.
  Una **expresión** podrá ser un operador unario, binario, un identificador, una constante , una función o una variable. Podrá estar (o no) entre paréntesis, y terminarán siempre en un **;**
  
  Si tenemos una lista de parámetros para una función, esta deberá ir entre paréntesis y escrita de la forma: **tipo nombre_variable**,  y separadas por comas.
  El **tipo**, como sabemos podrá ser *entero,real,booleano,caracter*. Si queremos indicar que una variable es un vector, se hará escribiendo detrás de su nombre **[ "dimensión"]**. Si queremos que sea una matriz, escribiremos detrás del nombre **[<"dimensión i"] ["dimensión j"]**
  

## Identificación de los tokens


### Identificación de las palabras

Las palabras identificadas son las siguientes:

| {   | =   | >      | verdadero   | ini_var   | entero     |
| :-: | :-: | :----: | :---------: | :-------: | :--------: |
| }   | +   | <      | falso       | fin_var   | caracter   |
| ;   | -   | >=     | principal   | funcion   | booleano   |
| (   | *   | <=     | si          | retorno   | real       |
| )   | /   | ==     | si_no       | haz       | hasta      |
|  ,  |     |        |             |           |            |

### Identificación de los tokens
