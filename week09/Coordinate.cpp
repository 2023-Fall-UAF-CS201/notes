#include <iostream>

using std::cout;
using std::endl;

class Coordinate {   // Define a custom data type called Coordinate

  // Defined *member variables*
  double x;
  double y;

public:
  
  double getX() {
    return x;
  }

  void setX(double newX) {
    this->x = newX;
  }
  
};  // NOTE: semicolon is needed



int main() {

  Coordinate joe;
  joe.setX(15.0);

  Coordinate pi;
  pi.setX(3.14);
  
  cout << joe.getX() << endl;
  cout << pi.getX() << endl;
  
  return 0;
}

