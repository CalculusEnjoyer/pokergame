#include "cubik.hpp"
#include <math.h>

void cubik::setM(int i) {
    r.setM(i);
}

int cubik::next(){
return (abs(r.next()%6)+1);}
