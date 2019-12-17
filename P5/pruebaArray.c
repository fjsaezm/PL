principal{
  ini_var
    entero i,n,f,f1,f2;
    entero fib[100];
    entero result [100];
  fin_var

  salida<< "introduce el número n-->>: ";
  entrada>> n;
  f=0;
  f1=1;
  f2=1;
  i = 0;

  hacer {
    f1=f2;
    f2=f;
    f=f1+f2;
    fib[i]=f;
    i = i+1;
  }hasta (i<n)
  i=0;
  hacer {
     salida<< fib[i];
     i=i+1;
     salida<< " ";
  }hasta (i<n)
  salida<< "\n";

  result = fib+fib;
  i=0;
  hacer {
     salida<< result[i];
     i=i+1;
     salida<< " ";
  }hasta (i<n)


  salida<< "\n";

  result = 2*fib;
  i = 0;
  hacer {
     salida<< result[i];
     i=i+1;
     salida<< " ";
  }hasta (i<n)
}
