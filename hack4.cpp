// this programm is used by general crates, Inc. to calculate 
//the valume , cost ,customer charge , and profit of a crate of any size. it calculates this //date fromm user input , which consist of the dimensions of the crates
#include <iostream>
#include <iomanip>
using namespace std ;
int main ()
{
  // constants for cost and amount charged
  const double COST_PER_CUBIC_FOOT = 0.23 ;
  const double CHARGE_PER_CUBIC_FOOT = 0.5 ;
  
  //Variables 
  double length , // the crate's length 
         width ,  // the crate's width 
  height ,        // the crate's height
  valume ,        // the ctate's valume 
  cost,           // the cost build the crate 
  charge ,        // the customer charge for the crate 
  profit ;       // the profit made on the crate 
  
  // set the desired output formatting for numbers
  cout << setprecision (2) << fixed << showpoint ;
  
  //prompt the user for the crate's lenght, width ,and height 
  cout<<"enter the deminsion of the crate (in feet) : \n";
  cout << "length";
  cin>> length ;
  cout << "widht"  ;
  cin>> width ;
  cout << "height"  ;
  cin >>height ;
  
  // calculate the crate valume , the cost to produce it , the charge to the customer 
  // , and the profit
  
  valume = length * width * height ;
    cost = valume * COST_PER_CUBIC_FOOT ; 
    charge = valume * CHARGE_PER_CUBIC_FOOT ; 
    profit = charge - cost ;
  
  // display the calculate data
  
  cout << "the valume of the crate is ";
  cout << valume << "cubic feet . \n" ;
  cout << "cost to build : $ " << cost << endl;
  cout << "charge to customer : $ "<< charge << endl ;
  cout << "profit : $ " << profit << endl;
  return 0 ;
}