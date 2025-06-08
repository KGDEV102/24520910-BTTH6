#include "Bo.h"
#include<random>
int Bo::SinhCon() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, 10); 

    int result = distrib(gen);
    return result;
}
int Bo::ChoSua() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, 20); 

    int result = distrib(gen);
    return result;
}
string Bo::Keu(){
    return "um boooo...";
}
