#include<iostream>
using namespace std;
void calculateBill(string day,int amount);
{ 
       string day;
       while(true)
       {
       int amount;
       cout<<"Enter day: ";
       cin>>day;
       cout<<"Enter your bill: ";
       cin>>amount;
       calculateBill(day,amount);
       }

}
   
void calculateBill(string day,int amount)
{
     float bill;
     if(day=="sunday")
     {
        bill = amount-(amount*0.1);
        cout<<"Bill is "<<bill;
     }
     if(day!= "sunday")
     {
        cout<<"Bill is "<<bill;
     }
} 
  