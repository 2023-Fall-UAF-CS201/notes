#include <iostream>
#include <map>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::string;

int main() {

  string name;
  int age;

  map<string, int> ages;

  cout << "On each line, enter a name and an age: " << endl;
  while (cin >> name >> age) {

    ages[name] = age;

    cout << "There are now " << ages.size() << " entries in the map" << endl;
  }
  
  cout << endl;
  cout << "Here are the people and their ages:" << endl;

  for (auto [key, value] : ages) {

    cout << key << " is " << value << " years old" << endl;
    
  }
  
  

  return 0;
}
