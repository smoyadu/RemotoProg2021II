# include<iostream>
# include<random>
# include<cstdlib>
# include<fstream>
# include<vector>

// declare compute_and_write_pdf


int main(int argc, char **argv)
{
  // lea los parametros de la linea de comandos y conviertalos apropiadamente
  // recuerde que std::atof convierte a double, std::atoi a entero

  double a = // ??
    double b = // ??
    int N = // ??
    int NBINS = // ??
    std::vector<double> histo(NBINS);
  compute_and_write_pdf(histo, a, b, N);
  return 0;
}
// implemente compute_and_write_pdf
