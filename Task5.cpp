#include <iostream>
using namespace std;
void iseven(int number);
int main()
{
 int number;
   while(1)
   {
 cout <<"Enter Number to check if it is even or odd: ";
 cin >>number;
 iseven(number);
    }
}
void iseven(int number)
 {
   if (number%2==0)
   {
     cout <<"The given number is even "<<endl;
   }
    if (number%2!=0)
   {
     cout <<"The given number is odd "<<endl;
   }
 }