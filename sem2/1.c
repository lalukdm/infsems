#include <stdio.h>

int main() {

    int g_chr;

    while (g_chr != '\n'){
        g_chr = getchar();
   
        if (g_chr != ' ' && g_chr != '\t')
            putchar(g_chr);
    }




    return 0;
}
