#include <iostream>
#include "lab4_module.cpp"

std::ostream& operator<<(std::ostream& os, const QadraticEquation& QE) {
    os << "Коэффиценты: "<<"a = "<<QE.a << " " <<"b = " <<QE.b << " " << "c = "<<QE.c;
    return os;
};
