#include <iostream>

using namespace std;

int adder(long double a,long double b)
{
  return a+b;
}

int main()
{
  int a,b;
  cin>>a>>b;
  int c = adder(a,b);
  cout<<c<<'\n';
  return 0;
}
