#ifndef REG8086_H
#define REG8086_H

/*!
  CReg8086 Declaration
*/
class CReg8086
{
public:
    CReg8086();
    ~CReg8086();

    uint16_t getRegister(REG r);
    void setRegister(REG r, uint16_t value);

private:

    enum{
        REG_AX,
        REG_BX,
        REG_CX,
        REG_DX,
        REG_SI,
        REG_DI,
        REG_BP,
        REG_SP,

        REG_IP,

        // 16 bit
        REG_CS,
        REG_DS,
        REG_ES,
        REG_SS,
        FLAG
    }REG;


    uint16_t R[sizeof(REG)];


};


#endif // REG8086_H
