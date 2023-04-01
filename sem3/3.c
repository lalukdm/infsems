#include <stdio.h>
#include <string.h>


#define LEN 4096


int main() {


    char s1[LEN] = "";
    int ascii_freq[37] = {};               //48-57; 65-90; 97-122;
    char num[32] = "0123456789",
         letter[32] = "abcdefghijklmnopqrstuvwxyz",
         Letter[32] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";


    for(int i = 0; s1[i - 1] != '\n'; i++)
        s1[i] = getchar();
   
    int str_len = strlen(s1);
   
    for(int i = 0; i <= str_len; i++){
        for(int j = 0; j <= 64; j++){
            if(s1[i] == num[j]){
                ascii_freq[j]++;
            } else if (s1[i] == letter[j] || s1[i] == Letter[j]){
                ascii_freq[j + 10]++;
            }
        }
    }


    for (int i = 0; i <= 35; i++){
        if(i < 10){ printf("%c: ", num[i]);    
        } else{      printf("%c: ", letter[i-10]);}


        for(int j = 1; j <= ascii_freq[i]; j++)
            printf("#");
       
        printf("\n");
    }


    printf("\n\n\n");


    int max = ascii_freq[0];


    for(int i = 0; i < 37; ++i){
        if (ascii_freq[i] > max)
            max = ascii_freq[i];
    }


    for (int i = 0; i < max; i++){
        for(int j = 0; j <= 35; j++){
            if((max-i) > ascii_freq[j]){
                printf(" ");
            } else {
                printf("#");
            }
        }
        printf("\n");
    }


    for (int i = 0; i <= 35; i++){
        if(i < 10){ printf("%c", num[i]);    
        } else{      printf("%c", letter[i-10]);}
    }


    return 0;
}
