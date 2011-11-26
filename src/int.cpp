#include <iostream>
#include <stdlib.h>
#include "include/int.h"

using namespace std;

int a_int(int c) {
       int _int, stage = 0;
       std::cin >> _int;       
       int *p_int = &_int;
       if (c <= 17) {
          for (stage = 0; stage < c; ++stage) {               
               std::cout << "ID: " << stage << "\tMemAdrK " <<
               &stage << "\tMemAdrL: " << p_int << endl;   
          }
       }
       
       return 0;
}
