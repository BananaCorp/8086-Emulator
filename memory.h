#ifndef MEMORY_H
#define MEMORY_H

class CMemory
{
public:
    CMemory();
    ~CMemory();

    inline uint8_t Read_Byte(uint32_t mem);
    inline uint16_t Read_Word(uint32_t mem);
    inline uint32_t Read_Dword(uint32_t mem);

    inline void Write_Byte(uint32_t mem, uint8_t);
    inline void Write_Word(uint32_t mem, uint26_t);
    inline void Write_Dword(uint32_t mem, uint32_t);

    Mem_memcpy(uint32_t src, uint32_t dst, int32_t size);

private:
    uint32_t m_Base;
    uint16_t m_Sizep;

};

#endif // MEMORY_H
