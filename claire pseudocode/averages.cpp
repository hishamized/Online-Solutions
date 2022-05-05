//Coded by Mohammad Hisham
#include<iostream>
using namespace std;
int main(){
  float quiz[3];
  float exam;
  float sumQuiz;
  float totalMarks;
  float percentage;
  cout<<"Enter the scores obtained by student out of 16 in 3 quizzes respectively.\n";
  for(int i=0; i<3; i++){
    cin>>quiz[i];
    if(quiz[i] > 16 || quiz[i] < 0){
        cout<<"\nError! The marks per quiz should be in the range 0-16\n";
    }
  }
  for(int j=0; j<3; j++){
    sumQuiz = sumQuiz + quiz[j];
  }
  cout<<"\nEnter the score obtained by student out of 72 in the examinations\n";
  cin>>exam;
  if(exam > 72 || exam < 0){
    cout<<"\nError! The marks in exam should be in the range 0-72\n";
  }
  totalMarks = exam + sumQuiz;
  percentage = (totalMarks/120)*100;
  cout<<"\nThe marks scored by student in 3 quizzes are : "<<sumQuiz<<" out of 48\n";
  cout<<"\nThe marks scored by student examinations are : "<<exam<<" out of 72\n";
  cout<<"\nThe average score of the student combining the 40% weight from Quizzes and 60% weight from examinations is : "<<percentage<<" %"<<endl;
  return 0;
}
