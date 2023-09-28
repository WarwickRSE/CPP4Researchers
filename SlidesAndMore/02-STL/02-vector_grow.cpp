#include <iostream>
#include <vector>

int main(){
  std::vector<int> v;
  v.reserve(100);

  for (int i =0; i<100;++i){
    v.push_back(i);
    std::cout << "Size is " << v.size() << "\n";
    std::cout << "Capacity is " << v.capacity() << "\n";
  }
}
