#include<iostream>
using namespace std;
void sum(int numOne,int numTwo);
void sub(int numOne,int numTwo);
void prod(int numOne,int numTwo);
void divide(int numOne,int numTwo);
main()
{
  int number1,number2;
  char ch;
  cout<<"Enter first number: ";
  cin>>number1;
  cout<<"Enter second number: ";
  cin>>number2;
  cout<<"Select an operator:  ";
  cin>>ch;
  if(ch=='+')
  {
    sum(number1,number2);
  }
  if(ch=='-')
  {
    sub(number1,number2);
  }
  if(ch=='*')
  {
    prod(number1,number2);
  }
  if(ch=='/')
  {
    divide(number1,number2);
  }
  
}
void sum(int numOne,int numTwo)
{
  int sum = 0;
  sum = numOne+numTwo;
  cout<<"Sum is : "<<sum;
}

void sub(int numOne,int numTwo)

{
  int sub=0;
  sub = numOne-numTwo;
  cout<<"Subtraction is: "<<sub;
}
void prod(int numOne,int numTwo)
{
  int sum = 0;
  sum = numOne+numTwo;
  cout<<"Sum is : "<<sum;
}