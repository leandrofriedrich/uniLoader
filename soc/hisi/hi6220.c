/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2023, Leandro Friedrich <email@leandrofriedrich.de>
 */

#include <soc/hi6220.h>

void print_uart0(const char *s) {
    while(*s != '\0') { 		/* Loop until end of string */
         *UART0DR = (unsigned int)(*s); /* Transmit char */
          s++;			        /* Next char */
    }
}

void soc_init(void) {
	print_uart0("Hello from uniloader!\n");
}
