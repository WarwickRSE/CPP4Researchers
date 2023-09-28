#include <iostream>
#include <string>
#include <vector>
#include <list>

//Another complex one
//This is a "template template". I want to have a function that can work
//with any STL container. My first template parameter is itself templated
//(if you look at 06ADVANCED, you will spot that it is a variadic template)
//This means that my first template parameter can itself have as many template
//parameters as it wants. The second template parameter is the actual type
//that the container is holding
template <template<typename...> class Container, typename T>
void print(Container<T> &vec){
  for (auto &el:vec){
    std::cout << el <<"\n";
  }
}

int main(){
  std::vector<int> v;
  std::cout << "Vector\n";
  for(int i=0;i<10;++i) v.push_back(i*3);
  //print the vector
  print(v);

  std::cout << "List\n";
  std::list<int> l;
  for(int i=0;i<10;++i) l.push_back(i*3);
  //print a linked list
  print(l);
}
