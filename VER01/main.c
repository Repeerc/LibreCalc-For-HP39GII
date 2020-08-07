/*
 * A simple user interface for this project
 *
 * Copyright 2020 Creep_er
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 */

#include <stdarg.h>
#include "regsdigctl.h"
#include "regsuartdbg.h"
#include "uart_debug.h"

void delay_us(unsigned int us)
{
	unsigned int start , cur;
	start = cur = HW_DIGCTL_MICROSECONDS_RD();
	while (cur < start+us) {
		cur = HW_DIGCTL_MICROSECONDS_RD();
	}

}

void _boot(){
	unsigned int time = 0;
	while(1){
		uartdbg_printf("TIME:%d\n",time);
		uartdbg_print_regs();
		time++;
		delay_us(1000000);
	}
}

