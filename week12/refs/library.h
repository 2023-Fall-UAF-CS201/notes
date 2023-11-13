#include <iostream>
#include <string>


class Library {

private:
  std::string name;
  bool isCopy;

public:
  Library(std::string name);

  Library(const Library& original);

  bool getIsCopy() const;

  std::string getName() const;
};

std::ostream& operator<<(std::ostream& stream,
			 const Library& library);
