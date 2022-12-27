#include <iostream>
using namespace std;
void iseligible(int age);
int main()
{
 int age;
  while (1)
{ 
 cout <<"ENter your age: ";
 cin >>age;
 iseligible(age); 
 }
}
void iseligible(int age)
   {
      if (age >= 18)
  {
     cout <<"You are elibile for vote: "<<endl;
  }
  if (age < 18)
  {
      cout <<"You are not elibile for vote: "<<endl;
  }
 

    }
