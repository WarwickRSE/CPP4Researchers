#include<iostream>
#include<string>

void print(long int i){
 std::cout << i << "\n";
}

void print(double d){
  std::cout << d << "\n";
}

void print(std::string s){
  std::cout << s << "\n";
}

int main(){
  print("Hello world!");
	//This won't work. 14 is not a long int
  //And it can be just as validly converted to a double
  //as a long int. Comment this line out and things will work
  print(14);
  print(1.234);
}
