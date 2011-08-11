#include "include.h"

int main()
{
    disable_watch_dog();
    memsetup();
    port_init();
    isr_init();
    os_frequency_set();
    uart_init();

    while(1){

    }

    return 0;
}
