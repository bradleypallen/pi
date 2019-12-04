#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>

double estimates = 0.;
int n = 10000;
int runs = 10000;

int main()
{
    srand(time(NULL));
    for (int j = 0; j < runs; j++)
    {
      double heights = 0.;
      for (int i = 0; i < n; i++)
      {
        double x = double(rand()) / double(RAND_MAX);
        heights += sqrt(1.0 - pow(x, 2.0));
        heights += sqrt(1.0 - pow((1.0 - x), 2.0));
      }
      estimates += (double(heights) / double(n)) * 2.0;
    }
    double mean_estimate = double(estimates) / double(runs);
    printf("pi = %.7lf\n", mean_estimate);
}
