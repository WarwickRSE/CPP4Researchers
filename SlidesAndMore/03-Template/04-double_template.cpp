#include <iostream>
#include <string>
//This is the same template as before
template <typename T>
void print(T value){
  std::cout << value << "\n";
}

//This is another template specifying a function
//with the same name and different parameters
//Each parameter to this can be of a different type
//Each pair of different types produces a different function
//And only those functions needed are created
template <typename T1, typename T2>
void print(T1 value1, T2 value2){
  std::cout << value1 << " : " << value2 << "\n";
}

int main(){
  print("Hello world!");
  print(14);
  print(1.234);
  print("Test value", 42);
}
