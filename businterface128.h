#ifndef BUSINTERFACE128_H
#define BUSINTERFACE128_H

#include "businterface.h"
#include "port7ffd.h"

class BusInterface128 : public BusInterface
{
    Q_OBJECT
public:
    BusInterface128();
    BusInterface128(QString rom_file_name);

    virtual uint8_t mem_read8(uint32_t addr) override;
    virtual void mem_write8(uint32_t addr, uint8_t value) override;

    virtual uint8_t io_read8(uint32_t addr) override;
    virtual void io_write8(uint32_t addr, uint8_t value) override;

    virtual const uint8_t * framebuffer() const override {
        return ram.getBuffer(0x4000 * mapper.vram_page());
    }

    virtual void reset() override {}

protected:
    ROMDevice rom;
    RAMDevice ram {17}; // 17 бит ширина адреса, 64кб объём
    Port7FFD mapper;

};

#endif // BUSINTERFACE128_H
