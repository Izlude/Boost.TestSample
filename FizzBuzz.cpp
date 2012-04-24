#include <sstream>
#include "FizzBuzz.h"

using namespace std;

string FizzBuzz::Print(int n) {
  ostringstream sout;
  if(n % 3 == 0) sout << "Fizz";
  if(n % 5 == 0) sout << "Buzz";
  if(n % 3 != 0 && n % 5 != 0) sout << n;
  return sout.str();
}
