//Coded by Mohammad Hisham
#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

//Function to print the vector array
//using vectors because they are like flexible dynamic arrays
void print(std::vector <int> const &a) {
   for(int i=0; i < a.size(); i++)
   std::cout << a.at(i) << ' ';
}

int main(){
   //Conversion of Decimal To Binary
   int decNum;
   int i=0;
   vector <int> rem;
   cout<<"Enter the decimal number that you want to convert to binary.\n\n";
   cin>>decNum;
   int num = decNum;
    for(i=0; decNum!=0 ; i++){

       rem.push_back(decNum%2);
       decNum = decNum/2;
    }
     reverse(rem.begin(), rem.end());
      cout<<"\n\nThe binary representation of the decimal number "<<num<<" is given as follows\n\n";
    print(rem);
   return 0;
}
