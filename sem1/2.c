#include <stdio.h>
#include <string.h>


void line(short len){
    for (short i; i <= len; i++){
        printf("*");
    }
}


short window_size(char s[30]){
    short i;
    do{ i++; } while (s[i] != '\0');


    return (i += 3);
}



int main(){      
    char str[30];
    gets(str);
//    scanf("%s", str);


    short name_len = strlen(str) + 3;
//    short name_len = window_size(str);


    line(name_len);
    printf("\n* %s *\n", str);
    line(name_len);


    
    return 0;                       
} 
