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

  //Loop over the map using iterators
  for (auto it = age_map.begin(); it!=age_map.end(); ++it){
    //Print the key and the value. Notice the ->first and ->second
    //This is because the iterator returns a std::pair of the key and value
    std::cout << "Key is   :" << it->first << "\n";
    std::cout << "Value is :" << it->second << "\n";
  }

}
