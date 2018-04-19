#include <stdio.h>

void test()
{
    printf("%s\n", __FUNCTION__);
    printf("%s\n", __func__);
    printf("%s\n", __FILE__);
}
