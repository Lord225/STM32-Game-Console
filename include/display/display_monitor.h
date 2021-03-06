#pragma once
#include "display_interface.h"
#include "agipo/serial.h"
#include "usart.h"

class DisplayMonitor : public DisplayInterface
{
    bool _screen[8][8];

public:
    DisplayMonitor() {}
    void set_pixel(int x, int y, bool state) override;
    bool get_pixel(int x, int y) override;
    void flush() override;
    void init() override;
};
