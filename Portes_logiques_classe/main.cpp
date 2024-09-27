#include <iostream>
#include "OR.h"
#include "AND.h"

int main()
{
    AND p1;
    OR p2;
    AND p3;
    AND p4;
    p1.set_in1(1);
    p1.set_in2(0);
    p2.set_in2(1);
    p3.set_in1(0);
    p2.set_in1(p1.get_out());
    p3.set_in2(p2.get_out());
    p4.set_in1(p3.get_out());
    p4.set_in2(p1.get_out());
    //std::cout << p1.get_out()<<std::endl;
    std::cout << "Sortie p1 = "<<p1.get_out()<<std::endl;
    std::cout << "Sortie p2 = "<<p2.get_out()<<std::endl;
    std::cout << "Sortie p3 = "<<p3.get_out()<<std::endl;
    std::cout << "Sortie p4 = "<<p4.get_out()<<std::endl;
    return 0;
}