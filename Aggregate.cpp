#include<iostream>
using namespace std;
void menu();

void comparemarks(string,int,string,int);
void aggregate(float,float,float);
void aggregate1(float,float,float);
main()
{
   
   string name,name1;
   float matricMarks,interMarks,ecatMarks;
   float matricMarks1,interMarks1,ecatMarks1;
   while(true)
   {
   menu();
   int choice;
   cout<<"Press a key between 1 and 5: "<<endl;
   cin>>choice; 
  
   if(choice==1)
   {
       
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter marks in matric: ";
        cin>>matricMarks;
        cout<<"Enter inter marks: "; 
        cin>>interMarks;
        cout<<"Enter ecatMarks: ";
        cin>>ecatMarks;
        
        
   }
   if(choice==2)
   {
       
        cout<<"Enter name: ";
        cin>>name1;
        cout<<"Enter marks in matric: ";
        cin>>matricMarks1;
        cout<<"Enter inter marks: "; 
        cin>>interMarks1;
        cout<<"Enter ecatMarks: ";
        cin>>ecatMarks1;
         
        
   }
   if(choice==3)
   {
      aggregate(matricMarks, interMarks,ecatMarks);
       
   }

   
  
   
   if(choice==4)
   {
      aggregate1(matricMarks1, interMarks1, ecatMarks1);
   }
       if(choice==5)
       comparemarks( name, ecatMarks, name1,ecatMarks1);
     
   }  

}
    void menu()
    {
       
       cout<<"  ************************************"<<endl;
       cout<<"  *                                  *"<<endl;
       cout<<"  *  UNIVERSITY ADMISSION            *"<<endl;
       cout<<"  *      MANAGEMENT SYSTEM           *"<<endl;
       cout<<"  *                                  *"<<endl;
       cout<<"  *                                  *"<<endl;
       cout<<"  ************************************"<<endl<<endl<<endl;
       
       cout<<"1.Enter details of first student: "<<endl;
       cout<<"2.Enter details of second student: "<<endl;
       cout<<"3.Calculate aggregate of first student: "<<endl;
       cout<<"4.Calculate aggregate of second student: "<<endl;
       cout<<"5.Display the student with roll no 01: "<<endl;
       
    }
     void comparemarks(string name,int ecatMarks,string name1,int ecatMarks1)
     {
        if(ecatMarks>ecatMarks1)
        {
          cout<<"Student with roll no 01: "<<name<<endl;
        }
        if(ecatMarks1>ecatMarks)
        {
          cout<<"Student with roll no 01: "<<name1<<endl;
        }
     }

 

     void aggregate(float matricMarks,float interMarks,float ecatMarks)
     {
      
       float aggre;
      
       aggre = 0.3*((matricMarks/1100)*100)+0.3*((interMarks/550)*100)+0.4*((ecatMarks/400)*100);
       cout<<"Aggregate of first student is: "<<aggre<<endl<<endl;
     	
	 }
	 
     void aggregate1(float matricMarks,float interMarks,float ecatMarks)
     {
      
       float aggre1;
      
       aggre1 = 0.3*((matricMarks/1100)*100)+0.3*((interMarks/550)*100)+0.4*((ecatMarks/400)*100);
       cout<<"Aggregate of second student is: "<<aggre1<<endl<<endl;
     	
	 }
	 
	 

    