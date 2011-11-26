/*

The author (KryptonX) distributes this software and source code without any legal restrictions.
You may modify and/or re-use it freely, even for commercial use.
No mention of the author is required at any time.

Instead of a legal notice here is a blessing:

- May you use this software for great good
- May you apply the same good will to your software
- Have fun!

*/


#include <iostream>
#include <string>
#include <stdlib.h>
#include "include/float.h"

using namespace std;

int a_float(int c) {
    float _float;
    std::cin >> _float;
    float *p_float = &_float; 
    int stage, numV = 0;
    int *pc = &c;
    if (c <= 17) {
          
          for (stage = 0; stage < c; ++stage) {
              std::cout << "ID: " << stage << "\tMemAdrK: " 
              << pc << "\tMemAdrL: " << p_float << endl;  
              ++numV;            
          }      
          
    }
    return 0;
}

