#include <vector>
//THIS FILE WILL NOT COMPILE


//This class has a private constructor
//That means that you can't construct one
class non_constructable{
non_constructable(){}
};

int main(){
  //Try to construct a vector of non-constructable class
  std::vector<non_constructable> myvec;
  //When you try to resize the vector so it actually contains
  //some of my non constructable class it will fail
  //(It only fails on resize because it *is* possible to
  //create a vector of some types of non-constructable class by
  //*emplacement* but that is an advanced feature)
	myvec.resize(10);
}
