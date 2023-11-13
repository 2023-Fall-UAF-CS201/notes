#include <iostream>
#include "library.h"

using std::cout;
using std::endl;
using std::string;


int main() {

  Library uafLibrary{"UAF Library"};

  cout << std::boolalpha;
  
  cout << "About to do expensive visit:" << endl;
  expensiveVisit(uafLibrary); // This will cause the library to get copied
  cout << "Done with expensive visit" << endl;


  cout << endl;
  cout << "About to do cheap visit:" << endl;
  cheapVisit(uafLibrary);     // This doesn't create a copy
  cout << "Done with cheap visit" << endl;
  
  return 0;
}
