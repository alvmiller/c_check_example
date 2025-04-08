#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <strings.h>
#include "common.h"

// make
// make app_tests

int main(__attribute__((unused)) int argc,
         __attribute__((unused)) char *argv[])
{
	(void)get_value(2);
    return (0);
}