#include <unordered_map>
#include "bigint/bigint.h"

bigint r_fib(int n, std::unordered_map<int, bigint> &m){
    if (n < 2){ //if n is less tha 2
        return n; //return n
    }
    if(m.find(n) != m.end()){
        return m[n];
    }
    else{
        bigint i = r_fib(n-1, m) + r_fib(n - 2,m);
        m[n] = i;
        return i;
    }
}

bigint fib(int n) {
    std::unordered_map<int, bigint> m;
    return r_fib(n, m);
}
