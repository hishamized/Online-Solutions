/*
Implementation of buble sort algorithm using C++ Programming
Author: Mohammad Hisham
*/
#include<iostream>
using namespace std;
void bubbleSort(int[], int);
int main(){
  int x;
  cout<<"Enter the length of your array.\n";
  cin>>x;
  int arr[x], i;
  cout<<"Enter "<<x<<" integers.\n";
  for(i=0; i<x; i++){
    cin>>arr[i];
  }
  cout<<"The array before sorting is : \n";
  for(i =0; i<x; i++){
    cout<<"\t"<<arr[i];
  }
  cout<<"\n\n";
  bubbleSort(arr, x);
  cout<<"The array after sorting is : \n";
  for(i=0; i<x; i++){
    cout<<"\t"<<arr[i];
  }
  return 0;
}

void bubbleSort(int A[], int n){
  int round, i, temp;
  for(round = 1; round < n; round++){
    for(i=0; i < n - round; i++){
        if(A[i] > A[i+1]){
            temp = A[i];
            A[i] = A[i+1];
            A[i+1] = temp;
        }
    }
  }
}
