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

  majors["Edmond"] = "Wildlife Biology";
  majors["Charlie"] = "Theatre";
  
  cout << majors.size() << endl;

  // C++11 way of doing it
  for (auto key_value_pair : majors) {
    cout << key_value_pair.first << " "
	 << key_value_pair.second << endl;
  }

  // New C++17 syntax
  for (const auto& [key, value] : majors) {
    cout << key << " " << value << endl;
  }

  
  return 0;
}
