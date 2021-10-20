#include <iostream>

int main()
{
  float x;
  bool f {false};
  double y;
  float z = 1.0e40;
  std::cout << "x es tipo float, x = " << x << "\n";
  std::cout << "f es tipo bool, f = " << f << "\n";
  std::cout << "y es tipo double, con dirección de memoria "<< &y << " y ocupa "  << sizeof(double) << " bytes" << "\n";
  std::cout << "z es tipo float, z = " << z  <<  "\n"; // se imprime inf dado que el valor de inicialización sobrepasa
                                                       // la memoria asignada a una variable float
  
  return 0;
}
 
