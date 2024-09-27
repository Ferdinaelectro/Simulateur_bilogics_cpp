#ifndef __XNOR_H__
#define __XNOR_H__

class XNOR
{
    public:
        XNOR();
        bool in_out(bool in1, bool in2);

    private:
        bool m_in1;
        bool m_in2;
        bool m_out;

};

#endif