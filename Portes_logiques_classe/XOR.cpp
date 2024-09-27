#include "XOR.h"

XOR::XOR(){}

bool XOR::in_out(bool in1, bool in2)
{
    return ((in1 || in2) && (!in1 || !in2));
}