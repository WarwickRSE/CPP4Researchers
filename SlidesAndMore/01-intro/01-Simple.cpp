#include <iostream>

int mymax(int i1, int i2){
	if (i1>i2) return i1;
	return i2;
}

int main(){
  std::cout << "Maximum of 1 and 10 is " << mymax(1,10) << "\n";
  std::cout << "Maximum of 1 and -1 is " << mymax(1,-1) << "\n\n";

  int mytestval = 5;
  for (int value1 = 1; value1 < 10; value1++){
		std::cout << "Maximum of " << value1 << " and " << mytestval << " is " << mymax(value1, mytestval) << "\n";
	}
  return 0;
}
