#include <iostream>

/*

  N -> long long
  calcular los divisores primos:
  calcular el divisor
  verificar si es primo
 */

int main(void)
{
  const long long N = 600851475143;
  //const long long N = 50;
  for (long long ii = 1; ii < N; ii++ ){ //encontramos el mayor divisor
    if(N%ii == 0){
      // verificar si es primo
      // std::cout << ii << std::endl;
      long long largedivisor = N/ii;  // encontramos el mayor divisor
      bool isprime = true; //suponemos que  es primo (bandera)
      for(long long jj = 2; jj < largedivisor; jj++ ){ // buscamos si tiene un divisor diferente de 1 y el mismo
	if (largedivisor%jj == 0) {                   // si lo encuentra, cambiamos la bandera de largedivisor
	  isprime = false;
	  break;
	}
	
      }
      
      if (isprime){
	std::cout << largedivisor << std::endl;
	break;
      }
    }
  }
  
  return 0;
}
