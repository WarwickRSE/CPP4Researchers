#include <iostream>
//Now the demo class has been expanded with a destructor
//A destructor is the opposite of a constructor and is called
//when the object is destroyed. Here, there is nothing to do -
//all member variables of a class have their own destructors
//called automatically, but if I have allocated memory, or acquired
//a system resource then the destructor is a good place to release it
class demo{
public:
int int_data {14};
float float_data{1234.56};
demo(int i, float f){int_data=i;float_data=f;}
demo()=default;
//This is the destructor itself
//It must be called the name of the class prepended with ~
//it must take no parameters
~demo(){std::cout << "Destructing object\n";}
};

int main(){
  demo mydemo{6,5.6};

  std::cout << "Int data is " << mydemo.int_data << "\n";
  std::cout << "Float data is " << mydemo.float_data << "\n";
}
