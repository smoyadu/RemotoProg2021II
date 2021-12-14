# include<iostream>
# include<random>
# include<cstdlib>
# include<fstream>
# include<vector>

// declare compute_and_write_pdf
void compute_and_write_pdf(std::vector<double> histo, double a, double b, int N, int NBINS, double DX, double XMI);

int main(int argc, char **argv)
{
  // lea los parametros de la linea de comandos y conviertalos apropiadamente
  // recuerde que std::atof convierte a double, std::atoi a entero

  const double a = std::atof(argv[1]);
  const double b = std::atof(argv[2]);
  const	int N = std::atoi(argv[3]);
  const int NBINS = std::atoi(argv[4]);
  std::vector<double> histo(NBINS);
  // Generación de N números aleatorios con distribución de Cauchy
  std::mt19937 gen(0);
  std::cauchy_distribution<double> distro(a,b);

  //Desarrollo del histograma
  const double XMIN = -5;
  const double XMAX = 5;
  const double DX = (XMAX-XMIN)/NBINS;
  for (int isample = 0; isample < N; ++isample) {
    double x = distro(gen);
    int bin = int((x - XMIN)/DX);
    if(0 <= bin && bin < NBINS)
      histo[bin]++;
  }
  
  //std::vector<double> histo(NBINS);
  compute_and_write_pdf(histo, a, b, N, NBINS, DX, XMIN);
  return 0;
}
// implemente compute_and_write_pdf
void compute_and_write_pdf(std::vector<double> histo, double a, double b, int N, int NBINS, double DX, double XMIN)
{
  
  std::vector<double> PDF(NBINS,0.0);
  for (int isample = 0; isample < N; ++isample) {
    double pdfval = histo[isample]/(N*DX); 
    PDF[pdfval]++;
  }
  
  std::ofstream fout("PDF.txt");
  for (int ibin = 0; ibin < NBINS; ++ibin) {
    double x = XMIN + ibin*DX;
    fout << x << "\t" << PDF[ibin] << "\n";
  }
  fout.close();
  
  //return 0;
}


