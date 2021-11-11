#ifndef BUSINTERFACE48_H
#define BUSINTERFACE48_H

#include "businterface.h"

class BusInterface48 : public BusInterface
{
    Q_OBJECT
public:
    BusInterface48();
    BusInterface48(QString rom_file_name);

    virtual uint8_t mem_read8(uint32_t addr) override;
    virtual void mem_write8(uint32_t addr, uint8_t value) override;

    virtual uint8_t io_read8(uint32_t addr) override;
    virtual void io_write8(uint32_t addr, uint8_t value) override;

    virtual const uint8_t * framebuffer() const override {return ram.getBuffer(16384);}

protected:
    ROMDevice rom;
    RAMDevice ram {16}; // 16 бит ширина адреса, 64кб объём

};

#endif // BUSINTERFACE48_H
