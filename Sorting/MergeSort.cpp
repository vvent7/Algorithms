#include<bits/stdc++.h>
#define MAX_NUMBER 101
#define SENTINEL 1000000123

using namespace std;

void generateRandomArray(vector<int> &a){
  for(int i=0;i<a.size();i++) a[i]=(rand()%MAX_NUMBER);
}

void printArray(const vector<int> &a){
  for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
  cout<<endl;
}

/*Sorting in ascending order.*/
void mergeSort(vector<int> &a){
  if(a.size()==1) return;

  int mid = a.size()/2;
  vector<int> a1(a.begin(), a.begin()+mid), a2(a.begin()+mid, a.end()); 

  mergeSort(a1); mergeSort(a2);

  a1.push_back(SENTINEL); a2.push_back(SENTINEL);

  for(int i=0, k=0, l=0;i<a.size();i++){
    if(a1[k]<=a2[l]) a[i]=a1[k++];
    else a[i]=a2[l++];
  }
}

int main(){
  srand(time(NULL));

  int n;

  cout<<"Enter the size of the array to be sorted: ";
  cin>>n;

  vector<int> a(n); generateRandomArray(a);

  cout<<"\nOriginal array order:\n";
  printArray(a);

  mergeSort(a);
  cout<<"\nArray after Merge Sort:\n";
  printArray(a);

  return 0;
}