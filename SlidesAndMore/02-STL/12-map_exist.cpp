#include <map>
#include <iostream>
#include <string>

std::string bool_string(bool value){
  if(value) return "Yes";
  return "No";
}

int main(){
  //Define the map
  std::map<std::string,int> age_map;

  //Create the map elements
  age_map["William"]=24;
  age_map["David"]=27;
  age_map["Albert"]=67;

  //Check if William is in the map by checking count
  //Should be true
  bool is_William = (age_map.count("William")!=0);
  //Check if David is in the map by checking if you can find the key
  //Should be true
  bool is_David = (age_map.find("David")!=age_map.end());
  //Check if Alice is in the map by count again
  //Should be false
  bool is_Alice = (age_map.count("Alice")!=0);

  //Print the logical tests
  std::cout << "Is \"William\" in the map : " << bool_string(is_William) << "\n";
  std::cout << "Is \"David\" in the map : " << bool_string(is_David)<< "\n";
  std::cout << "Is \"Alice\" in the map : " << bool_string(is_Alice) << "\n";

}
