#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::string;


int squared(int n) {
  return n*n;
}


string greeting(string title, string first_name, string last_name, string message) {

  return message + " " + title + ". " + first_name + " " + last_name;
  
}

void foo(string fruit, bool isFav) {
  cout << "My favorite fruit is definitely";

  if (not isFav) {
    cout << " not";
  }

  cout << " a " << fruit << endl;

  
}

int main() {

  squared(7);

  greeting("Dr", "Lane", "Schwartz", "Greetings human");

  foo("banana", false);
  
  return 0;
}
