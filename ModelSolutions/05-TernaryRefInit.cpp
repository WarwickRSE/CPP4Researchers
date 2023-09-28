#include <iostream>

int main(){

  int x = 10, y = 7, z = 21;

  std::cout<<"Before modifying, x is: "<<x<<" and z is: "<<z<<'\n';

  // Use the ternary operator to initialise a reference variable
  // val will refer to x if x+y < z, or z if this is not true
  int & val = (x + y < z ? x : z);

  // Manipulate val - this also affects x OR z depending
  val++;

  std::cout<<"Condition is:"<<(x+y < z)<<'\n';
  std::cout<<"val is: "<<val<<" (x is:  "<<x<<" and z is: "<<z<<")\n";

}
