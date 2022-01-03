#include "random.hpp"

int random::next(){
    return f.next() % M;
}
void random::setM(int i){
M=i;
}
