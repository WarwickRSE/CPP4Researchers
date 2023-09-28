#include <iostream>
#include <iomanip>
#if __cplusplus >= 202002L
//Only supported in C++20
#include <numbers>
#endif
//This template function doesn't have any parameters that it can use
//To infer the type for the template
//You have to *explicitly* specify the template
template <typename T>
T ten_over_three(){
  return T(10)/T(3);
}

int main(){
  //Set the code to print to 15dp of precision for floating point numbers
  std::cout << std::setprecision(15);
	//This is how you specify templates explicitly with <> after the name and
  //before the parameters to the function
  std::cout << "10/3 as integer is " << ten_over_three<int>() << "\n";
  std::cout << "10.0/3.0 as float is " << ten_over_three<float>() << "\n";
  std::cout << "10.0/3.0 as double is " << ten_over_three<double>() << "\n";
  //As a less silly example
#if __cplusplus >= 202002L
  //Only supported in C+20
  std::cout << "Pi as float is " << std::numbers::pi_v<float> << "\n";
  std::cout << "Pi as double is " << std::numbers::pi_v<double> << "\n";
#endif
}
