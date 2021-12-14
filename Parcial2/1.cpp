# include <iostream>
# include <vector>
# include <cmath>

void fill_vector(std::vector<double> & vec);
void fill_matrix(std::vector<double> & Mat);

// declare la funcion multiply


int main(void)
{
  const int N = 100;
  std::vector<double> A, x, b;
  A.resize(N*N); // modela la matriz con un arreglo unidimensional
  x.resize(N);
  b.resize(N);
  fill_vector(x);
  fill_matrix(A);
  multiply(A, x, b); // guarda los resultados en b
  std::cout.precision(15); std::cout.setf(std::ios::scientific);
  std::cout << b[N/2] << std::endl; // prints : 3.854948192467019e-04
  return 0;
}

void fill_vector(std::vector<double> & vec)
{
  for(int ii = 0; ii < vec.size(); ++ii) {
    vec[ii] = 2*ii;
  }
}

void fill_matrix(std::vector<double> & Mat)
{
  for(int ii = 0; ii < Mat.size(); ++ii) {
    Mat[ii] = 1.0/((ii+2)*(ii+1));
  }
}
// implemente la funcion multiply
