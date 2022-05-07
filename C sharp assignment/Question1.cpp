//Coded By Mohammad Hisham
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class Admissions {
  public:
    string name;
    float perMat;
    float perInter;
    string groupMat;
    string groupInter;
    string dept;
    int age;
    bool admission;
};
 int main() {
    int n, choice1, choice2, choice3, choice4;
    cout<<"How many students do you want to be checked for registration?\n";
    cin>>n;
    Admissions student[n];
    cout<<"Kindly enter authentic data for the "<<n<<" students\n";
    for(int i=0; i<n; i++){
        cout<<"\nEnter the name of the student with index number : "<<i<<endl;
        cin>>student[i].name;
        cout<<"What is the age of "<<student[i].name<<" ?\n";
        cin>>student[i].age;
        if(student[i].age <18){
           student[i].admission = 0;
           cout<<"Sorry! "<<student[i].name<<" is NOT eligible for admission at our university because of age constraints\n Better luck next time.\n";
           continue;
        }
        cout<<"What was the percentage of "<<student[i].name<<" in matriculation?\n";
        cin>>student[i].perMat;
        cout<<"What was the percentage of "<<student[i].name<<" in intermediate?\n";
        cin>>student[i].perInter;
        cout<<"What was the group chosen by "<<student[i].name<<" in Matriculation?\n ( [1] Biological Science or [2] Computer Science)\n Enter your choice\n";
        cin>>choice1;
        if(choice1 == 1){
            student[i].groupMat = "Biological Science";
        } else if (choice1 == 2){
           student[i].groupMat = "Computer Science";
        } else {
           cout<<"Error! Invalid Choice\n";
        }
        cout<<"What is the group chosen by "<<student[i].name<<" in Intermediate? ( [1] Pre-Engineering or [2] Pre-Medical)\n Enter your choice.\n";
        cin>>choice2;
           if(choice2 == 1){
            student[i].groupInter = "Pre-Engineering";
        } else if (choice2 == 2){
           student[i].groupInter = "Pre-Medical";
        } else {
           cout<<"Error! Invalid Choice\n";
        }
        cout<<"What is the department "<<student[i].name<<" is applying for?\n";
        if(student[i].groupInter == "Pre-Engineering"){
            cout<<"Choose one among the following departments.\n [1] Business Administration\n [2] Computer Science\n [3] Electronics\n [4] Mathematics\n [5] Physics\n\n Enter your choice.\n";
            cin>>choice3;
            switch(choice3){
            case 1:
                student[i].dept == "Business Administration";
                break;
            case 2:
                student[i].dept == "Computer Science";
                break;
            case 3:
                student[i].dept == "Electronics";
                break;
            case 4:
                student[i].dept == "Mathematics";
                break;
            case 5:
                student[i].dept == "Physics";
                break;
            default:
                cout<<"Error! Invalid Choice";
            }
        }
         if(student[i].groupInter == "Pre-Medical"){
            cout<<"Choose one among the following departments.\n [1] Pharmacy\n [2] Botany\n [3] Zoology\n [4] Biochemistry\n [5] Chemistry\n\n Enter your choice.\n";
            cin>>choice4;
            switch(choice3){
            case 1:
                student[i].dept == "Pharmacy";
                break;
            case 2:
                student[i].dept == "Botany";
                break;
            case 3:
                student[i].dept == "Zoology";
                break;
            case 4:
                student[i].dept == "Biochemistry";
                break;
            case 5:
                student[i].dept == "Chemistry";
                break;
            default:
                cout<<"Error! Invalid Choice";
            }
         }
        if(student[i].age > 17 && student[i].perMat > 69 && student[i].perInter > 59){
            student[i].admission = 1;
            cout<<"Conratulations! "<<student[i].name<<" is eligible for admission at our university\n";
        } else {
           student[i].admission = 0;
           cout<<"Sorry! "<<student[i].name<<" is NOT eligible for admission at our university\n Better luck next time.\n";
        }
        cout<<"\nPress any key to continue!";
        getch();
        system("CLS");
    }
    cout<<"\nFollowing is the list of students eligible for admission at our university : \n";
    for(int j=0; j<n; j++){
        if(student[j].admission == 1){
            cout<<j<<". "<<student[j].name<<endl;
        }
    }
     cout<<"\nIneligible Students are as follows (Better luck next time) : \n";
    for(int z=0; z<n; z++){
        if(student[z].admission == 0){
            cout<<z<<". "<<student[z].name<<endl;
        }
    }
   return 0;
 }
