#include <iostream>
using namespace std;
void add(int number1,int number2);
void multiply(int number1,int number2);
void subtraction(int number1,int number2);
int main()
{
int number1;
int number2;
char operation; 
   while(1)
    {
cout <<"Enter first number:"<<endl;
cin >>number1;
cout <<"Enter second number:"<<endl;
cin >>number2;
cout <<"Enter operator: ";
cin >>operation;
  if (operation=='+')
{
   add(number1,number2);
}
  if (operation=='-')
{
  subtraction(number1,number2);
}
  if (operation=='*')
{
  multiply(number1,number2);
}
         }
}
void add(int number1,int number2)
{
int sum;
sum=number1+number2;
cout <<"SUm is :"<<sum <<endl;
}
void multiply(int number1,int number2)
{
int multiply;
multiply=number1*number2;
cout <<"Multiplication is:"<<multiply<<endl;
}
void subtraction(int number1,int number2)
{
int subtraction=number1-number2;
cout <<"Subtraction is :"<<subtraction <<endl;
}