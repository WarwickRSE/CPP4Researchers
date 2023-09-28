#include <iostream>

//This class is unchanged from the version with
//getter and setter methods
class demo{
private:
int data;
public:
  void set_data(int newdata){data = newdata;}
  int get_data(){return data;}
};


//This is a normal function, not a member of demo
//but it takes a reference to a demo class as a parameter
//and returns double the data value of that demo object
int get_and_double(demo &d){
  return d.get_data()*2;
}

int main(){
  demo mydemo;
  mydemo.set_data(123);

  //Pass mydemo to the get_and_double function
  std::cout << "Data doubled is " << get_and_double(mydemo) << "\n";
}
