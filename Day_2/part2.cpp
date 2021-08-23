#include <iostream>
#include <string>
#include "Hitboxes.h"

using namespace std;

int main() {
  { // Test with first text file
    Hitboxes hb(string("apex.txt"));
    if (hb.smallestCharacter() == "Wraith")
      cout << "smallestCharacter: PASSED" << endl;
    else
      cout << "smallestCharacter: Result did not match expected answer: Wraith" << endl;
    if (hb.smallestType() == "Soldier")
      cout << "smallestType: PASSED" << endl;
    else
      cout << "smallestType: Result did not match expected answer: Scout" << endl;
  }
  
  
  { // Test with second text file
    Hitboxes hb(string("mario.txt"));
    if (hb.smallestCharacter() == "Toad")
      cout << "smallestCharacter: PASSED" << endl;
    else
      cout << "smallestCharacter: Result did not match expected answer: Toad" << endl;
    if (hb.smallestType() == "Toad")
      cout << "smallestType: PASSED" << endl;
    else
      cout << "smallestType: Result did not match expected answer: Monster" << endl;
  }

  system("pause");
  return 0;
}
