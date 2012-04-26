/*
 * Copyright (C) 2012
 * Jamie Lentin <jm@lentin.co.uk>
 *
 * Based on dns325 support:
 * Copyright (C) 2011
 * Stefan Herbrechtsmeier <stefan@code.herbrechtsmeier.net>
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301 USA
 */

#ifndef __DNS320_H
#define __DNS320_H

/* GPIO configuration */
#define DNS320_OE_LOW			0x00000000
#define DNS320_OE_HIGH			0x00039604
#define DNS320_OE_VAL_LOW		0x38000000	/* disable leds */
#define DNS320_OE_VAL_HIGH		0x00000808	/* disable leds */

#define DNS320_GPIO_LED_POWER		26
#define DNS320_GPIO_SATA0_EN		39
#define DNS320_GPIO_SATA1_EN		40

/* PHY related */
#define MV88E1116_MAC_CTRL_REG		21
#define MV88E1116_PGADR_REG		22
#define MV88E1116_RGMII_TXTM_CTRL	(1 << 4)
#define MV88E1116_RGMII_RXTM_CTRL	(1 << 5)

#endif /* __DNS320_H */
