#include <map>
#include <iostream>
#include <string>

int main(){
  std::map<std::string,int> age_map;

  age_map["William"]=24;
  age_map["David"]=27;
  age_map["Albert"]=67;

  std::cout << "Age of David is " << age_map["David"] << "\n";

}
