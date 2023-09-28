#include <iostream>
#include <string>
template <typename T>
void print(T value){
  std::cout << value << "\n";
}

//This is a slight variation
//One template parameter, two function parameters both
//of type T. This is fine, but it only works if both
//parameters are of the same type
template <typename T>
void print(T value1, T value2){
  std::cout << value1 << " " << value2 << "\n";
}

int main(){
  print("Hello world!");
  print(14);
  print(1.234);
  print("Hello again","world!");
}
