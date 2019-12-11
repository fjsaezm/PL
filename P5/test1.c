principal
{
  ini_var
    entero ve,b,c,d;
    enter·o ve1;
    real vf, g, j;
    caracter vc ;
    booleano vl ;
    entero pe[10], pe2[10][10], ae23[2][3],ae32[3][2],ae22[2][2] ;
    real pf[10], pf2[10][10] ;
    caracter pc[10], pc2[10][10] ;
  fin_var

  entero funcionA (entero a1, real a2, caracter a3)
  {
    ini_var
      entero x1, x2 ;
      real a1;
    fin_var

      caracter funcionB (caracter b1, booleano b2)
      {
        ini_var
          real xf, x2;
        fin_var

        real funcionC (booleano c1, entero c2)
        {
          ini_var
            real x1 ;
          fin_var

          x1 = 1.3 ;
          ve= funcionA(2*ve,2.5,'1');
          ve = ve1*2;
          vf = funcionC(2,4,6,6);

          si ((c2<10)+1)
            c2= c2 - 1;
          si_no
            x1 = 3.1 ;
          retorno x1 ;
        }

        xf= funcionC (verdadero, 10);
        x2= xf*(funcionC(falso,1)-funcionC(verdadero,23))/10.0;

        hacer {x2= x2*xf ; }
        hasta (x2*funcionC(falso,1)-xf<10.0)
      }

      real funcionD (real d1)
      {
        ini_var
          caracter dato ;
          entero valor ;
        fin_var

        caracter funcionE (caracter e1, caracter e2)
        {
          salida<< "introduzca dos caracteres: ";
          entrada>> e1, e2 ;
          si (e1=='a')
            retorno e1 ;
          si_no si (e1=='b')
            retorno e2 ;
          si_no
            retorno ' ' ;
        }

        salida<< "introduzca un valor entero: ";
        entrada>> valor ;
        si (d1 > 1.1 )
        {
          ini_var
            entero dato ;
          fin_var

          dato= 2 ;
          dato= valor*20/dato ;
        }
        si_no {
          valor= valor * 100 ;
          d1= d1/1000.0 ;
        }
        si (d1 > 1.1 ){
        retorno 5.0 ;
        }
        retorno d1;
     }
  }
  ae22=ae23*ae32;
  ae22=2*5;
  ae22= ae23+ae32;
}
