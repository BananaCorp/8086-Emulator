#ifndef CPU8086_H
#define CPU8086_H

#include "cpu.h"
#include "reg8086.h"
#include "memory.h"

/*!
  Cpu8086 Declaration
*/
class Cpu8086 : public Cpu
{
public:
    Cpu8086();
    ~Cpu8086();

    bool Init();
    bool Execute(uint32_t mem);

private:
    CReg8086 m_Reg8086;
    CMemory m_Memory;
};


#endif // CPU8086_H
