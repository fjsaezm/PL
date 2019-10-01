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
<Cuerpo_declar_variables> ::= <tipo_basico><lista_identificador>
              | <tipo_basico> <identificador>["nº natural"]
              | <tipo_basico> <identificador>["nº natural"]["nº natural"]
<Cabecera_subprograma> ::= <tipo_basico> <identificador> (<lista_parametros>)
                        | <tipo_basico><identificador>()
<Sentencias> ::= <Sentencias> <Sentencia>
                 |  <Sentencia>
<Sentencia> ::= <bloque>
                |  <sentencia_asignacion>
                |  <sentencia_if>
                |  <sentencia_do_until>
                |  <sentencia_entrada>
                |  <sentencia_salida>
                |  <sentencia_return> (si el lenguaje soporta funciones)
<sentencia_asignacion> ::= <identificador> = <expresion>
<sentencia_if> ::= si (<condicion>) <bloque>
                 | si (<condicion>) <bloque> si_no <bloque>
<sentencia_do_until> ::= hacer <bloque> hasta (<condicion>)
<sentencia_entrada> ::= <nomb_entrada> <lista_identificador>
<nomb_entrada> ::= entrada >>
<sentencia_salida> ::= <nomb_salida> <lista_expresiones_o_cadena>
<nomb_salida> ::= salida <<
<sentencia_return> ::= retorno <expresion>
<expresion> ::= ( <expresion> )
                |  <op_unario> <expresion>
                |  <expresion> <op_binario> <expresion>
                |  <identificador>
                |  <constante>
                |  <funcion>
<op_unario> ::= !
              | ++
              | --
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
<identificador> ::= "cadena de caracteres que empieza por letra o _"
<constante> ::= const <tipo_basico> <identificador>
<funcion> ::= <identificador>(<lista_identificador>)
            | <identificador> ()
<tipo_basico> ::= entero
                | booleano
                | real
                | caracter
<lista_identificador> ::= <lista_identificador> , <identificador>
                    | <identificador>
<lista_parametros> ::= <lista_parametros> , <tipo_basico> <identificador>
                      | <tipo_basico> <identificador>

```
