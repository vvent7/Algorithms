#include<bits/stdc++.h>

using namespace std;

void hanoi(int n, char origin='A', char temp='B', char destiny='C'){
  if(n<=0) return;

  hanoi(n-1, origin, destiny, temp);
  cout<<"Move "<<n<<" to "<<destiny<<endl;
  hanoi(n-1, destiny, temp, origin);
}

int main(){
  int n;
  cout<<"How many levels do you want in your tower of hanoi?\n";
  cin>>n;

  hanoi(n);

  return 0;
}
