//Coded By Mohammad Hisham
#include<iostream>
#include<math.h>
using namespace std;
int main(){
   float first;
   float second;
   int choice;
   cout<<"\nEnter the first number.\n";
   cin>>first;
   cout<<"\nEnter the second number.\n";
   cin>>second;
   cout<<"\nMenu\n \n[1] Addition\n \n[2] Subtraction\n \n[3] Multiplication\n \n[4] Division\n \n[5] Exponent\n \n[6] Exit\n";
   cout<<"\nEnter your choice.\n";
   cin>>choice;
   switch(choice){
  case 1:
    {
        int sum = first + second;
        cout<<"\t"<<sum;
    }
    case 2:
    {
        int diff = first - second;
        cout<<"\t"<<diff;
    }
    case 3:
    {
        int pro = first*second;
        cout<<"\t"<<pro;
    }
    case 4:
    {
        int rat = first/second;
        cout<<"\t"<<rat;
    }
    case 5:
    {
        int exp = pow(first, second) ;
        cout<<"\t"<<exp;
    }
    case 6:
        {
            exit(42);
        }
    default:
        cout<<"\nInvalid choice. Try again!\n";
   }
   return 0;
}
