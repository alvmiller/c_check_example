#pragma once

#include <stdio.h>

#define __OUT__
#define __IN__

static int print_message(int value)
{
	printf("value = %d\n", value);
	if (value > 10 || value < 0) {
	    return (-1);
	}
	return (0);
}