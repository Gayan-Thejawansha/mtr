/*
    mtr  --  a network diagnostic tool
    Copyright (C) 1997,1998  Matt Kimball

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License version 2 as 
    published by the Free Software Foundation.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
    
*/

/*
 *@author Gayan Thejawansha
 */

const struct {
    const char * address;
    const char * labal;
	} address_list[] = {{.address = "103.4.97.146", .labal = "-Link A" } ,
				{.address = "103.4.99.26", .labal = "-Link B" } ,
				{.address = "103.4.99.80", .labal = "-Link C" } ,
				{.address = "72.14.223.220", .labal = "-Link D" } ,
				{.address = "72.14.202.225", .labal = "-Link E" } ,
				{.address = "72.14.195.142", .labal = "-Link F" } ,
				{.address = "72.14.211.152", .labal = "-Link G" } ,
				{.address = "119.235.0.161", .labal = "-Link H" } ,
				{.address = "134.0.220.152", .labal = "-Link I" } ,
				{.address = "202.126.128.117", .labal = "-Link K" } ,
				{.address = "149.14.125.137", .labal = "-Link L" } ,
				{.address = "62.115.155.64", .labal = "-Link M" } ,
				{.address = "195.229.27.81", .labal = "-Link N" } ,
				{.address = "183.91.56.89", .labal = "-Link O" } ,
				{.address = "180.87.39.149", .labal = "-Link P" } ,
				{ .address = "213.242.116.209", .labal = "-Link Q" } ,
				{.address = "119.235.0.129", .labal = "-Link R" } ,
				{.address = "116.51.31.221", .labal = "-Link S" },
				{.address = "default", .labal = " " }};

 
extern int search_from_given_IP_list(
    char * targetAddress);
    
    
