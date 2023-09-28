#include <vector>
#include <iostream>

int main(){

  std::vector<int> v;
  for (int i=0; i<10;++i){
    v.push_back(i*2);
  }

  //This uses the C++20 erase_if idiom, but uses a
  //lambda or anonymous function for the condition
  //This is useful for cases where you don't want
  //to use a function multiple times
  std::erase_if(v,[](int &i){return (i%3==0);});

  for(auto it = v.begin(); it!=v.end();++it){
    std::cout << *it << "\n";
  }

}
