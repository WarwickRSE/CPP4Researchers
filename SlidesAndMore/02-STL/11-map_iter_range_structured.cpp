#include <map>
#include <iostream>
#include <string>

int main(){
  //Create the map
  std::map<std::string,int> age_map;

  //Populate the map
  age_map["William"]=24;
  age_map["David"]=27;
  age_map["Albert"]=67;

  //Loop over the map using structured binding
  for (auto [key,value]:age_map){
    std::cout << "Key is   :" << key << "\n";
    std::cout << "Value is :" << value << "\n";
  }

}
