#include<iostream>
using namespace std;
void checkResult(int marks);
main()
{
      int marks;
      while(true)
      {
      cout<<"Enter your marks: ";
      cin>>marks;
      checkResult(marks);
      }
}
void checkResult(int marks)
{
  if(marks>50)
  {
    cout<<"You are pass "<<endl;
  }
  if(marks<50)
  {
    cout<<"You are fail "<<endl;
  }
  if(marks==50)
  {
    cout<<"You need to improve "<<endl;
  }
}
