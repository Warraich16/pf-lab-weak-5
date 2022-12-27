#include <iostream>
using namespace std;
void ifpassed(int marks);

int main()
{
int marks;
  while(true)
  {
  cout <<"Enter your quiz marks: ";
  cin >>marks; 
  ifpassed(marks);
  }
}
void ifpassed(int marks)
{
      if (marks > 50)
{
    cout <<"You have passed your pf quiz " <<endl;
}
  if (marks==50)
{
   cout <<"You barely passed "<<endl;
}
  if (marks < 50)
{
    cout <<"Sorry you are failed " <<endl;

}
} 


