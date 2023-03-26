#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <dos.h>

int main(void)
{
    clock_t start, end;
    start = clock();
    delay(2000);
    end = clock();
    printf("The time was: %f\n",
                   (end - start) / CLK_TCK);
    return 0;
}