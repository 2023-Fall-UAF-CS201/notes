#include <iostream>
#include <string>


Library::Library(string name) {
  this->name = name;
  this->isCopy = false;
}

Library::Library(const Library& original) {
  this->name = "Copy of " + original.name;
  this->isCopy = true;
  cout << "Making a copy" << endl;
  cout << this->name << " " << this->isCopy << endl;
}

bool Library::getIsCopy() const {
  return this->isCopy;
}

string Library::getName() const {
  return this->name;
}

std::ostream& operator<<(std::ostream& stream, const Library& library) {
  stream << library.getName() << " is";
  if (!library.getIsCopy()) {
    stream << " not";
  }
  stream << " a copy";
  return stream;
}
