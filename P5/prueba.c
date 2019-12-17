principal{
  ini_var
    entero i,n,f,f1,f2;
  fin_var

  salida<< "introduce el número n->: ";
  entrada>> n;
  f=0;
  f1=1;
  f2=1;
  i = 0;

  hacer {
    i = i+1;
    f1=f2;
    f2=f;
    f=f1+f2;
    salida<< f;
    salida<< " ";
  }hasta (i<n)
  salida<< "\n";
}
