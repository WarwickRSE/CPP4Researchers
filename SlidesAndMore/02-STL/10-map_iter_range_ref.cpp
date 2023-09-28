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

  //Loop over the map using range based loop
	//Get a reference to the element
  for (auto &element:age_map){
    std::cout << "Key is   :" << element.first << "\n";
		//I can't change the .first element (it is marked as const)
		//This isn't possible because the map would have to change where the data
		//Is stored
		//element.first="TEST";
    std::cout << "Value is :" << element.second << "\n";
		//I can change the second element and it will change the stored data
		element.second=1990;
  }

  std::cout << "Second pass. Values will be 1990\n";
	//Note that all of the values have been changed
  for (auto &element:age_map){
    std::cout << "Key is   :" << element.first << "\n";
    std::cout << "Value is :" << element.second << "\n";
  }

}
