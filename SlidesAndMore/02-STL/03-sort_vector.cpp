#include <vector>
#include <iostream>

int main(){
  std::vector<int> v;
  //Store numbers 10 to 1 descending
  for (int i=10;i>0;i--) v.push_back(i);

  std::cout << "BEFORE\n";
  std::cout << "======\n";
  for (auto it = v.begin(); it!=v.end();it++){
    std::cout << *it << "\n";
  }
  std::cout << "\n\n";

  //Sort the vector
  std::sort(v.begin(),v.end());

  std::cout << "AFTER\n";
  std::cout << "=====\n";

  for (auto it = v.begin(); it!=v.end();it++){
    std::cout << *it << "\n";
  }
  std::cout << "\n\n";

  //Now sort it back the other way
  std::sort(v.begin(),v.end(),[](int i1,int i2){return i1>i2;});

  std::cout << "AFTER REVERSE\n";
  std::cout << "=============\n";

  for (auto it = v.begin(); it!=v.end();it++){
    std::cout << *it << "\n";
  }
}
