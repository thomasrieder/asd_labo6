#include "Mouchard.h"

using namespace std; 

int main() {
   
   Int* pi1  = new Int();
   Int* pi2  = new Int(5);
   Int* pi3  = new Int(*pi2);
   Int* pi4  = new Int(move(*pi3));
   *pi1  = *pi2;
   *pi1  = move(*pi4);

   delete pi4;
   delete pi3;
   delete pi2;
   delete pi1;
   
}