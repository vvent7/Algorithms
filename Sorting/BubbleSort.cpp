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
void bubbleSort(int n, int a[]){
  bool swapped;

  do{
    swapped=false;
    for(int i=1;i<n;i++){
      if(a[i-1]>a[i]){
        swap(a[i-1], a[i]);
        swapped=true;
      }
    }
  }while(swapped);
}

int main(){
  srand(time(NULL));

  int n;

  cout<<"Enter the size of the array to be sorted: ";
  cin>>n;

  int a[n]; generateRandomArray(n, a);

  cout<<"\nOriginal array order:\n";
  printArray(n, a);

  bubbleSort(n, a);
  cout<<"\nArray after Bubble Sort:\n";
  printArray(n, a);

  return 0;
}
