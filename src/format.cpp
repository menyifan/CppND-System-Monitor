#include <string>

#include "format.h"

using std::string;
using std::to_string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) {
  string HH, MM, SS;
  long h, m, s;
  s = seconds % 60;
  m = seconds / 60 % 60;
  h = seconds / 60 / 60;
  if(s < 10) {
    SS = "0" + to_string(s);
  }
  else {
    SS = to_string(s);
  }
  if(m < 10) {
    MM = "0" + to_string(m);
  }
  else {
    MM = to_string(m);
  }
  if(h < 10) {
    HH = "0" + to_string(h);
  }
  else {
    HH = to_string(h);
  }
  return HH + ":" + MM + ":" + SS;
}