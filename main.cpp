#include "comb.hpp"
#include<iostream>
#include <string>

int main(){
    comb p1,p2;
    std::vector <double> p1results, p2results;
    p1.setM(6); //test
    p2.setM(13);
    while(true){
        p1.getcomb();
        std::cout<<"Player's 1 combination: ";
        p1.coutcomb();
        p1results.push_back(p1.getcombval());
        p2.getcomb();
        std::cout<<"Player's 2 combination: ";
        p2.coutcomb();
        p2results.push_back(p2.getcombval());
        int s=p1results.size();
        for(int i=0;i<s;i++){
            if(p1results[s-1-i]>p2results[s-1-i]) {std::cout<<"Player 1 wins"<<std::endl; break;}
            else if (p1results[s-1-i]<p2results[s-1-i]){std::cout<<"Player 2 wins"<<std::endl; break;}
            else if(i==s-1) {std::cout<<"ITS DRAW"<<std::endl;}
        }
        std::cout<<"Do you want to play more?(Y/N)"<<std::endl;
        std::string answer;
        std::cin>>answer;
        if (answer=="N"||answer=="n")break;
    }
    return 0;
}



