#ifndef CUBIK_HPP_INCLUDED
#define CUBIK_HPP_INCLUDED
#include "random.hpp"

class cubik{
private:
    random r;
public:
    void setM(int i);
    int next();
    };

#endif
