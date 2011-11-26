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
#include "include/adlock.h"

using namespace std;

int a_char(int loop) { 
    
               int c = 0;
    
      std::cin >> c;
           
      int stage = 0;
      int *cpp;
      cpp = &c;
            
      /* table */
      if (stage <= 18) {
      for (stage = 0; stage < loop; ++stage) {
      std::cout << stage << ":\t" << "ID: " << stage << "\tAMemAdrK: " << "0x19bbdc";
      std::cout << "\tMemAdrL: " << cpp << endl;
      }
      std::cout << cpp;
}
      system("pause");
      return 0;
}

