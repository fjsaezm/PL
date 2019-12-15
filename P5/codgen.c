principal{
  ini_var
    entero n, curr ;
    entero a23[2][3], a32[3][2],a22[2][2];
  fin_var
  a22 = a23*a32;
  salida<< "introduce numero: ";
  entrada>> n;
  salida<< " ";
  salida<< n;
  salida<< " == ";
  curr = 2 ;
  hacer{
    ini_var
      entero d;
    fin_var
    d = n/curr ;
    si( n == d*curr ){
      salida<< "* ";
      salida<< curr;
      salida<< " ";
      n = n/curr ;
    }si_no
      curr = curr+1 ;
  }hasta ( curr <= n )
  salida<< "\n";

}
