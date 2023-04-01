#include <stdio.h>
#include <string.h>


#define LEN 32


char sss(char s1[], char s2[], int str_len){
    for (int i = 0; i <= str_len; i++){
        for (int j = 0; j <= str_len; j++){
            if(s1[j] == s2[i]){
                s1[j] = '\0';
            }
        }
    }
}


int main() {


    char s1[LEN], s2[LEN];
   
    for(int i = 0; s1[i - 1] != '\n'; i++)
        s1[i] = getchar();
   
    int str_len = strlen(s1);
   
    for(int i = 0; s2[i - 1] != '\n'; i++)
        s2[i] = getchar();


    sss(s1, s2, str_len);


    for (int i = 0; i <= str_len; i++)
        putchar(s1[i]);


    return 0;
}
