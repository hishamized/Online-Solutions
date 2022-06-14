#include<iostream>
using namespace std;
int counting(int);
int main(){
   counting(1);
   return 0;
}
int counting(int x){
  cout<<x<<endl;
  if(x < 100){
    //Function Calls itself inside it which is known as recursion
    counting(x + 1);
  }
}
