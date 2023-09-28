#include <iostream>
#include <string>
//Template for 1 parameter
template <typename T>
void print(T value){
  std::cout << "Single parameter\n";
  std::cout << value << "\n";
}

//Template for two parameters of the same type
template <typename T>
void print(T value1, T value2){
  std::cout << "Two matched parameters\n";
  std::cout << value1 << " " << value2 << "\n";
}
//Template for two different parameters
template <typename T1, typename T2>
void print(T1 value1, T2 value2){
  std::cout << "Two different parameters\n";
  std::cout << value1 << " : " << value2 << "\n";
}

int main(){
  //Has to select single template - only one parameter
  print("Hello world!");
  std::cout << "\n"; // New line for formatting
  //Selects the two matched types template because it is the least generic
  print("Hello", "World");
  std::cout << "\n"; // New line for formatting
  //Selects the two different types template because it is the only one that works
  print("Test value is",42);
}
