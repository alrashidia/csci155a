//this program shows that local variable do not retain
//their values between functions calls.

#include <iostream>
using namespace std ;

//function prototybe
void showLocal()
{


int localNum = 5;    //local variable

cout <<"localNum is"<<localNum<<endl;
localNum = 100;

}

void showLocal2()
{


int localNum2 = 6;    //local variable

cout <<"localNum2 is"<<localNum2<<endl;
localNum2 = 100;

}









int main ()
{

showLocal();
showLocal();
  showLocal();
  showLocal2();
return 0;
}




