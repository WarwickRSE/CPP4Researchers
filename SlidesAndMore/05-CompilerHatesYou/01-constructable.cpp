#include <vector>
//THIS FILE SHOULD COMPILE OK


//Simple class with a parameterless public constructor
class constructable{
public:
constructable(){}
};

int main(){
  //Create a vector of constructable and put some elements in
  //with "resize"
  std::vector<constructable> myvec;
	myvec.resize(10);
}
