
#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
 std::string Fortunes[] = {

  "Don't pursue happiness – create it.",
  "All things are difficult before they are easy.",
  "The early bird gets the worm, but the second mouse gets the cheese.",
  "Someone in your life needs a letter from you.",
  "The fortune you search for is in another cookie.",
  "Help! I'm being held prisoner in a Chinese bakery!",
 };
 std::srand(std::time(NULL));
   int lucky_number = std::rand() % 11;
   if (lucky_number < 0 || lucky_number > 10) {
      std::cout << "NOPE Bad LUCK";
   }
   else {
    std::cout << Fortunes[lucky_number];
   }
}
}