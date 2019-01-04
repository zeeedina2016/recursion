#ifndef _fact_h
#define _fact_h

#include "bigint/bigint.h"

template <typename big>
//function to begin the fasctorial
big factorial(big n){
    if(n == 0){//if n equals 0
     return 1;//return 1
    } else {//if not 0
      return n * factorial(n - 1);//subtract 1 and multiply by by n
    }
}

#endif