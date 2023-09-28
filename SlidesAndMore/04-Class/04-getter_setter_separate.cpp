#include <iostream>

//This is that class again but now I am defining the "set_data"
//method outside the body of the class
class demo{
private:
int data;
public:
  //Note that for set_data there are no {} and the line just ends with ;
  void set_data(int newdata);
  int get_data(){return data;}
};

//This is the implementation of set_data for the demo class
//Note the demo:: before the function name - that tells the compiler
//That this function is part of demo
//This approach is mostly used when you have the declaration of
//the class in a header file but the definition of the methods in a cpp file
void demo::set_data(int newdata){
  data = newdata;
}

//Calling the methods is unchanged
int main(){
  demo mydemo;
  //Can't set mydemo.data since it is private
  mydemo.set_data(123);

  //Can't read mydemo.data either
  std::cout << "Data is " << mydemo.get_data() << "\n";
}
