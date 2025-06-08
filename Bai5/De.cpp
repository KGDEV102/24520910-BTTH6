#include "De.h"
#include<random>
int De::SinhCon() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, 10);

    int result = distrib(gen);
    return result;
}
int De::ChoSua() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, 10);

    int result = distrib(gen);
    return result;
}
string De::Keu() {
    return "be be...";
}
