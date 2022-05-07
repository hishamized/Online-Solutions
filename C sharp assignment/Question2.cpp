//Coded By Mohammad Hisham
#include<iostream>
using namespace std;
class Person{
public:
    int age;
    int SetAge(int n){
       int age = n;
       return age;
    }
};
class Teacher: public Person {
public:
    void Explain(){
        string text = "\nHello! Explanation Begins.\n";
        cout<<text;
    }
private:
    string subject;
};
class Student: public Person {
public:
    void GoToClasses(){
        string text = "\nI am going to class.\n";
        cout<<text;
    }
    void ShowAge(){
        cout<<"\nMy age is "<<age<<" years old\n";
    }
};
int main(){
   int age1, age2;
   Person personObj;
   Student studentObj;
   Teacher teacherObj;
   cout<<"\nEnter the age of your student. (21 as per question)\n";
   cin>>age1;
   studentObj.age = personObj.SetAge(age1);
   studentObj.GoToClasses();
   studentObj.ShowAge();
   cout<<"\nEnter the age of your teacher. (30 as per question)\n";
   cin>>age2;
   teacherObj.age = personObj.SetAge(age2);
   teacherObj.Explain();
return 0;
}
