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
#include "include/adlock.h"


using namespace std;

int a_double(int cc) {
    double _double = 0;
    cin >> _double;    
    double *c = 0;   
    int stage, numV = 0;
    c = &_double;
    if (cc <= 17) {
           for (stage = 0; stage <= cc; ++stage) {                              
               std::cout << stage << ":\t" << 
               "MemAdrK: " << "0x19bbdc" << 
               "\t" << "MemAdrL: " << c << endl;
           }
    }
    
    return 0;
}
