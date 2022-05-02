//Coded By Mohammad Hisham
//Github: https://github.com/hishamized
#include<iostream>
using namespace std;
int main() {
   int choice;
   cout<<"Menu\n [1] One dimensional array [6 inputs]\n [2] Two dimensional array [2x3 inputs]\n [3] Three dimensional array [3x3x3 inputs]\n";
   cout<<"Enter your choice\n";
   cin>>choice;
   switch(choice){
        case 1:
            {
               cout<<"\nOne dimensional array\n [1] Sum and Average\n [2] Linear Search\n [3] Exit\n\n";
               int choice_1d;
               cout<<"\nEnter your choice\n";
               cin>>choice_1d;
               switch(choice_1d){
               case 1:
                {
                    int array_1d[6];
                    for(int i=0; i<6; i++){
                        cout<<"Enter your score.\n";
                        cin>>array_1d[i];
                    }
                    int sum = 0;
                    int average;
                    for(int j=0; j<6; j++){
                        sum = sum + array_1d[j];
                    }
                    average = sum/6;
                    cout<<"\nThe sum is : "<<sum<<endl;
                    cout<<"\nThe average is : "<<average<<endl;
                    break;
                }
                case 2:
                {
                    int array_1d[6];
                    int search_value;
                    for(int i=0; i<6; i++ ){
                        cout<<"Enter a number\n";
                        cin>>array_1d[i];
                    }
                    cout<<"Enter the search value\n";
                    cin>>search_value;
                    bool found;
                    found = false;
                    for(int j=0; j<6; j++){
                        if(array_1d[j] == search_value){
                            cout<<"Value found at index : "<<j<<endl;
                            found = true;
                        }
                    }
                    if(found == false){
                        cout<<"Value not found! Try again\n";
                    }
                    break;
                }

               case 3:
                exit(0);
                break;

               default:
                cout<<"\nIncorrect choice. Try again.";
                break;

           }
        }
               case 2:
                {
                     cout<<"\nTwo dimensional array\n [1] Sum and Average\n [2] Linear Search\n [3] Exit\n\n";
                     int choice_2d;
                     cout<<"Enter your choice\n";
                     cin>>choice_2d;
                     switch(choice_2d){
                      case 1:
                        {
                            int array_2d[2][3];
                            for(int i=0; i<2; i++){
                                for(int j=0; j<3; j++){
                                    cout<<"Enter the score"<<endl;
                                    cin>>array_2d[i][j];
                                }
                            }
                            int sum = 0;
                            int average;
                            for(int x=0; x<2; x++){
                                for(int y=0; y<3; y++){
                                    sum = sum + array_2d[x][y];
                                }
                            }
                            average = sum/6;
                             cout<<"\nThe sum is : "<<sum<<endl;
                             cout<<"\nThe average is : "<<average<<endl;
                             break;
                        }
                      case 2:
                        {
                            int array_2d[2][3];
                            int search_value;
                            for(int i=0; i<2; i++){
                                for(int j=0; j<3; j++){
                                    cout<<"Enter the score."<<endl;
                                    cin>>array_2d[i][j];
                                }
                            }
                            cout<<"Enter the search value\n";
                            cin>>search_value;
                            bool found;
                            found = false;
                            for(int x=0; x<2; x++){
                                for(int y=0; y<3; y++){
                                    if(array_2d[x][y] == search_value){
                                        cout<<"\nElement found at \nrow : "<<x<<" and \nColumn "<<y<<endl;
                                        found = true;
                                    }
                                }
                            }
                            if(found == false){
                                cout<<"\nElement not found! Try again.";
                            }
                        }
                         case 3:
                             exit(0);
                            break;

                           default:
                            cout<<"\nIncorrect choice. Try again.";
                            break;
                     }
                }

                 case 3:
                    {
                        cout<<"\nThree dimensional array\n [1] Sum and Average\n [2] Linear Search\n [3] Exit\n\n";
                        int choice_3d;
                        cout<<"Enter your choice\n";
                        cin>>choice_3d;
                        switch(choice_3d){
                       case 1:
                        {
                            int array_3d[3][3][3];
                            int sum = 0;
                            int average;
                            cout<<"\Enter the 27 scores\n";
                            for(int i=0; i<3; i++){
                                for(int j=0; j<3; j++){
                                    for(int k=0; k<3; k++){
                                        cout<<"Enter your score\n";
                                        cin>>array_3d[i][j][k];
                                        sum = sum + array_3d[i][j][k];
                                    }
                                }
                            }
                            average = sum/6;
                            cout<<"\nThe sum is : "<<sum<<endl;
                             cout<<"\nThe average is : "<<average<<endl;
                             break;

                        }
                       case 2:
                        {
                            int array_3d[3][3][3];
                            int search_value;
                            bool found;
                            found = false;
                            cout<<"\nEnter the 27 scores\n";
                            for(int i=0; i<3; i++){
                                for(int j=0; j<3; j++){
                                    for(int k=0; k<3; k++){
                                        cout<<"Enter your score\n";
                                        cin>>array_3d[i][j][k];
                                }
                             }
                            }
                            cout<<"\n\nEnter search value.\n\n";
                            cin>>search_value;
                            for(int x=0; x<3; x++){
                                for(int y=0; y<3; y++){
                                    for(int z=0; z<3; z++){
                                        if(array_3d[x][y][z] == search_value);
                                        cout<<"\nItem found at \nrow: "<<x<<"\ncolumn: "<<y<<"\n3D_Cell: "<<z<<endl;
                                        found = true;
                                    }
                                }
                            }
                            if(found == false){
                                cout<<"\nElement not found! Try again...\n";
                            }
                            break;
                        }
                        case 3:
                             exit(0);
                            break;

                           default:
                            cout<<"\nIncorrect choice. Try again.";
                            break;
                      }
                    }


   }
   return 0;
}
