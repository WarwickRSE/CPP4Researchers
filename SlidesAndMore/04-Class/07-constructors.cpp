#include <iostream>

//This is a class with a constructor
//A constructor is a function that is used to create an instance
//of a class, allowing you to set up the state of the object
//when it is first created
class demo{
public:
int int_data {14};
float float_data{1234.56};
//This is the actual constructor function
//All constructors have the same name as the class that they construct
//and may have as many or as few parameters as you wish
//It takes two parameters and sets the two internal variables
//but there is no need for every variable in a class to have
//a matching parameter in the constructor
demo(int i, float f){int_data=i;float_data=f;}

//You can have as many constructors as you like, so long as the
//parameters to them are different, but there is always at least one
//constructor. If you don't specify a constructor then a constructor taking
//no parameters and setting no values is created automatically. This is the
//constructor that is used if you just create a class with no parameters.
//When you create your own constructor this default constructor is deleted
//You can create your own constructor taking no parameters to allow you to
//create an object without specifying parameters, or this line restores the default
//constructor
demo()=default;
};

int main(){
	//Use the constructor taking the integer and the float
  //I could use round brackets instead of this uniform initialisation
  //but, as always, it is easier to use UI {} for it
  demo mydemo{6,5.6};

  std::cout << "Int data is " << mydemo.int_data << "\n";
  std::cout << "Float data is " << mydemo.float_data << "\n";
}
