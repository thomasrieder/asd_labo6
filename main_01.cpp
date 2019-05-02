#include "Mouchard.h"

using namespace std;

int main() {
  Int a; // a = 0
  Int b(5); // b = 5

  Int c(b); // c = 5 et b = 5
  Int d(move(c)); // d = 5 et c = -1

  b = d; // b = 5 et d = 5
  a = move(d); // a = 5 et d = -2
}
