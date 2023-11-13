#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Library {

private:
  string name;
  bool isCopy;

public:
  Library(string name) {
    this->name = name;
    this->isCopy = false;
  }

  Library(const Library& original) {
    this->name = "Copy of " + original.name;
    this->isCopy = true;
    cout << "Making a copy" << endl;
    cout << this->name << " " << this->isCopy << endl;
  }

  bool getIsCopy() const {
    return this->isCopy;
  }

  string getName() const {
    return this->name;
  }
};

void expensiveVisit(Library library) {
  // Do something that's really expensive
  //  library.addNewBook("", "eautnhaeostnuh");
}

void cheapVisit(Library& library) {
  // This is not expensive
  //  library.getNumBooks();
}


int main() {

  Library uafLibrary{"UAF Library"};

  cout << "About to do expensive visit:" << endl;
  expensiveVisit(uafLibrary); // This will cause the library to get copied
  cout << "Done with expensive visit" << endl;
  cout << endl;
  cout << "About to do cheap visit:" << endl;
  cheapVisit(uafLibrary);     // This doesn't create a copy
  cout << "Done with cheap visit" << endl;
  
  return 0;
}
