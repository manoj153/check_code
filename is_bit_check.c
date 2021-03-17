 /*       
  *       Copyright (c) Electrolance Solutions
  *       Author: Manojkumar <manoj@electrolance.com>
  *       SPDX-License-Identifier: Apache-2.0
  *       Test bits macro 	      
  */

#include <stdio.h>
#include <stdint.h>
#define IS_BIT_SET(byte, pos) ((byte >> pos) & 1)


int main()
{
	char x;
	x = 1;

	if (IS_BIT_SET(x, 0)) {
		printf("IS BIT=LEFT\n");
	}

	if (IS_BIT_SET(x, 1)) {
		printf("IS BIT=RIGHT\n");
	}

	return 0;
}

