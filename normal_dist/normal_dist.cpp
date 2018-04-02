/* erf example */
#include <stdio.h>      /* printf */
#include <math.h>       /* erf */
#include <iomanip>
#include <iostream>


using namespace std;

double cdf(double x) {
    int mean = 20;
    double stde = 2;
    return (0.5* (1 + erf(x-mean))/(stde * sqrt(2)));
}


int main ()
{
  std::cout << std::setprecision(3) << cdf(19.5) << endl;
  std::cout << std::setprecision(3) << cdf(22) - cdf(20) << endl;
  cout << erf(19.5-20);
  return 0;
}
