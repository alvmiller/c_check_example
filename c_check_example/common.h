#pragma once

#include <stdio.h>

#define __IN__ 

static int get_value(__IN__ int value)
{
	printf("value = %d\n", value);
	if (value > 10 || value < 0) {
	    return (-1);
	}
	return (0);
}