#include "NAND.h"
#include <iostream>

NAND::NAND(){};

bool NAND::in_out(bool in1, bool in2)
{
    return !(in1 && in2);
}