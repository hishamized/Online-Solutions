//Coded by Mohammad Hisham
#include<iostream>
using namespace std;
int main()
{
    int num[4];
    int product = 1;
    int sum = 0;
    cout<<"\tEnter 4 numbers.\n";
    for(int p=0; p<4; p++){
        cin>>num[4];
    }
    for(int i=0; i<4; i++){
        product = product*num[4];
    }
    sum = product;
    for(int j=0; j<4; j++){
       sum = sum + num[4];
    }
    cout<<"\t\n The required value obtained after adding each number to the product of all 4 numbers is given as : "<<sum<<endl;
    return 0;
}
