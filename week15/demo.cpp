#include <map>
#include <vector>
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::map;


int main() {

  vector<string> names{"Alice", "Bob", "Charlie", "Delma"};

  // key -> value
  // 
  // 0 -> "Alice"
  // 1 -> "Bob"
  // 2 -> "Charlie"
  // 3 -> "Delma"
  
  cout << names[2] << endl;


  std::map<string, string> majors{
    {"Alice", "CS"},
    {"Bob", "English"},
    {"Charlie", "Physics"},
    {"Delma", "Biology"}
  };

  cout << majors["Delma"] << endl;
  
  return 0;
}
