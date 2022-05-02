//Coded By Mohammad Hisham
//Github: https://github.com/hishamized
#include<iostream>
using namespace std;
int main(){
  int row;
  int col = 1;
  cout<<"\nEnter the number of students.\n";
  cin>>row;
  int **d_array;
  d_array = new int*[row];
  for(int i = 0;i < row;i++) {
    d_array[i] = new int[col];
  }
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cout<<"Enter score of student "<<i+1<<"    ";
        cin>>d_array[i][1];
        cout<<"Enter equivalent grade (CGPA) of student "<<i+1<<"    ";
        cin>>d_array[i][2];
    }
    cout<<"\n";
  }
  for(int i=0; i<row; i++){
    for(int j=0; j<col; j++){
        cout<<"Score of student "<<i+1<<" is :"<<d_array[i][1];
        cout<<"\tGrade (CGPA) of student "<<i+1<<" is :"<<d_array[i][2]<<endl;
    }
  }
  return 0;
}
