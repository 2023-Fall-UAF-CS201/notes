#include "Seasons.h"

int main() {
	
  auto season = Season::winter;

  switch(season) {
  case Season::spring: cout << "Yaaaayyyy"; break;
  case Season::summer: cout << "Go hiking"; break;
  default:             cout << "Ho hum"; break;
  }

}
