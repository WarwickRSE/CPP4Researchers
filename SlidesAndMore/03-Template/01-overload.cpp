#include<iostream>
#include<string>

//Print for integer
void print(int i){
 std::cout << i << "\n";
}

//Print for double
void print(double d){
  std::cout << d << "\n";
}

//Print for string
void print(std::string s){
  std::cout << s << "\n";
}

int main(){
  print("Hello world!");
  print(14);
  print(1.234);
}
