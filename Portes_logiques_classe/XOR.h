#ifndef __XOR_H__
#define __XOR_H__

class XOR
{
    public:
        XOR();
        bool in_out(bool in1, bool in2);

    private:
        bool m_in1;
        bool m_in2;
        bool m_out;

};

#endif