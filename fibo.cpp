#include "fibo.hpp"

int fibo::next(){
    int t = f1;
    f1 = f2;
    f2 = t + f1;
    return f1;}
