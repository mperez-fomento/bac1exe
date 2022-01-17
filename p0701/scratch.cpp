#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cmath>


int next_even(int n)
{
  return 2*(n/2) + 2;
}

int next_odd(int n)
{
  return 2*((n+1)/2) + 1;
}

int main()
{
  int x {5};
  std::cout << next_even(next_odd(x)) << next_odd(next_even(x)) << "\n";
}
