/* Written By Mohammad Hisham */
#include<iostream>
using namespace std;
class Fmain {
  public:
    string fname;
    string lname;
  };

  class second {
 public:
      int firstGrading;
      int secondGrading;
      int thirdGrading;
      int fourthGrading;
  };
int main(){
    Fmain myObj1;
    second myObj2;
    myObj1.fname = "Calire";
    myObj1.lname = "Zianah";
    myObj2.firstGrading = 89;
    myObj2.secondGrading = 88;
    myObj2.thirdGrading = 93;
    myObj2.fourthGrading = 85;
    cout<<"Good day "<<myObj1.fname<<"  "<<myObj1.lname<<" your grades from first grading to fourth grading are :"<<endl;
    cout<<"First Grading : "<<myObj2.firstGrading<<endl;
    cout<<"Second Grading : "<<myObj2.secondGrading<<endl;
    cout<<"Third Grading : "<<myObj2.thirdGrading<<endl;
    cout<<"fourthGrading : "<<myObj2.fourthGrading<<endl;
    return 0;
}
