#include <iostream>
using namespace std;
void greaternumber(int firstnumber,int secondnumber);

int main()
 {
 int firstnumber;
 int secondnumber;
    while(1)
     {
 cout <<"Enter first number: " ;
 cin >>firstnumber;
 cout <<"Enter second number: " ;
 cin >>secondnumber;
 greaternumber(firstnumber,secondnumber);
    } 
 }
void greaternumber(int firstnumber,int secondnumber)
  {
     if (firstnumber > secondnumber)
     {
       cout <<"First number is greater than the seond number: "<<endl;
 
     }
      if (firstnumber < secondnumber)
     {
       cout <<"Second number is greater than the first number: "<<endl;
 
     }


  }
 