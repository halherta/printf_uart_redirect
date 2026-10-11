#include <stdint.h>
#include "usart.h"
extern UART_HandleTypeDef hlpuart1;

//uncomment only one of these sections

//Section 1
// here we define __io_putchar which is then called by the 'weak' _write in syscalls.c
// one function call per char in string/buffer 

/*
int __io_putchar(int ch)
{
    uint8_t c = (uint8_t)ch;
    HAL_UART_Transmit(&hlpuart1, &c, 1, HAL_MAX_DELAY);
    return ch;
}
*/

// Section 2
// Here we re-define the whole write function. This definition runs
// instead of the one in syscalls.c because that one is 'weak'
// One function call for the entire string/buffer
int _write(int fd, char *ptr, int len)
{
    (void)fd;
    HAL_UART_Transmit(&hlpuart1, (uint8_t *)ptr, (uint16_t)len, HAL_MAX_DELAY);
    return len;
}
