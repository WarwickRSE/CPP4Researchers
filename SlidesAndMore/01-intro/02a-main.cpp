#include <iostream>
#include "02b-functions.h"

int main(){
  std::cout << "Result of my_function(double) is " << my_function(1.234) << "\n";
  std::cout << "Result of my_function(string) is " << my_function("Hello world") << "\n";
  function_with_no_return("I do not return anything");
}
