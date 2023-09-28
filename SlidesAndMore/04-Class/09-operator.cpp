#include <iostream>

//Now this class has been extended with a + operator
//This means that you can add you class to something else just as you can with numbers
class demo{
private:
int data;
public:
  void set_data(int newdata){data = newdata;}
  int get_data(){return data;}
  //This is the form of all operators, a function named "operator" and then
  //the operator that you are implementing. This includes add, subtract, multiply
  //divide, as well as increment, decrement etc and also more unexpected ones like
  //round brackets (call your object as if it was a function), square brackets
  //(access your object as if it was an array) and * and -> for dereferencing

  //Here we just do addition. Operator+ only takes a single parameter, but that
  //parameter may be any type, and you can have multiple implementations for different
  //types (or indeed, templated operators are possible). The return type can be
  //anything as well and should be the correct type for the result of the addition
  //Here I am adding a demo to another demo, the result of which is a demo
  demo operator+(demo& other){demo d; d.data=this->data+other.data; return d;}
};

int main(){
  demo mydemo, mydemo2;
  //Can't set mydemo.data since it is private
  mydemo.set_data(123);
  mydemo2.set_data(456);

  //Print the result of adding my two objects
  std::cout << "Data is " << (mydemo+mydemo2).get_data() << "\n";
}
