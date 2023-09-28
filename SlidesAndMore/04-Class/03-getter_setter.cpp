#include <iostream>

//Slightly more complex class
//Now has a private data member (cannot be accessed from outside)
//And a getter and setter member function (also called a method)
class demo{
private:
int data;
public:
  //Member functions. Defined exactly as if they were just functions
  //but inside the class's { }
  //Here we are defining the functions inline - both the declaration
  //and the definition of the function are in the same place
  void set_data(int newdata){data = newdata;}
  int get_data(){return data;}
};

int main(){
  demo mydemo;
  //Can't set mydemo.data since it is private
  mydemo.set_data(123);

  //Can't read mydemo.data either
  std::cout << "Data is " << mydemo.get_data() << "\n";
}
