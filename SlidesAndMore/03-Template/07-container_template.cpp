#include <iostream>
#include <string>
#include <vector>
//This template will print any type that can be printed
//std::vector *cannot* be printed so this won't work
template <typename T>
void print(T value){
  std::cout << value << "\n";
}

//This template will be used to print any vector whatever type
//The vector is itself templated on. It is less generic than
//the general print, so it will be used in preference to it
template <typename T>
void print(std::vector<T> &vec){
  for (auto &el:vec){
    std::cout << el <<"\n";
  }
}

int main(){
  //Print normal text
  print("Hello world!");
  print(14);
  print(1.234);
  std::vector<int> v;
  for(int i=0;i<10;++i) v.push_back(i*3);
  //Print the vector. Here a vector of int, could be any vector
  print(v);
}
