/*

The author (KryptonX) distributes this software and source code without any legal restrictions.
You may modify and/or re-use it freely, even for commercial use.
No mention of the author is required at any time.

Instead of a legal notice here is a blessing:

- May you use this software for great good
- May you apply the same good will to your software
- Have fun!

*/

#include <cstdlib>
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
int c;
int main(int argc, char *argv[]) {
    if (argc < 2) {
       usage();
       system("pause");
    }
    else {         
    int c = 0;
       while (--argc > 0 && (*++argv)[0] == '-')                                  
         c = *++argv[0]; 
         
       switch (c) {
              case 'a':
                   std::cout << "Returned 0" << endl;
                   break;
              case 'c':  
                   std::cin >> c;                
                 a_char(c);                 
                 break;                   
              case 'd':
                   std::cin >> c;
                  a_double(c);
                  system("pause");
                  break;
                         
              case 'f':                   
                   std::cin >> c;
                   a_float(c);
                   system("pause");
                   break;
                   
              case 'i':                   
                   std::cin >> c; 
                   a_int(c);
                   system("pause");
                   break; 
              default:
                      std::cout << "Not available" << endl;
                      break;      
       }          
    }   
    return 0;
}

