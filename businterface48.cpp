#include "businterface48.h"

#if defined(WIN32)
BusInterface48::BusInterface48():
    rom("rom/48.rom")
{

}
#endif


#if defined(Q_OS_ANDROID)
BusInterface48::BusInterface48():
    rom("assets:/rom/48.rom")
{

}
#endif

BusInterface48::BusInterface48(QString rom_file_name):
    rom(rom_file_name)
{

}

uint8_t BusInterface48::mem_read8(uint32_t addr)
{
    if (addr < 0x4000)
        return rom.read8(addr);
    return ram.read8(addr);
}

void BusInterface48::mem_write8(uint32_t addr, uint8_t value)
{
    if (addr >= 0x4000)
        ram.write8(addr, value);
}

uint8_t BusInterface48::io_read8(uint32_t addr)
{
    if ((addr & 1) == 0)
        return portfe.read8(addr);
    if((addr & 0b100000) == 0)
        return port1f.read8(addr);
    return 0xff;
}

void BusInterface48::io_write8(uint32_t addr, uint8_t value)
{
    if ((addr & 1) == 0)
        portfe.write8(addr, value);
}
