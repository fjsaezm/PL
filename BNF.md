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
