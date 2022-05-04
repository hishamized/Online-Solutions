//Coded by Mohammad Hisham
#include<iostream>
using namespace std;
int main(){
   int min = INT_MAX;
   int smallest = min;
   cout<<"\nEnter A, B, C and D\n";
   int arr[4];
   for(int i=0; i<4; i++){
    cin>>arr[i];
   }
   for(int j=0; j<4; j++){
    if(arr[j] < smallest){
        smallest = arr[j];
    }
   }
   cout<<"\nThe smallest value among the four is : "<<smallest;
   return 0;
}
