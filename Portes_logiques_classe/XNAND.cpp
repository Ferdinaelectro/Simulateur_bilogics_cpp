#include "XNAND.h"

XNAND::XNAND(){}

bool XNAND::in_out(bool in1, bool in2)
{
    return !((in1 && in2) || (!in1 && !in2));
}