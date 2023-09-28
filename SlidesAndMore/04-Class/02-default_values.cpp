#include <iostream>

//You can give class members default values from C++17 onwards
//You can do it in either of these ways, but uniform initialisation
//with {} is generally better
class demo{
public:
int int_data = 14;
float float_data{1234.56};
};

int main(){
  demo mydemo;

  //Even though I haven't specified values for this instance
  //It will have the default values
  std::cout << "Int data is " << mydemo.int_data << "\n";
  std::cout << "Float data is " << mydemo.float_data << "\n";
}
