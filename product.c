//product of two numbers
#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
  float a,b,product;
  cout<<"Enter the value of a \n";
  cin>>a;  //value of a is taken
  cout<<"Enter the value of b \n";
  cin>>b;  //value of b is taken
  product=a*b;
  cout<<"The required product of " <<a<< " and " <<b<< " is " <<setprecision(3)<<product<< " . \n ";
  return 0;
}
