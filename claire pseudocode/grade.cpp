#include<iostream>
using namespace std;
int main(){
  float GE;
  cout<<"\nEnter the grade equivalent of the student (Range : 0-5).\n";
  cin>>GE;
  if(GE < 0 || GE > 5){
    cout<<"\nInvalid Grade.\n";
    std::exit(42);
  }
  if(GE >= 3.7 && GE <=5){
    cout<<"\nCongratulations! Student has passed.\n";
    cout<<"\nGrade : A\n";
    cout<<"\nPercentage : Between 70% - 100%\n";
  } else if(GE >= 2.7 && GE < 3.7){
    cout<<"\nCongratulations! Student has passed.\n";
    cout<<"\nGrade : B\n";
    cout<<"\nPercentage : Between 60% - 69%\n";
  } else if(GE >= 1.7 && GE < 2.7){
    cout<<"\nCongratulations! Student has passed.\n";
    cout<<"\nGrade : C\n";
    cout<<"\nPercentage : Between 50% - 59%\n";
  } else if(GE >= 0.7 && GE < 1.7){
    cout<<"\nCongratulations! Student has passed.\n";
    cout<<"\nGrade : D\n";
    cout<<"\nPercentage : Between 40% - 49%\n";
  } else if(GE >= 0 && GE < 0.7){
    cout<<"\nStudent has failed. Better luck next time\n";
    cout<<"\nGrade : F\n";
    cout<<"\nPercentage : Between 0% - 39%";
  }
  return 0;
}
