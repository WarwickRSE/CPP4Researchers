#include <iostream>

int main(){
  int x = 5;
  //This is a horrible piece of code anyway, but it is not defined
  //in the C++ standard how it should be evaluated. Undefined behaviour
  //must be avoided at all costs since you can no longer determine
  //what the code will do
  x = x++ + ++x;
  std::cout << x << "\n";
}
