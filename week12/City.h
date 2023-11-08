#pragma once

#include <string>
#include <ostream>

class City {

 private:
  std::string name;
  int year;

 public:
  City(std::string name, int year);
  
  std::string getName() const;
  int getYear() const;
  
};

std::ostream& operator<<(std::ostream& stream,
			 const City& city);
