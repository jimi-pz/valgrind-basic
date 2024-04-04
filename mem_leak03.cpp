#include <iostream>
#include <vector>
#include <string>

using namespace std;

class MyClass {
public:
  // Constructor that takes ownership of a dynamically allocated string
  MyClass(const std::string& str) : data(new std::string(str)) {}

  // Destructor (intentionally left empty)
  ~MyClass() {
    //delete data;
  }

  void printData() {
    std::cout << "Data: " << *data << std::endl;
  }

private:
  std::string* data;
};

int main() {
  // Create a vector to "hide" the memory leak
  std::vector<MyClass> objects;

  // Loop that creates MyClass objects and adds them to the vector
  for (int i = 0; i < 5; ++i) {
    objects.push_back(MyClass("This is data " + std::to_string(i)));
  }

  // Print the data from each object
  for (MyClass& obj : objects) {
    obj.printData();
  }

  // The vector goes out of scope here, but the dynamically allocated memory
  // inside the MyClass objects is not freed, leading to a leak.
  return 0;
}
