#include <vector>

//This file will not compile

int main(){
  //I am trying to create a vector of a non-existent class
  //Normally wouldn't do this, but missing header files
  //can create the same problem
  std::vector<nonexistent_class> myvec;
}
