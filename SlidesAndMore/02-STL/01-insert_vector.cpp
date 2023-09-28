#include <vector>
#include <iostream>

int main(){
  std::vector<int> v;
  for (int i=0;i<10;i+=2) v.push_back(i);

  std::cout << "BEFORE\n";
  std::cout << "======\n";

  for (auto it = v.begin(); it!=v.end();it++){
    std::cout << *it << "\n";
  }
  std::cout << "\n";

  //Now insert new elements
  for (auto it = v.begin();it !=v.end();it++){
    int value = (*it)+1;
    std::cout << "After element " << *it << " inserting " << value << "\n";
    //Insert inserts *before* the element that you tell it to
    //So increment the iterator and insert *before* the *next* element
    //This will work even if you are the last element because there
    //is a special "end" value after the last element in the vector
    it++;
		it = v.insert(it,value);
    //This WON'T WORK! The iterator is invalidated by the insert
    //so you have to use the new iterator that you get back
    //v.insert(it,value);
  }
  std::cout << "\n";

  std::cout << "AFTER\n";
  std::cout << "=====\n";

  for (auto it = v.begin(); it!=v.end();it++){
    std::cout << *it << "\n";
  }
}
