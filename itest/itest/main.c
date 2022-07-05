#include <stdio.h>

#include "common.h"
#include "stdio.h"
#include "mymodule/stdio.h"
#include "mymodule/func/func.h"

#include <func/stdio.h>

int main(void)
{
    printf("MY_STDIO_VALUE = %d\n", MY_STDIO_VALUE);
    printf("MY_MODULE_VALUE = %d\n", MY_MODULE_VALUE);
    printf("MY_MODULE_STDIO_VALUE = %d\n", MY_MODULE_STDIO_VALUE);
    static_assert(MY_MODULE_VALUE == MY_COMMON_VALUE, "Not equal");

    printf("EXT_MODULE_STDIO_VALUE = %d\n", EXT_MODULE_STDIO_VALUE);
}

