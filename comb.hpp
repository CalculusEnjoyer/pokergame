#ifndef COMB_HPP_INCLUDED
#define COMB_HPP_INCLUDED
#include <vector>
#include "cubik.hpp"

class comb{
private:
    cubik h;
    std::vector <int> currentcomb;
    std::vector <double> values;
public:
    void getcomb();
    void coutcomb();
    double getcombval();
    void setM(int i);
};

#endif
