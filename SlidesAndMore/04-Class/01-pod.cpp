#include <iostream>

//This is a very simple class
//Only stores data and all of the data is public
class demo{
public:
int int_data;
float float_data;
};

int main(){
  demo mydemo; //Create an instance of the "demo" class called mydemo
  //You can access the members using "."
  //The name of the variable is set when you create the instance
  //But the name of the members is always the names specified in the
  //class definition
  mydemo.int_data = 14;
  mydemo.float_data = 1234.56;

  //You read and write data in the same way
  std::cout << "Int data is " << mydemo.int_data << "\n";
  std::cout << "Float data is " << mydemo.float_data << "\n";
}
