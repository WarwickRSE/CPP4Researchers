#include <iostream>

//This version of demo only lets you set positive values of data
//This is a simple example of why getter and setter methods
//May be better than just modifying member variables
class demo{
private:
int data;
public:
  void set_data(int newdata){if (newdata<0) newdata=0; data = newdata;}
  int get_data(){return data;}
};

int main(){
  demo mydemo;
  //Try changing this value to see what happens
  mydemo.set_data(123);

  //Can't read mydemo.data either
  std::cout << "Data is " << mydemo.get_data() << "\n";
}
