#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long int ull;
typedef long long int ll;

//Recursive Approach
ll binaryPowRec(ll a, ull b){
  if(b==0) return 1;

  ll res = binaryPowRec(a, b>>1);

  if(b & 1)
    return res * res * a;
  else
    return res * res;
}

//Iterative Approach
ll binaryPowIt(ll a, ull b){
  if(a==0) return 0;
  if(a==1 || b==0) return 1;

  ll res=1;

  while(b > 0){
    if(b & 1)
      res *= a;
    a*=a;
    b>>=1;
  }

  return res;
}

void printResult(int a, int b){
  ll r1 = binaryPowRec(a, abs(b)), r2 = binaryPowIt(a, abs(b));

  if(b<0)
    cout<<"\nResult by recursive approach:\n"<<1.0/r1<<
    "\nResult by Iterative approach:\n"<<1.0/r2;
  else
    cout<<"\nResult by recursive approach:\n"<<r1<<
    "\nResult by Iterative approach:\n"<<r2;
}

int main(){
  int a, b;

  cout<<"Enter the base and the exponent of the power, respectively:\n";
  cin>>a>>b;

  if(a==0 && b<0)
    cout<<"Invalid operation\n";
  else
    printResult(a, b);

  return 0;
}
