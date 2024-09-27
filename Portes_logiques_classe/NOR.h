#ifndef __NOR_H__
#define __NOR_H__

class NOR
{
    public:
        NOR();
        bool in_out(bool in1, bool in2);

    private:
        bool m_in1;
        bool m_in2;
        bool m_out;

};

#endif