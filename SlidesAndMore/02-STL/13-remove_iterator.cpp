#include <vector>
#include <iostream>

bool condition(int &i){
  //Condition is true if number is divisible by 3
  return (i%3)==0;
}

int main(){

  std::vector<int> v;
  for (int i=0; i<10;++i){
    v.push_back(i*2);
  }

  //C++20 erase_if to remove items based on a condition
  std::erase_if(v,condition);

  for(auto it = v.begin(); it!=v.end();++it){
    std::cout << *it << "\n";
  }

}
