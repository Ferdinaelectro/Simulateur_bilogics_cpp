#include "XNOR.h"

XNOR::XNOR(){}

bool XNOR::in_out(bool in1, bool in2)
{
    return !((in1 || in2) && (!in1 || !in2));
}