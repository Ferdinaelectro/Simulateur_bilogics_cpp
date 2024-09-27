#include "NOR.h"

NOR::NOR(){}

bool NOR::in_out(bool in1, bool in2)
{
    return !(in1 || in2);
}