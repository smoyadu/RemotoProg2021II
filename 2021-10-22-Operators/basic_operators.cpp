#include <iostream>

int main(void)
{
  double x = 9.7, y = -1.87;
  double z = 0;

  z = x + y;
  std::cout << z << std::endl;
  z = x - y;
  std::cout << z << std::endl;
  z = x * y;
  std::cout << z << std::endl;
  z = x / y;
  std::cout << z << std::endl;
  int m = 9/4;
  std::cout << m << std::endl;

  std::cout << 2*3-4/5 << std::endl;

  std::cout << 4%3 << std::endl;
  std::cout << 3%3 << std::endl;
  std::cout << 2%3 << std::endl;
  std::cout << -4%3 << std::endl;
  return 0;
}
