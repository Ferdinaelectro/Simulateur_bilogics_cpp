#ifndef __XNAND_H__
#define __XNAND_H__

class XNAND
{
    public:
        XNAND();
        bool in_out(bool in1, bool in2);

    private:
        bool m_in1;
        bool m_in2;
        bool m_out;

};

#endif