#include<bits/stdc++.h>
#define MAX_NUMBER 101

using namespace std;

void generateRandomArray(int n, int a[]){
  for(int i=0;i<n;i++) a[i]=(rand()%MAX_NUMBER);
}

void printArray(int n, int a[]){
  for(int i=0;i<n;i++) cout<<a[i]<<" ";
  cout<<endl;
}

/*Sorting in ascending order.*/
void selectionSort(int n, int a[]){
  for(int i=0;i<n;i++){
    int aux=i;
    for(int j=n-1;j>i;j--)
      if(a[j]<a[aux]) aux=j;
    if(a[i]!=a[aux]) swap(a[i], a[aux]);
  }
}

int main(){
  srand(time(NULL));

  int n;

  cout<<"Enter the size of the array to be sorted: ";
  cin>>n;

  int a[n]; generateRandomArray(n, a);

  cout<<"\nOriginal array order:\n";
  printArray(n, a);

  selectionSort(n, a);
  cout<<"\nArray after Selection Sort:\n";
  printArray(n, a);

  return 0;
}
