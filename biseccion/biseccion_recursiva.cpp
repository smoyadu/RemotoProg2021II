#include <iostream>
#include <cmath>
#include <cstdlib>

double f(double x);
template <class fptr>
double bisection(double xl, double xu, fptr fun, double eps);
double bisection_recursive(double xl, double xu, double eps);

int main(int argc, char **argv)
{
  std::cout.precision(16); std::cout.setf(std::ios::scientific);
 
  const double XL = std::atof(argv[1]);
  const double XU = std::atof(argv[2]);
  const double EPS = std::atof(argv[3]);

  std::cout << "Valor Bisección en clase:" << "\t" << bisection(XL, XU, f, EPS) << "\n"
	    <<  "Valor Bisección recursiva:"  << "\t" << ""  << bisection_recursive(XL, XU, EPS) << std::endl;
  return 0;
}
// función a evaluar
double f(double x){  return 9.81*(68.1)*(1 - std::exp(-x*10/68.1))/x - 40;}

//bisección hecha en clase
template <class fptr>
double bisection(double xl, double xu, fptr fun, double eps)
{
  double xr = 0;
  for( ;  ; ) { // while(true)
    xr = (xl + xu)/2; // bisection
    // encontre la raiz?
    if (std::fabs(fun(xr)) <= eps) break;
    // actualizar los limites
    if (fun(xr)*fun(xl) < 0) {
      xu = xr;
    } else {
      xl = xr;
    }
  }
  return xr;
}

//bisección recursiva
double bisection_recursive(double xl, double xu, double eps)
{
  if (std::fabs(f((xl + xu)/2)) >= eps){
    if (f((xl + xu)/2)*f(xl) < 0){
      xu = (xl + xu)/2;
      return bisection_recursive(xl, xu, eps);
    } else {
      xl = (xl+xu)/2;
      return bisection_recursive(xl, xu, eps);
    }
  }else {
    return (xl + xu)/2;
  }
}
