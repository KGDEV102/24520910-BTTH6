#include "Cuu.h"
#include<random>
int Cuu::SinhCon() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, 10); 

    int result = distrib(gen);
    return result;
}
int Cuu::ChoSua() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, 5);

    int result = distrib(gen);
    return result;
}
string Cuu::Keu() {
    return "baaa...";
}
