
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
## Descripción formal de la sintaxis del lenguaje usando BNF

```
<Programa> ::= <Cabecera_programa> <bloque>
<bloque> ::= <Inicio_de_bloque>
             <Declar_de_variables_locales>
             <Declar_de_subprogs>
             <Sentencias>
             <Fin_de_bloque>
<Declar_de_subprogs> ::= <Declar_de_subprogs> <Declar_subprog>
|
<Declar_subprog> ::= <Cabecera_subprograma> <bloque>
<Declar_de_variables_locales> ::= <Marca_ini_declar_variables>
                                  <Variables_locales>
                                  <Marca_fin_declar_variables>
|
<Marca_ini_declar_variables> ::= ini_var
<Marca_fin_declar_variables> ::= fin_var

<Cabecera_programa> ::= principal
<Inicio_de_bloque> ::= {
<Fin_de_bloque> ::= }
<Variables_locales> ::= <Variables_locales> <Cuerpo_declar_variables>
                        |  <Cuerpo_declar_variables>

<Cuerpo_declar_variables> ::= <tipo_basico><lista_identificador> ";"
              | <tipo_basico> <identificador>[<numero>]
              | <tipo_basico> <identificador>[<numero>][<numero>]
<Cabecera_subprograma> ::= <tipo_basico> <identificador> (<lista_parametros>)
                        | <tipo_basico><identificador>()  
                        | <tipo_basico>[] <identificador>() 
                        | <tipo_basico> [] <identificador>(<lista_parametros>)
                        | <tipo_basico> [][] <identificador> ()
                        | <tipo_basico> [][] <identificador> (<lista_parametros>)
<Sentencias> ::= <Sentencias> <Sentencia>
                 |  <Sentencia>
<Sentencia> ::= <bloque>
                |  <sentencia_asignacion>
                |  <sentencia_if>
                |  <sentencia_do_until>
                |  <sentencia_entrada>
                |  <sentencia_salida>
                |  <sentencia_return> 
<sentencia_asignacion> ::= <identificador> = <expresion> ";"
                          | <identificador> = <corchetes_digitos> ";"
                          | <identificador> = <corchetes_matriz> ";"
<sentencia_if> ::= si (<expresion>) <sentencia>
                 | si (<expresion>) <sentencia> si_no <sentencia>
<sentencia_do_until> ::= hacer <bloque> hasta (<expresion>)
<sentencia_entrada> ::= <nomb_entrada> <lista_identificador> ";"
<nomb_entrada> ::= entrada >> 
<sentencia_salida> ::= <nomb_salida> <lista_expresiones_o_cadena> ";"
<nomb_salida> ::= salida <<
<sentencia_return> ::= retorno <expresion> ";"
<expresion> ::= ( <expresion> )
                |  <op_unario> <expresion>
                |  <expresion> <op_binario> <expresion>
                |  <identificador>
                |  <constante>
                |  <funcion>
                |  <tipo_basico>

<corchetes_digitos>::= [<lista_digitos>]
                     | [<lista_digitos],<corchetes_digitos>
<corchetes_matriz>::= [<corchetes_digitos>]
<lista_digitos>::= <digito>,<lista_digitos>
                 | <digito>
<op_unario> ::= !
              | ++
              | --
              | +
              | -
<op_binario> ::=  +
                | -
                | *
                | /
                | ==  
                | !=  
                | <  
                | >  
                | <=  
                | >=  
                | &&  
<constante> ::= const <tipo_basico> <identificador> 
               | < const_entero> | <const_real> | <const_booleano> | <const_caracter>
<funcion> ::= <identificador>(<lista_identificador>)
            | <identificador> ()
<tipo_basico> ::= entero
                | booleano
                | real
                | caracter
<lista_identificador> ::= <lista_identificador> , <identificador>
                    | <identificador>
                    | <identificador>[<digito>]
                    | <identificador>[<digito>][<digito>]
                    | <lista_identificador>, <identificador>[<digito>]
                    | <lista_identificador>, <identificador>[<digito>][<digito>]

<lista_parametros> ::= <lista_parametros> , <tipo_basico> <identificador>
                      | <tipo_basico> <identificador>
                      | <tipo_basico> <identificador>[]
                      | <tipo_basico> <identificador>[][]

```

\newpage
```
<num>::= <num><digito>
        | <digito>  
<digito>::= 0 | 1 | ... | 9
<identificador>::= <identificador><letra>
                 | <letra> 

<letra>::= a | ... | z
<alfanumerico>::= <alfanumerico> <letra>
                 | <alfanumerico> <digito> 
                 | <letra>                 
                 | <digito>                



<lista_expresiones_o_cadena>::= <lista_expresiones_o_cadena> <expresiones_cadena>; 
                              | < expresiones_cadena>
<expresiones_cadena>::= <expresion>
                       | <cadena>

<cadena> ::= "cadena de caracteres"
<const_entero>::= <num>
<const_real>::= <num>.<num>
<const_caracter>::= 'caracter'
<const_boolena> ::= verdadero | falso



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
| ;   | -   | >=     | principal   | hasta     | booleano   |
| (   | *   | <=     | si          | retorno   | real       |
| )   | /   | ==     | si_no       | hacer     |            |
|  ,  |     |        |             |           |            |

### Identificación de los tokens

| Token       | Código | Palabra                        | Atributo                                           |
|-------------|--------|--------------------------------|----------------------------------------------------|
| PRINCIPAL   |    256 | principal                      |                                                    |
| INI_BLOQUE  |    257 | {                              |                                                    |
| FIN_BLOQUE  |    258 | }                              |                                                    |
| INI_EXPR    |    259 | (                              |                                                    |
| FIN_EXPR    |    260 | )                              |                                                    |
| COMA        |    261 | ,                              |                                                    |
| OP_BINARIO  |    262 | * / == != <= >= < > &&         | 0:*  1: /  2: == 3: != 4: >= 5: >= 6: > 7: < 8: && |
| VERDADERO   |    263 | verdadero                      |                                                    |
| FALSO       |    264 |         falso                  |                                                    |
| TIPO_BASICO |    265 | entero booleano  Caracter real | 0: entero 1: booleano 2: caracter 3: real          |
| SI          |    266 | si                             |                                                    |
| SI_NO       |    267 | si_no                          |                                                    |
| INI_VAR     |    268 | ini_var                        |                                                    |
| FIN_VAR     |    269 | fin_var                        |                                                    |
| FUNCION     |    270 | funcion                        |                                                    |
| RETORNO     |    271 | retorno                        |                                                    |
| HACER       |    272 | hacer                          |                                                    |
| HASTA       |    273 | hasta                          |                                                    |
| OP_UNARIO   |    274 | & !                            | 0: & 1: !                                          |
| ASIGNACION  |    275 | =                              |                                                    |
             
