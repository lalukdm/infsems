#include <stdio.h>
#include <stdbool.h>


int main() {


    int g_chr;
    bool isEntered = true;


    while (g_chr != '\n') {
        g_chr = getchar();
   
        if (g_chr != ' ' && g_chr != '\t'){
            putchar(g_chr);
            isEntered = true;


        } else {
            if (isEntered){
                putchar('\n');
                isEntered = false;
            }
        }
    }




    return 0;
}
