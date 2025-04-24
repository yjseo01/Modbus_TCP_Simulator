#ifndef MODBUSMAP_H
#define MODBUSMAP_H

#include <QDebug>
#include <QByteArray>
#include <QtGlobal>

/* function code */
#define RC 0x01  // Read Coils
#define RDI 0x02 // Read Discrete Inputs
#define RMR 0x03 // Read Multiple Registers
#define RIR 0x04 // Read Input Registers
#define WSC 0x05 // Write Single Coil
#define WSR 0x06 // Write Single Register
#define WMR 0x10 // Write Multiple Registers
#define WMC 0x0F // Write Multiple Coils

class ModbusMap
{
    Q_OBJECT

private:
    int nbBits;
    int nbInputBits;
    int nbRegisters;
    int nbInputRegisters;

    uint8_t *tabBits;
    uint8_t *tabInputBits;
    uint16_t *tabRegisters;
    uint16_t *tabInputRegisters;

public:
    ModbusMap();
    ModbusMap(int, int, int, int);
    ~ModbusMap();

    /* table functions */
    void initMappingTbl();
    void resetMappingTbl();
    void freeMappingTbl();

    /* processing function code */
    int readCoils();
    int readDiscreteInputs();
    int readHoldingRegisters();
    int readInputRegisters();
    int writeSingleCoil();
    int writeSingleRegister();
    int writeMultipleRegisters();
    int writeMultipleCoils();
};

#endif // MODBUSMAP_H
