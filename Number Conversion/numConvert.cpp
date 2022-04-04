//Coded by Mohammad Hisham
#include <iostream>
#include<string>
#include<vector>
#include<sstream>
#include<limits>
#include <bits/stdc++.h>
#include <conio.h>
using namespace std;



void decToBinary(int decNum, int num, std::vector <int> rem){
           //Conversion of Decimal To Binary
    int i=0;
    for(i=0; decNum!=0 ; i++){

       rem.push_back(decNum%2);
       decNum = decNum/2;
    }
     reverse(rem.begin(), rem.end());
      cout<<"\n\nThe binary representation of the decimal number "<<num<<" is given as follows\n\n";
     for(int i=0; i < rem.size(); i++)
     std::cout << rem.at(i) << ' ';
}

int binToDecimal(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}

int octalToDecimal(int octalNumber)
{
    int decimalNumber = 0, i = 0, rem;
    while (octalNumber != 0)
    {
        rem = octalNumber % 10;
        octalNumber /= 10;
        decimalNumber += rem * pow(8, i);
        ++i;
    }
    return decimalNumber;
}

void DecimalToOctal(int decimalNum) {
   int octalNum = 0, placeValue = 1;
   int dNo = decimalNum;
   while (decimalNum != 0) {
      octalNum += (decimalNum % 8) * placeValue;
      decimalNum /= 8;
      placeValue *= 10;
   }
   cout<<"Octal form of decimal number "<<dNo<<" is "<<octalNum<<endl;
}

void decToHexa(int n)
{
    int m = n;
    // char array to store hexadecimal number
    char hexaDeciNum[100];

    // counter for hexadecimal number array
    int i = 0;
    while (n != 0) {
        // temporary variable to store remainder
        int temp = 0;

        // storing remainder in temp variable.
        temp = n % 16;

        // check if temp < 10
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }

        n = n / 16;
    }

    // printing hexadecimal number array in reverse order
    cout<<"\nThe Hexadecimal form of the decimal number "<<m<<" is : ";
    for (int j = i - 1; j >= 0; j--)
        cout << hexaDeciNum[j];
}

int hexToDecimal(char num[]) {
   int len = strlen(num);
   int base = 1;
   int temp = 0;
   for (int i=len-1; i>=0; i--) {
      if (num[i]>='0' && num[i]<='9') {
         temp += (num[i] - 48)*base;
         base = base * 16;
      }
      else if (num[i]>='A' && num[i]<='F') {
         temp += (num[i] - 55)*base;
         base = base*16;
      }
   }
   return temp;
}

int convertBinarytoOctal(long long binaryNumber)
{
    int octalNumber = 0, decimalNumber = 0, i = 0;

    while(binaryNumber != 0)
    {
        decimalNumber += (binaryNumber%10) * pow(2,i);
        ++i;
        binaryNumber/=10;
    }

    i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}


long long convertOctalToBinary(int octalNumber)
{
    int decimalNumber = 0, i = 0;
    long long binaryNumber = 0;

    while(octalNumber != 0)
    {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }

    i = 1;

    while (decimalNumber != 0)
    {
        binaryNumber += (decimalNumber % 2) * i;
        decimalNumber /= 2;
        i *= 10;
    }

    return binaryNumber;
}

void HexToBin(string hexdec)
{
    long int i = 0;

    while (hexdec[i]) {

        switch (hexdec[i]) {
        case '0':
            cout << "0000";
            break;
        case '1':
            cout << "0001";
            break;
        case '2':
            cout << "0010";
            break;
        case '3':
            cout << "0011";
            break;
        case '4':
            cout << "0100";
            break;
        case '5':
            cout << "0101";
            break;
        case '6':
            cout << "0110";
            break;
        case '7':
            cout << "0111";
            break;
        case '8':
            cout << "1000";
            break;
        case '9':
            cout << "1001";
            break;
        case 'A':
        case 'a':
            cout << "1010";
            break;
        case 'B':
        case 'b':
            cout << "1011";
            break;
        case 'C':
        case 'c':
            cout << "1100";
            break;
        case 'D':
        case 'd':
            cout << "1101";
            break;
        case 'E':
        case 'e':
            cout << "1110";
            break;
        case 'F':
        case 'f':
            cout << "1111";
            break;
        default:
            cout << "\nInvalid hexadecimal digit "
                 << hexdec[i];
        }
        i++;
    }
}

int OctaltoDecimal(int n)
{
    int num = n;
    int dec_value = 0;

    // Initializing base value
    // to 1, i.e 8^0
    int base = 1;

    int temp = num;
    while (temp)
    {

        // Extracting last digit
        int last_digit = temp % 10;
        temp = temp / 10;

        // Multiplying last digit with
        // appropriate base value and
        // adding it to dec_value
        dec_value += last_digit * base;

        base = base * 8;
    }
    return dec_value;
}

// Function to convert decimal
// to hexadecimal
string DectoHexa(int n)
{

    // char array to store
    // hexadecimal number
    char hexaDeciNum[100];

    // counter for hexadecimal
    // number array
    int i = 0;
    while(n != 0)
    {

        // Temporary variable to
        // store remainder
        int temp  = 0;

        // Storing remainder in
        // temp variable.
        temp = n % 16;

        // Check if temp < 10
        if (temp < 10)
        {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else
        {
            hexaDeciNum[i] = temp + 87;
            i++;
        }
        n = n / 16;
    }

    string ans = "";

    // Printing hexadecimal number array
    // in reverse order
    for(int j = i - 1; j >= 0; j--)
    {
        ans += hexaDeciNum[j];
    }
    return ans;
}

long long int hex_to_bin(char hex[])
{
    long long int bin, place;
    int i = 0, rem, val;

    bin = 0ll;
    place = 0ll;

    // Hexadecimal to binary conversion
    for (i = 0; hex[i] != '\0'; i++) {
        bin = bin * place;

        switch (hex[i]) {
        case '0':
            bin += 0;
            break;
        case '1':
            bin += 1;
            break;
        case '2':
            bin += 10;
            break;
        case '3':
            bin += 11;
            break;
        case '4':
            bin += 100;
            break;
        case '5':
            bin += 101;
            break;
        case '6':
            bin += 110;
            break;
        case '7':
            bin += 111;
            break;
        case '8':
            bin += 1000;
            break;
        case '9':
            bin += 1001;
            break;
        case 'a':
        case 'A':
            bin += 1010;
            break;
        case 'b':
        case 'B':
            bin += 1011;
            break;
        case 'c':
        case 'C':
            bin += 1100;
            break;
        case 'd':
        case 'D':
            bin += 1101;
            break;
        case 'e':
        case 'E':
            bin += 1110;
            break;
        case 'f':
        case 'F':
            bin += 1111;
            break;
        default:
            cout << "Invalid hexadecimal input.";
        }

        place = 10000;
    }

    return bin;
}

// Function to convert Binary to Octal
long long int bin_to_oct(long long bin)
{
    long long int octal, place;
    int i = 0, rem, val;

    octal = 0ll;
    place = 0ll;

    place = 1;

    // Binary to octal conversion
    while (bin > 0) {
        rem = bin % 1000;

        switch (rem) {
        case 0:
            val = 0;
            break;
        case 1:
            val = 1;
            break;
        case 10:
            val = 2;
            break;
        case 11:
            val = 3;
            break;
        case 100:
            val = 4;
            break;
        case 101:
            val = 5;
            break;
        case 110:
            val = 6;
            break;
        case 111:
            val = 7;
            break;
        }

        octal = (val * place) + octal;
        bin /= 1000;

        place *= 10;
    }

    return octal;
}

// Function to Convert
// Hexadecimal Number to Octal Number
long long int hex_to_oct(char hex[])
{
    long long int octal, bin;

    // convert HexaDecimal to Binary
    bin = hex_to_bin(hex);

    // convert Binary to Octal
    octal = bin_to_oct(bin);

    return octal;
}


int main(){
    int choice;

    do{

       cout<<"\n\nNumber Conversion System\n";
       cout<<"\n1. Binary to decimal\n";
       cout<<"\n2. Decimal to binary\n";
       cout<<"\n3.Octal to decimal\n";
       cout<<"\n4. Decimal to octal\n";
       cout<<"\n5. Decimal to hexadecimal\n";
       cout<<"\n6. Hexadecimal to decimal\n";
       cout<<"\n7. Binary to octal\n";
       cout<<"\n8. Octal to binary\n";
       cout<<"\n9. Binary to hexadecimal\n";
       cout<<"\n10. Hexadecimal to binary\n";
       cout<<"\n11. Octal to hexadecimal\n";
       cout<<"\n12. Hexadecimal to octal\n";
       cout<<"\n13. Exit\n";

       cout<<"\nEnter your choice...\n";
       cin>>choice;

       switch(choice){

           case 1 : {
               system("cls");
               int decNum;
               vector <int> rem;
               cout<<"Enter the decimal number that you want to convert to binary.\n\n";
               cin>>decNum;
               int num = decNum;
               decToBinary(decNum, num, rem);
               cout<<"\nPress any key to continue.\n";
                     getch();
				break;

           }

           case 2 : {
              system("cls");
              long long n;
              cout << "Enter a binary number: ";
              cin >> n;
              cout << n << " in binary = " << binToDecimal(n) << " in decimal";
              cout<<"\nPress any key to continue.\n";
                     getch();
              break;
           }

           case 3 : {
                system("cls");
                int octalNumber;
                cout << "Enter an octal number: ";
                cin >> octalNumber;
                cout << octalNumber << " in octal = " << octalToDecimal(octalNumber) << " in decimal";
                cout<<"\nPress any key to continue.\n";
                     getch();
                break;
           }

           case 4 : {
               system("cls");
               int decimalNum;
               cout<<"\nEnter the decimal number you wish to convert to octal.\n";
               cin>>decimalNum;
               DecimalToOctal(decimalNum);
               cout<<"\nPress any key to continue.\n";
                     getch();
               break;

           }

           case 5 : {
               system("cls");
               int n;
               cout<<"\nEnter the decimal number you wish to convert to Hexadecimal.\n";
               cin>>n;
               decToHexa(n);
               cout<<"\nPress any key to continue.\n";
                     getch();
               break;


           }

           case 6 : {
              system("cls");
              int dig;
              cout<<"\nEnter the number of digits in your hexadecimal number.\n";
              cin>>dig;
              char num[dig]; //"3F456A"
              cout<<"\nEnter the "<<dig<<" digit Hexadecimal number that you wish to be converted into decimal\n";
              cin>>num;
              cout<<num<<" after converting to deciaml becomes : "<<hexToDecimal(num)<<endl;
              cout<<"\nPress any key to continue.\n";
                     getch();
              break;

           }

           case 7 : {
               system("cls");
               long long binaryNumber;

               cout << "Enter a binary number: ";
               cin >> binaryNumber;

               cout << binaryNumber << " in binary = " << convertBinarytoOctal(binaryNumber) << " in octal ";
               cout<<"\nPress any key to continue.\n";
                     getch();
               break;
           }

          case 8 : {
                system("cls");
                int octalNumber;

                cout << "Enter an octal number: ";
                cin >> octalNumber;

                cout << octalNumber << " in octal = " << convertOctalToBinary(octalNumber) << " in binary";
                cout<<"\nPress any key to continue.\n";
                     getch();
                     break;
          }

          case 9 : {
                //Not using functional programming for this one
                system("cls");
                int binaryNum, hex=0, mul=1, chk=1, rem, i=0;
                char hexDecNum[20];
                cout<<"Enter any Binary Number: ";
                                    cin>>binaryNum;
                        while(binaryNum!=0)
                        {
                            rem = binaryNum%10;
                            hex = hex + (rem*mul);
                            if(chk%4==0)
                            {
                                if(hex<10)
                                    hexDecNum[i] = hex+48;
                                else
                                    hexDecNum[i] = hex+55;
                                mul = 1;
                                hex = 0;
                                chk = 1;
                                i++;
                            }
                            else
                            {
                                mul = mul*2;
                                chk++;
                            }
                            binaryNum = binaryNum/10;
                        }
                        if(chk!=1)
                            hexDecNum[i] = hex+48;
                        if(chk==1)
                            i--;
                        cout<<"\nEquivalent Value in Hexadecimal: ";
                        for(i=i; i>=0; i--)
                            cout<<hexDecNum[i];
                        cout<<endl;
                        cout<<"\nPress any key to continue.\n";
                        getch();
                        break;

                    }
           case 10 : {
               system("cls");
                int k;
                cout<<"\nEnter the number of digits your hexadecimal number shall have.\n";
                cin>>k;
                // Get the Hexadecimal number
                char hexdec[k]; //"1AC5"
                cout<<"\nEnter your "<<k<<" digit hexadecimal number.\n";
                cin>>hexdec;

                // Convert HexaDecimal to Binary
                cout << "\nEquivalent Binary value is : ";
                HexToBin(hexdec);
                cout<<"\nPress any key to continue.\n";
                     getch();
                break;

           }

          case 11 : {
               string hexnum;
                int decnum, octnum;

                // Taking 5123 as an example of
                // Octal Number.
                cout<<"\nEnter the octal number which must be converted to hexadecimal.\n";
                cin>>octnum;

                // Convert Octal to Decimal
                decnum = OctaltoDecimal(octnum);

                // Convert Decimal to Hexadecimal
                hexnum = DectoHexa(decnum);

                cout << "Equivalent Hexadecimal Value = "
                     << hexnum << endl;
                     cout<<"\nPress any key to continue.\n";
                     getch();
                     break;
          }

          case 12 : {
              system("cls");
               int z;
               char hex[z];

               // Get the hexadecimal number
               cout<<"\nEnter the number of digits that your hexadecimal number must have.\n";
               cin>>z;
               cout<<"\nEnter your "<<z<<" digit hexadecimal number.\n";
               cin>>hex;

               // convert hexadecimal to octal
              cout << "Equivalent Octal Value = " << hex_to_oct(hex);
              cout<<"\nPress any key to continue.\n";
              getch();
              break;
          }

       }

    }while(choice != 13);



   return 0;
}
