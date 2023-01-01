#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void nameJ();
void nameA();
void nameW();
void nameA1();
void nameD();
main()
{
   
  system("cls");
  nameJ();
  nameA();
  nameW();
  nameA1();
  nameD();
  
}

      void nameJ()
      {
          gotoxy(20,20);    
          cout<<"***************"<<endl;
          gotoxy(20,21);
          cout<<"***************"<<endl;
          gotoxy(20,22);
          cout<<"      ***      "<<endl;
          gotoxy(20,23);
          cout<<"      ***      "<<endl;
          gotoxy(20,24);
          cout<<"      ***      "<<endl;
          gotoxy(20,25);
          cout<<"      ***      "<<endl;
          gotoxy(20,26);
          cout<<"      ***      "<<endl;
          gotoxy(20,27);
          cout<<"      ***      "<<endl;
          gotoxy(20,28);
          cout<<"***   ***      "<<endl;
          gotoxy(20,29);          
          cout<<"***   ***      "<<endl;
          gotoxy(20,30);
          cout<<"*********      "<<endl;
          gotoxy(20,31);
          cout<<"  ******       "<<endl;
          
          
      }
      void nameA()
      {
             gotoxy(36,20);
             cout<<"   ***   "<<endl;
             gotoxy(36,21);
             cout<<"  *****  "<<endl;
             gotoxy(36,22);
             cout<<" **   ** "<<endl;
             gotoxy(36,23);
             cout<<"**     **"<<endl;
             gotoxy(36,24);
             cout<<"**     **"<<endl;
             gotoxy(36,24);
             cout<<"*********"<<endl;
             gotoxy(36,25);
             cout<<"**     **"<<endl;
             gotoxy(36,26);
             cout<<"**     **"<<endl;
      }

 
      void nameW()
      {  
          gotoxy(47,20);
          cout<<"**         **"<<endl;
          gotoxy(47,21);
          cout<<"**         **"<<endl;
          gotoxy(47,22);
          cout<<"**         **"<<endl;
          gotoxy(47,23);
          cout<<"**         **"<<endl;
          gotoxy(47,24);
          cout<<"**    **   **"<<endl;
          gotoxy(47,25);
          cout<<"**  **  ** **"<<endl;
          gotoxy(47,26);       
          cout<<" **       ** "<<endl;
      }
     
      void nameA1()
      {
             gotoxy(62,20);
             cout<<"   ***   "<<endl;
             gotoxy(62,21);
             cout<<"  *****  "<<endl;
             gotoxy(62,22);
             cout<<" **   ** "<<endl;
             gotoxy(62,23);
             cout<<"**     **"<<endl;
             gotoxy(62,24);
             cout<<"**     **"<<endl;
             gotoxy(62,24);
             cout<<"*********"<<endl;
             gotoxy(62,25);
             cout<<"**     **"<<endl;
             gotoxy(62,26);
             cout<<"**     **"<<endl;
      }
     
      void nameD()
      {
          gotoxy(73,20);
          cout<<"*****        "<<endl;
          gotoxy(73,21);
          cout<<"**  **       "<<endl;
          gotoxy(73,22);  
          cout<<"**   **      "<<endl;
          gotoxy(73,23);  
          cout<<"**     *     "<<endl;
          gotoxy(73,24);  
          cout<<"**     *     "<<endl;
          gotoxy(73,25);
          cout<<"**    **     "<<endl;
          gotoxy(73,26);
          cout<<"**   **      "<<endl;
          gotoxy(73,27);
          cout<<"*****        "<<endl;  
      } 
       
               
          
void gotoxy(int x, int y )
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
 
 