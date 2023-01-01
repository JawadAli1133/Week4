#include<iostream>
using namespace std;
void checkResult(int marks);
main()
{
      int marks;
      cout<<"Enter your marks: ";
      cin>>marks;
      checkResult(marks);
}
void checkResult(int marks)
{
  if(marks>50)
  {
    cout<<"You are pass ";
  }
  if(marks<50)
  {
    cout<<"You are fail ";
  }
  if(marks==50)
  {
    cout<<"You need to improve ";
  }
}

