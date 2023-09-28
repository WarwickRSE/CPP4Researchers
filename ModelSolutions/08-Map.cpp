#include <iostream>
#include <string>
#include <map>
#include <algorithm>

int main(){

  // Constructing a map string -> string
  std::map<std::string, std::string> config;

  config["location"] = "UK";
  config["timezone"] = "UTC";
  config["language"] = "English";


  // Constructing a map of string to int
  std::map<std::string, int> counts;
  counts["item1"] = 5;
  counts["item2"]=4;

  // Modify an item which does not yet exist
  counts["item3"] += 1; // Item does not exist so will be "default constructed" - for an integer means initialised to 0
  std::cout<<counts["item3"]<<std::endl;

  // Count item to verify it exists before using it
  if(counts.count("item4") > 0){
    std::cout<<"item4 is in the map"<<std::endl;
  }
  // Find item ditto. Note find returns the map.end() "iterator" if item is not found
  // counts.end() is the item one past the end of the counts map i.e. does not exist
  if(counts.find("item3") != counts.end()){
    std::cout<<"item3 is in the map"<<std::endl;
  }

  // Create a lambda to check mapped values (it.second) against condition
  // Here we check for presence of letter "U"
  // We could also look at the key (it.first), or do a random drawing or
  // anything else we wish
  // Lambda syntax (here C++14 extensions are used) is: <return type><name> = [<capture spec>](<args>){<body>}
  // Capturing refers to getting values from the surrounding code and must be used carefully! 
  auto compare = [](auto it){
    if(it.second.find_first_of("U") != std::string::npos) return true;
    return false;
  };

  // Use the find_if function with comparison lambda we just defined
  auto a = std::find_if(config.begin(), config.end(), compare);

  // Loop over returned items and show them. Note the -> syntax for this method
  for(auto item = a; item != config.end(); item ++){
    std::cout<< item->first<<" "<<item->second<<std::endl;
  }

}
