#include <iostream>
#include <string>
#include "library.h"

Library::Library(std::string name) {
  this->name = name;
  this->isCopy = false;
}

Library::Library(const Library& original) {
  this->name = "Copy of " + original.name;
  this->isCopy = true;
  std::cout << "Making a copy" << std::endl;
  std::cout << this->name << " " << this->isCopy << std::endl;
}

bool Library::getIsCopy() const {
  return this->isCopy;
}

std::string Library::getName() const {
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
