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

  //Pre c++20 remove and erase items. Remove packs up all of the
  //Items that you want to keep. Erase then deletes the unwanted items
  v.erase(std::remove_if(v.begin(),v.end(),condition),v.end());

  for(auto it = v.begin(); it!=v.end();++it){
    std::cout << *it << "\n";
  }

}
