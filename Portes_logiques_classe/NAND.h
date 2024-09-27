#ifndef __NAND_H__
#define __NAND_H__

class NAND
{
    public:
      NAND();
      bool in_out(bool in1, bool in2);

    private:
      bool m_in1;
      bool m_in2;
      bool m_out;
    
};

#endif