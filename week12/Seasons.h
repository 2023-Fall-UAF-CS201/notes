enum class Season { earlyWinter, // October
		     winter,     // November, February
		     deepWinter, // December, January
		     lateWinter, // March
		     fakeSpring, // April
		     spring,     // May
		     summer,     // June, July
		     fall        // August, September
		     };


int main() {
	
  auto season = Season::winter;

  switch(season) {
  case Season::spring: cout << "Yaaaayyyy"; break;
  case Season::summer: cout << "Go hiking"; break;
  default:             cout << "Ho hum"; break;
  }

}
