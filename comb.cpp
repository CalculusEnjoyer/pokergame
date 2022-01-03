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
    /*Обчилює та повертає "цінність" комбінації у вигляді числа А.В
      де А найбільша кількість однакових кубиків,а В - їхнє значення.
      Таким чином комбінація з більшою к-стю однакових кубиків завжди
      більш цінна, а якщо кількість однакова, цінність визначається по
      значенню кубиків */
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


