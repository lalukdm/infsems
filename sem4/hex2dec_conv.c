#include "hex2dec_conv.h"

uint64_t pow_(uint64_t x, uint64_t n) {
    if(n == 0) return 1;
    if(n < 0) return pow_( 1 / x, -n);
    return x * pow_(x, n - 1);
}

uint64_t hex2dec(char str[]) {
    uint64_t res = 0;
    int i = (strlen(str) - 2);
    int j = i;
   
    for(i; i >= 0; i--){

        if (str[i] >= '0' && str[i] <= '9')
            res += (str[i] - '0') * pow_(16, (j - i));
        else if (str[i] >= 'A' && str[i] <= 'F')
            res += (str[i] - 'A' + 10) * pow_(16, (j - i));
        else if (str[i] >= 'a' && str[i] <= 'f')
            res += (str[i] - 'a' + 10) * pow_(16, (j - i));
        else
            res = -1;
    }
    return res;
}