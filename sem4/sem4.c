#include <stdio.h>
#include <stdint.h>

#define LEN 32

int main() {

    char get_str[LEN] = "";
    uint32_t num;
    uint8_t count = 0;
    
    printf("Enter the hex number, max bit depth is %d\n>>>", LEN);

    for(int i = 0; get_str[i - 1] != '\n'; i++)
        get_str[i] = getchar();

    num = hex2dec(get_str);

    if(num != -1){
    
        printf("Decimal: %d\n", num);
    
        for(int i = 0; i < sizeof(num) * 8; i += 2) {
            count += checkbit(num, i);    //printf("i = %d; b = %d\n", i, checkbit(num, i));
        }
    
    } else
        puts("not a hex");

    printf("Number of odd bits: %d", count);
    
    return 0;
}
