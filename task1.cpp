#include<iostream>
using namespace std;
void sum(int numOne, int numTwo);
void prod(int numOne,int numTwo);
void sub(int numOne,int numTwo);
main()
{
   int number1,number2;
   cout<<"Enter first number: ";
   cin>>number1;
   cout<<"Enter second number: ";
   cin>>number2;
   sub(number1,number2);
   
}
void sum(int numOne, int numTwo)
{
   
    int sum=0;
    sum = numOne+numTwo;
    cout<<"Sum of the numbers is: "<<sum<<endl;
}

void prod(int numOne,int numTwo)
{

    int prod=0;
    prod = numOne*numTwo;
    cout<<"Product is: "<<prod<<endl;
}
  
void sub(int numOne,int numTwo)
{

  int sub=0;
  sub = numOne-numTwo;
  cout<<"Numbers after subtraction is: "<<sub;
}

