#include "2440addr.h"

void disable_watch_dog()
{
    rWTCONÅ@= 0;
}

void memsetup()
{
    
}

void port_init()
{
    
}

void isr_init()
{
    
}

void disable_all_interrupt()
{
    rINTMSK = 0xffffffff;
}

void stage1()
{
    disable_all_interrupt();
    disable_watch_dog();
    sys_clk_setup();
    memsetup();
}

void stage2()
{
}

void uart_init()
{
    /* code */
}
