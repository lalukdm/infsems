#include <stdio.h>




int type_c(char c){
    if        ((int)c < 58 && (int)c > 47){
        return 1;                                       // isDigital
    } else if ((int)c < 91 && (int)c > 64){
        return 1;                                       // isHighLetter
    } else if ((int)c < 123 && (int)c > 96){
        return 1;                                       // isLowLetter
    } else{
        return 0;
    }
}


int main() {




    int j;
    char s1[32], s2[256];
                                    //48-57: 0-9;  65-90: A-Z;  97-122: a-z;
    for(int i = 0; s1[i-1] != '\n'; i++)
        s1[i] = getchar();


    for(int i = 0; s1[i] != '\0'; i++){
        if(type_c(s1[i]) != 0){
            if(type_c(s1[i]) == 1 && type_c(s1[i + 2]) == 1){
                if (s1[i+1] == '-'){
                    int div = (int)s1[i + 2] - (int)s1[i];
                    if(div >= 0){
                        for(int k = 0; k <= div; k++){
                            s2[j + k] = (char)((int)s1[i] + k);
                        }
                        i += 2;
                        j += (div + 1);
                    } else {
                        for(int k = 0; k <= -div; k++){
                            s2[j + k] = (char)((int)s1[i] - k);
                        }
                        i += 2;
                        j += (1 - div);
                    }
                } else{
                    for (int k = 0; k < 3; k++)
                        s2[j + k] = s1[i + k];
                    i += 2;
                    j += 3;
                }
               
            } else {
                for (int k = 0; k < 3; k++)
                    s2[j + k] = s1[i + k];
                i += 2;
                j += 3;
            }
        } else s2[j] = s1[i];
    }








    for (int i = 0; s2[i + 1] != '\0'; i++)
        putchar(s2[i]);




    return 0;
}
