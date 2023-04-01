#include <stdio.h>
#include <stdbool.h>




int main() {




    int g_chr;
    short int volume = 0;
    char triple_str[] = {'\0','\0','\0'};
    bool isEntered = true;




    while (g_chr != '\n') {
        g_chr = getchar();
       
        if (g_chr != ' ' && g_chr != '\t'){


            triple_str[volume] = g_chr;        // printf("%d %c\n",volume, triple_str[volume]);
            volume++;


            if (volume == 2){
                if(triple_str[0] != triple_str[1]){
                    triple_str[0] = triple_str[1];
                    volume--;
                }
            }


            if (volume == 3){
                if(triple_str[0] == triple_str[1] && triple_str[0] == triple_str[2]){
           
                    for (int i = 0; i < 3; i++)
                        putchar(triple_str[i]);
                   
                    while (true) {
                        g_chr = getchar();
           
                        if (g_chr != triple_str[0]){
                            break;
                        } else putchar(g_chr);
                    }
                   
                    putchar('\n');
                    volume = 0;


                } else if (triple_str[0] == triple_str[1] && triple_str[0] != triple_str[2]) {
                    triple_str[0] = triple_str[2];
                    volume = 1;
                }  
            }


            isEntered = true;
               
        } else {
            if (!isEntered){
                putchar('\n');
                isEntered = true;
            }
        }
    }


    return 0;
}
