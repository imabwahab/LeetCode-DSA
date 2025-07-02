#include <iostream>
using namespace std;
double myPow(double x, int n)
{
  long ans = 1;
  for (int i= 1; i<=n; i++){
    ans *= x ;
  }

  return ans;
}
int main()
{
  cout<<myPow(3.0, 4);

  return 0;
}