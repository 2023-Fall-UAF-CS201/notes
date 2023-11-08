#include "City.h"

City::City(std::string name, int year) {
  this->name = name;
  this->year = year;
}

int City::getYear() const {
  return this->year;
}

std::string City::getName() const {
  return this->name;
}

std::ostream& operator<<(std::ostream& stream,
			 const City& city) {
  stream << "City of " << city.getName() << " founded "
	 << city.getYear();

  return stream;
}
