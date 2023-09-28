#include <iostream>
#include <vector>

//This is a class templated on a type
//Mostly this is very like using templates
//for functions, but you can use the template parameter
//For any variables or methods in the class
//You also *always* have to explicitly specify the template parameter
//Since there is no mechanism to infer it
//You can template individual methods in the class as well
//But the template names must be unique and it might hurt your brain
template <typename T>
struct datastore{
  T item;
  std::vector<T> subitems;
};

int main(){
  datastore<int> d;
  d.item = 14;
  d.subitems.push_back(17);
  d.subitems.push_back(18);

  std::cout << "Item ID is " << d.item << "\n";
  std::cout << "Sub items are " << "\n";
  for (auto &element:d.subitems){
    std::cout << element << "\n";
  }
}
