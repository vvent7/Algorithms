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
void insertionSort(int n, int a[]){
  for(int i=1, j;i<n;i++){
    int aux=a[i];
    for(j=i-1;j>=0 && a[j]>aux;j--)
      a[j+1]=a[j];
    a[j+1]=aux;
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

  insertionSort(n, a);
  cout<<"\nArray after Insertion Sort:\n";
  printArray(n, a);

  return 0;
}
