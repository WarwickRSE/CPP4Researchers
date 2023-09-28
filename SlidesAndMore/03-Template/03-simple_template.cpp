#include <iostream>
#include <string>
//Templated function can take any type
//This function will only be created
//for types that it is called with
//It only has to be *able* to compile for types that it is called with
template <typename T>
void print(T value){
  std::cout << value << "\n";
}

int main(){
  print("Hello world!");
  print(14);
  print(1.234);
}
