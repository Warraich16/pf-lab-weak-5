#include <iostream>
using namespace std;
void totalamount(string day,int amount);

int main()
 {
   string day;
   int amount;
   while(1)
     {
   cout << "Enter Day: ";
   cin >>day;
   cout <<"Enter total purchase amount: ";
   cin >>amount;
  totalamount(day,amount);
     }  
 }
  
void totalamount(string day,int amount)
  {
    int finalamount;
     if (day=="sunday")
     {
       finalamount=amount-((10*amount)/100);
        cout <<"You have achieved a discount of 10% " <<"Your new bill amount is " <<finalamount <<endl;       
     }
    if  (day!="sunday")
    {
       cout << "Sorry you have not get any discount on this day " <<"Your total bill is "<<amount <<endl;
    }
  }