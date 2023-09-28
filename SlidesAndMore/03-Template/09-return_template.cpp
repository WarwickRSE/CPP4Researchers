#include <iostream>
#include <string>
#include <vector>

//This function uses the template parameter both for the
//Type of the vector that is passed to it, but also the
//return type of the function. That is fine
template <typename T>
T check_and_return(std::vector<T> &vec, int index){
  T value = vec[index];
  if (value > 0) return value;
  return 0;
}

int main(){
  std::vector<int> v;
  for(int i=0;i<10;++i) v.push_back((i-5));
  for(int i=0;i<10;++i) std::cout << check_and_return(v,i) << "\n";
}
