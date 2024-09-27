#include "OR.h"

OR::OR()
{
    m_out = 0;
    m_in1 = 0;
    m_in2 = 0;
}

bool OR::in_out(bool in1, bool in2)
{
    return (in1 || in2);
}

void OR::set_in1(bool val)
{
    m_in1 = val;
}

void OR::set_in2(bool val)
{
    m_in2 = val;
}

bool OR::get_out()
{
    m_out = (m_in1 || m_in2);
    return m_out;
}