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


#ifndef __NAND_H
#define __NAND_H
#ifdef __cplusplus 
extern "C" { 
#endif
struct gpmi_timing {
	unsigned char DataSetup;
	unsigned char DataHold;
	unsigned char AddressSetup;
	unsigned char HalfPeriods;
	unsigned char SampleDelay;
	unsigned char NandTimingState;
	unsigned char tREA;
	unsigned char tRLOH;
	unsigned char tRHOH;
};

void NAND_init();
#ifdef __cplusplus 
} 
#endif

#endif

