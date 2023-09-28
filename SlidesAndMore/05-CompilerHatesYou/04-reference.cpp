#include <vector>

//THIS FILE WILL FAIL TO COMPILE

int main(){
  //This won't work. References cannot be constructed
  //without parameters, or assigned to (you can assign to
  //the underlying variable but not the reference itself)
  //So you can't build a vector of them

  //There is something called std::reference_wrapper that
  //can be used to do this - once again, an advanced feature
  std::vector<int&> myvec;
	myvec.resize(10);
}
