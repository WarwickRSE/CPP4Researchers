#include <vector>
#include <iostream>

int main(){

  std::vector<int> v;
  for (int i=0; i<10;++i){
    v.push_back(i*2);
  }

  for(auto it = v.begin(); it!=v.end();++it){
    std::cout << *it << "\n";
  }

}
