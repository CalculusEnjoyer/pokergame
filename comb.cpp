#include <iostream>
#include "comb.hpp"

void comb::getcomb(){
    values.clear();
    currentcomb.clear();
    for (int i = 0; i < 5; i++) {
            currentcomb.push_back(h.next());
    }
}

void comb::coutcomb() {
    for (int i = 0; i < 5; i++) {
        std::cout << currentcomb[i] << ' ';
    }
    std::cout<<std::endl;
}

double comb::getcombval(){
    /*Calculates and returns the "value" of the combination as number A.B.
      where A is the greatest number of identical dice, and B is their value.
      Thus a combination with more identical dice is always
      is always more valuable, and if the number is the same, the value is determined by the
      value of dice. */
    for(int j=0;j<5;j++) {
        double rs=currentcomb[j]/10.0;
        for (int i = 0; i < 5; i++) {
            if (currentcomb[j]==currentcomb[i]) rs++;
        }
        values.push_back(rs);
    }
    double result=values[0];
    for(int i=0;i<4;i++){
        if (result<values[i+1]) result = values[i+1];
    }
    return result;
}

void comb::setM(int i) {
    h.setM(i);
}


