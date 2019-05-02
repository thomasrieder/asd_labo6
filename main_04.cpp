#include "Mouchard.h"
#include "Pile.h"

#include <iostream>
using namespace std;

int main() {

  cout << "Test constructeur \n";
  Pile<Int> pile1(6);
  cout << endl << endl;

  cout << "Test empiler \n";
  for(int i = 0; i < 4; ++i)
    pile1.empiler(Int(i));
  cout << endl << endl;

  cout << "Contenu pile \n";
  cout << pile1 << endl << endl;
  {
    cout << "Test constructeur de copie \n";
    Pile<Int> pile2 = pile1;
    cout << endl << endl;

    cout << "Contenu pile copiée\n";
    cout << pile2 << endl << endl;

    cout << "Test destructeur \n";
  } // test destruction de pile2
  cout << endl << endl;

  cout << "Tests sommet et depiler \n";
  for(int i = 0; i < 2; ++i) {
    cout << pile1.sommet() << " ";
    pile1.depiler();
  }
  cout << endl << endl;

  cout << "Contenu pile dépilée\n";
  cout << pile1 << endl << endl;  // test contenu pile

  cout << "Test destructeur 2\n";
} // test destruction de pile2
