#ifndef __XAND_H__
#define __XAND_H__

class XAND
{
    public:
        XAND();
        bool in_out(bool in1, bool in2);

    private:
        bool m_in1;
        bool m_in2;
        bool m_out;

};

#endif