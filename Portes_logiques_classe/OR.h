#ifndef __OR_H__
#define __OR_H__

class OR
{
    public:
      OR();
      bool in_out(bool in1, bool in2);
      void set_in1(bool val);
      void set_in2(bool val);
      bool get_out();

    private:
      bool m_in1;
      bool m_in2;
      bool m_out;
    
};

#endif