#include <iostream>
#include <string>
 
using namespace std;
 
int main ()
{
   // local variable declaration:
   char grade = 'C';
cout<<"whats the grade ;";
cin>> grade ;
 
   switch(grade)
   {
   case 'A' :
    case'a' :  
      cout << "great job!" << endl;
      break;
     case 'B' :
     case 'b':
       cout <<"Excellent "<< endl;
       break;
     
     case 'C' :
     case 'c':
      cout << "Well done" << endl;
      break;
   case 'D' :
     case 'd' :
      cout << "You passed" << endl;
      break;
   case 'F' :
     case 'f':
      cout << "Better try again" << endl;
      break;
   default :
      cout << "Invalid grade" << endl;
   }
   cout << "Your grade is " << grade << endl;
 
   return 0;
}