#include <stdio.h>


int main(){
    int dim;


    printf("Put down the dimention: ");
    scanf("%d", &dim);


    for (int i = 1; i <= dim ; i++) {
        for (int j = 1; j <= dim ; j++) {
             printf ("%5d", i * j);
        }
        printf("\n");
    }


    return 0;
}
