
#include<iostream>
using namespace std;

long int factorial(long int n)
{
      if(n==0 || n==1)
      {
         return 1;
      }
      else{
            return n*factorial(n-1);
      }
}
int main()
{

long int n;
  cin>>n;

    factorial(n);
   
    cout<<factorial(n);
    return 0;
    
}