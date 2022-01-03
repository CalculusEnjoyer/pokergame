#ifndef RANDOM_HPP_INCLUDED
#define RANDOM_HPP_INCLUDED
#include "fibo.hpp"

class random{
private:
    private:
    fibo f;
    int M = 59;
public:
    int next();
    void setM(int i);};

#endif
